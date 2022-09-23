/************************************************/
/* Programa: Ejemplo de libreria lista*/
/* Descripcion: Realizar una libreria para el uso */
/* y manejo de las listas */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/

#ifndef PEL_LIST_HPP_INCLUDED
#define PEL_LIST_HPP_INCLUDED

#include <cstddef> 
#include <functional> 
#include <initializer_list>
#include <utility> 
using namespace std;


namespace detail {

struct NodeBase {
   NodeBase* prev, 
           * next; 

   void hook(NodeBase* b) noexcept 
   {
      next = b;
      prev = b->prev;
      b->prev = b->prev->next = this;
   }

   void unhook() noexcept 
   {
      prev->next = next;
      next->prev = prev;
      next = prev = this;
   }

   void swap(NodeBase& b)  noexcept
   {
      if (next != this) { 
         if (b.next != &b) { 
            swap(next,b.next);
            swap(prev,b.prev);
            next->prev = prev->next = this;
            b.next->prev = b.prev->next = &b;
         }
         else { 
            b.next = next;
            b.prev = prev;
            b.next->prev = b.prev->next = &b;
            next = prev = this;
         }
      }
      else if (b.next != &b) { 
         next = b.next;
         prev = b.prev;
         next->prev = prev->next = this;
         b.next = b.prev = &b;
      }
   }

   void transfer(NodeBase* first, NodeBase* last) noexcept
   {
      if (this == last)
         return;

      auto tmp = last->prev;

      first->prev->next = last;
      last->prev->next = this;
      last->prev = first->prev;

      first->prev = prev;
      prev->next = first;
      prev = tmp;
   }
};

}
template<typename T> 
class List {

   struct Node : detail::NodeBase { 
      T data; 
      Node(T const& d) : data(d) { };
   };

   detail::NodeBase dnb_;
public:

   struct ListIterator;
   struct ListConstIterator;

   // Construccion/Copy/destruccion:

   List() noexcept  
      : dnb_{&dnb_,&dnb_} { }

   List(initializer_list<T> const& list)
      : dnb_{&dnb_,&dnb_}
   {
     try {
         for (auto const& val : list)
            pushBack(val);
      }
      catch (...) {
         clear();
         throw;
      }
   }

   List(List<T> const& list) 
      : dnb_{&dnb_,&dnb_}
   {
      try {
         for (auto const& val : list)
            pushBack(val);
      }
      catch (...) {
         clear();
         throw;
      }
   }

   List<T>& operator=(List<T> const& list) 
   {
      List<T> tmp{list};
      dnb_.swap(tmp.dnb_);
      return *this;
   } 

   ~List() { clear(); }

   T&       front()       { return *begin(); } 
   T const& front() const { return *begin(); }

   T&       back()       { return *(--end()); } 
   T const& back() const { return *(--end()); }


   void popFront() noexcept { erase(begin()); }
   void popBack()  noexcept { erase(ListIterator{dnb_.prev}); }

   void pushFront(T const& val) { insert(begin(),val); }
   void pushBack(T const& val)  { insert(ListIterator{&dnb_},val); }

   void insert(ListIterator position, T const& val)
   {
      Node* p = new Node{val};
      p->hook(position.node);
   }

   void insert(ListIterator position, initializer_list<T> const& list)
   {
      if (!list.size())
         return;

      List<T> tmp{list};
      position.node->transfer(tmp.begin().node,tmp.end().node);
   }

   ListIterator erase(ListIterator position) noexcept
   {
      ListIterator ret{position.node->next};
      position.node->unhook();
      delete static_cast<Node*>(position.node); 
      return ret;
   }

   void transfer(ListIterator position, ListIterator first, ListIterator last) 
   {
      position.node->transfer(first.node,last.node);
   }

   template<typename Compare = less<T>> 
   void sort(Compare comp = Compare{}) 
   {
      mergeSort(*this,comp);
   }

   template<typename Compare = less<T>> 
   void merge(List<T>& list, Compare comp = Compare{}) 
   {
      if (this == &list)
         return;

      auto first1 = begin(),
            last1 = end(),
           first2 = list.begin(),
            last2 = list.end();
      while (first1 != last1 && first2 != last2) {
         if (comp(*first2,*first1)) {
            auto next = first2;
            transfer(first1,first2,++next);
            first2 = next;
         }
         else
            ++first1;
      }
      if (first2 != last2)
         transfer(last1,first2,last2);
   }

   void clear() noexcept
   {
      auto current = dnb_.next;
      while (current != &dnb_) {
         auto tmp = current;
         current = current->next;
         delete static_cast<Node*>(tmp); 
      }
      dnb_.next = dnb_.prev = &dnb_;
   }

   size_t size() const noexcept
   {
      size_t sz = 0;
      auto p = dnb_.next;
      while (p != &dnb_) {
         ++sz;
         p = p->next;
      }
      return sz;
   }

   bool empty() const noexcept { return dnb_.next == &dnb_; }

   ListConstIterator begin() const noexcept { return ListConstIterator{dnb_.next}; }
   ListIterator      begin()       noexcept { return ListIterator{dnb_.next}; }

   ListConstIterator end() const noexcept { return ListConstIterator{&dnb_}; }
   ListIterator      end()       noexcept { return ListIterator{&dnb_}; }

   struct ListIterator {
      detail::NodeBase* node;

      explicit ListIterator(detail::NodeBase* node_ = nullptr) noexcept
         : node{node_} { }

      bool operator==(ListIterator const& rhs) const noexcept { return node == rhs.node; }
      bool operator!=(ListIterator const& rhs) const noexcept { return node != rhs.node; }

      T& operator*() const
      {
         return static_cast<Node*>(node)->data; 
      }
      T* operator->() const noexcept
      {
         return &(static_cast<Node*>(node)->data); 
      }

      ListIterator& operator++() noexcept 
      {
         node = node->next;
         return *this;
      }
      ListIterator operator++(int) noexcept 
      {
         auto tmp = *this;
         node = node->next;
         return tmp;
      }
      ListIterator& operator--() noexcept 
      {
         node = node->prev;
         return *this;
      }
      ListIterator operator--(int) noexcept 
      {
         auto tmp = *this;
         node = node->prev;
         return tmp;
      }
   };

   struct ListConstIterator {
      detail::NodeBase const* node;

      explicit ListConstIterator(detail::NodeBase const* node_ = nullptr) noexcept
         : node{node_} { }

      bool operator==(ListConstIterator const& rhs) const noexcept { return node == rhs.node; }
      bool operator!=(ListConstIterator const& rhs) const noexcept { return node != rhs.node; }

      T const& operator*() const
      {
         return static_cast<Node const*>(node)->data;
      }
      T const* operator->() const noexcept
      {
         return &(static_cast<Node const*>(node)->data);
      }

      ListConstIterator& operator++() noexcept
      {
         node = node->next;
         return *this;
      }
      ListConstIterator operator++(int) noexcept
      {
         auto tmp = *this;
         node = node->next;
         return tmp;
      }
      ListConstIterator& operator--() noexcept
      {
         node = node->prev;
         return *this;
      }
      ListConstIterator operator--(int) noexcept
      {
         auto tmp = *this;
         node = node->prev;
         return tmp;
      }
   };
private:
   template<typename Compare> 
   void mergeSort(List<T>& list, Compare comp)
   {
      auto const sz = list.size();
      if (sz <= 1)
         return;

      List<T> left; 
      auto middle = list.begin();
      for (size_t i = 0; i < sz/2; ++i)
         ++middle;
      left.transfer(left.begin(),list.begin(),middle);
      mergeSort(left,comp);
      mergeSort(list,comp);
      list.merge(left,comp);
   }
};
#endif 

/************************************************/
/* Programa: Ejemplo de libreria array dinamico                 */
/* Descripcion: Realizar una libreria para el uso de */
/* los arrays dinamicos */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/
#ifndef PEL_DYNARRAY_HPP_INCLUDED
#define PEL_DYNARRAY_HPP_INCLUDED

#include <cstddef>
#include <stdexcept>
#include <utility>
using namespace std;


template<typename T> 

class Dynarray {
   size_t size_; 
   T* first_;

   void checkRange(size_t idx)
   {
      if (idx >= size_)
         throw out_of_range{"Index out of range"};
   }
public:
   // construccion/operaciones de copia/destruccion:
   Dynarray(size_t size = 0) // constructor #1
      : size_{size}, first_{(size_)? new T[size_] : nullptr}
   { }

   Dynarray(size_t size, T const& val) // constructor #2
      : Dynarray{size}
   {
      try {
         for (size_t i = 0; i < size_; ++i)
            first_[i] = val;
      }
      catch (...) {
         delete[] first_;
         throw;
      }
   }

   Dynarray(Dynarray<T> const& d) 
      : Dynarray{d.size()}
   {
      try {
         for (size_t i = 0; i < size_; ++i)
            first_[i] = d.first_[i];
      }
      catch (...) {
         delete[] first_;
         throw;
      }
   }

   Dynarray<T>& operator=(Dynarray<T> const& d) 
   {
      Dynarray<T> tmp{d};
      swap(size_,tmp.size_);
      swap(first_,tmp.first_);
      return *this;
   }

   ~Dynarray() { delete[] first_; } /

   T const& operator[](size_t idx) const { return first_[idx]; }
   T&       operator[](size_t idx)       { return first_[idx]; }

   T const& at(size_t idx) const { checkRange(idx); return first_[idx]; }
   T&       at(size_t idx)       { checkRange(idx); return first_[idx]; }
   size_t size()  const { return size_; }
   bool        empty() const { return !first_; }
   T const* begin() const { return first_; }
   T*       begin()       { return first_; }

   T const* end() const { return first_ + size_; }
   T*       end()       { return first_ + size_; }
};



#endif

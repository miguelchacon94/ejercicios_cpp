/************************************************/
/* Programa: Ejemplo de libreria sort                 */
/* Descripcion: Realizar una libreria para el uso de */
/* la busqueda rapida sort */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/

#ifndef PEL_QUICK_SORT_HPP_INCLUDED
#define PEL_QUICK_SORT_HPP_INCLUDED

#include <random>
using namespace std;



int randInt(int low, int high)
{
   

   static default_random_engine re;
   uniform_int_distribution<int> uid{low,high};
   return uid(re);
}

template<typename RandomIter, typename Predicate>
RandomIter partitionRange(RandomIter first, RandomIter last, Predicate pred)
{
   for ( ; ; ) {
      while ((first != last) && pred(*first))
         ++first;

      if (first == last--)
         break;

      while ((first != last) && !pred(*last))
         --last;

      if (first == last)
         break;

      std::iter_swap(first,last);
      ++first;
   }
   return first;
}

template<typename RandomIt, typename Compare>
void quickSort(RandomIt first, RandomIt last, Compare comp)
{
   using ValueType = decltype(*first);

   auto const sz = last - first;
   if (sz <= 1)
      return;

   auto pivot = *(first + randInt(0,sz-1));

   auto middle1 = partitionRange(first,last,
                     [&pivot,&comp](ValueType const& e){ return comp(e,pivot); });
   auto middle2 = partitionRange(middle1,last,
                     [&pivot,&comp](ValueType const& e){ return !comp(pivot,e); });

   quickSort(first,middle1,comp);
   quickSort(middle2,last,comp);
}

template<typename RandomIt>
void quickSort(RandomIt first, RandomIt last)
{
   using ValueType = decltype(*first);
   quickSort(first,last,[](ValueType const& a, ValueType const& b){ return a < b; });
}



#endif 

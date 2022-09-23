/************************************************/
/* Programa: Ejemplo de libreria array dinamico                 */
/* Descripcion: Realizar una libreria para el uso de */
/* la inserción rapida mediante sort */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/

#ifndef PEL_INSERTION_SORT_HPP_INCLUDED
#define PEL_INSERTION_SORT_HPP_INCLUDED

template<typename BidirectionalIterator, typename Compare>
void insertionSort(BidirectionalIterator first, BidirectionalIterator last,
                   Compare comp)
{
   if (first == last) 
      return;

   auto p = first;
   ++p; 

   while (p != last) {
      auto val = *p;
      auto q = p;

      do {
         auto previous = q;
         --previous;
         if (comp(*previous,val))
            break;
         *q = *previous;
         --q;
      }
      while (q != first);

      *q = val;
      ++p; 
   }
}
template<typename BidirectionalIterator>
void insertionSort(BidirectionalIterator first, BidirectionalIterator last)
{
   using ValueType = decltype(*first);
   insertionSort(first,last,
                 [](ValueType const& a, ValueType const& b){ return a < b; });
}


#endif 

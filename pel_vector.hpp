/************************************************/
/* Programa: Ejemplo de libreria vector                 */
/* Descripcion: Realizar una libreria para el uso de vectores*/
/* con cada una de las funciones */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/

#ifndef PEL_VECTOR_HPP_INCLUDED
#define PEL_VECTOR_HPP_INCLUDED

#include <cstddef>
#include <stdexcept>

using namespace std;

template<typename T> 
class Vector {
   T* v_,     
    * space_, 
    * last_;  

    void checkRange(size_t i)
    {
        if (i >= size())
            throw out_of_range{"Out of range index"};
    }
public:
   // Cinstruccion/copia/destruccion:

   Vector() 
      : v_{new T[0]}, space_{v_}, last_{v_} { }

   Vector(size_t size, T const& val)
      : v_{new T[size]}, space_{v_ + size}, last_{space_}
   {
      try {
         for (size_t i = 0; i < size; ++i)
            *(v_ + i) = val; 
      }
      catch (...) {
         delete[] v_;
         throw;
      }
   }

   Vector(Vector<T> const& other) 
      : v_{new T[other.size()]}, space_{v_ + other.size()},
        last_{space_}
   {
      try {
         for (size_t i = 0; i < other.size(); ++i)
            *(v_ + i) = other[i]; 
      }
      catch (...) {
         delete[] v_;
         throw;
      }
   }

   Vector<T>&  operator=(Vector<T> const& other) 
   {
      Vector<T> tmp{other};
      swap(v_,tmp.v_);
      swap(space_,tmp.space_);
      swap(last_,tmp.last_);
      return *this;


   ~Vector() { delete[] v_; } // destructor



   void pushBack(T const& val) 
   {
       if (space_ == last_) { 
            size_t sz = size(), // tamaño original
                        cp = (sz == 0)? 2 : 2*sz; // nueva capacidad

            T* newBlock = new T[cp]; // nuevo bloque de memoria
            try {
                for (size_t i = 0; i < sz; ++i)
                    newBlock[i] = v_[i]; // equivalente a: *(newBlock + i) = *(v_ + i);
            }
            catch (...) {
                delete[] newBlock; 
                throw; 
            }

            delete[] v_;
            v_ = newBlock;
            space_ = newBlock + sz;
            last_ = newBlock + cp;
       }

       *space_ = val;
       ++space_;
   }

   void popBack() 
   {
       --space_;
       *space_ = T{};
   }

   T* erase(T* position)
   {
      for (T* q = position + 1; q != end(); ++q)
          *(q - 1) = *q;
      popBack();
      return position;
   }

   

   size_t size()     const { return space_ - v_; }
   size_t capacity() const { return last_ - v_; }
   bool        empty()    const { return v_ == space_; }

   

   T&       operator[](size_t i)       { return v_[i]; }
   T const& operator[](size_t i) const { return v_[i]; }

   T&       at(size_t i)       { checkRange(i); return v_[i]; }
   T const& at(size_t i) const { checkRange(i); return v_[i]; }

   T*       begin()       { return v_; }
   T const* begin() const { return v_; }

   T*       end()       { return space_; }
   T const* end() const { return space_; }
};

} 

#endif 
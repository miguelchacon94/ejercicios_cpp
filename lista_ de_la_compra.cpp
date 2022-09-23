/************************************************/
/* Programa: Lista de la compra                 */
/* Descripcion: Realizar un programa que se introduzca*/
/* una lista de la compra y se muestren los productos y el total */
/* Autor: Miguel Chacon                         */
/* Fecha: 23/09/2022                            */
/************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Product {
   string name;
   double price;
   unsigned items;
};

int main()
{
   vector<Product> shopping_list;
   Product prod;
   while (cout << "----------------\nName of product: " &&
          getline(cin,prod.name)) {
      cout << "\t  Price: ";
      cin >> prod.price;
      cin.ignore();
      cout << "Number of items: ";
      cin >> prod.items;
      cin.ignore();
      shopping_list.push_back(prod);
   }
   cin.clear(); // clear the eof state flag

   double total = 0.0;
   cout << "\n----------------\nShopping list:\n\n";
   for (Product const& p : shopping_list) {
      cout << "Name: " << p.name
           << "; price: " << p.price
           << "; items: " << p.items << '\n';
      total += p.items*p.price;
   }
   cout << "----------------\nTotal: " << total << '\n';

   cout << "\nPress ENTER to log out...";
   cin.get();
}

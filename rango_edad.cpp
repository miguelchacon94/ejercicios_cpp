/********************************************************/
/* Programa: Numero en rango                            */
/* Descripcion: Di si una edad esta en el rango [18-25] */
/* Autor: Miguel Chacon                                 */
/* Fecha: 19/09/2022                                    */
/********************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1;
	cout<< "Introduce numero: ";
	cin>>numero1;
	if(numero1>=0 && numero1<=25){
		cout<<"\nEl numero esta en el rango"<<endl;
	}
	else{
		cout<<"\nEl numero no esta en el rango"<<endl;
	}

}
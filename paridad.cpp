/**************************************************************/
/* Programa: paridad                                          */
/* Descripcion:  Cacula si un numero es entero es par o impar */
/* Autor: Miguel Chacon                                       */
/* Fecha: 19/09/2022                                          */
/**************************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1;
	cout<< "Introduce numero: ";
	cin>>numero1;
	if(numero1==0){
		cout<<"\nEl numero es 0";
	}
	else{
		if (numero1%2==0){
			cout<<"\nEl numero es par"<<endl;
		}
		else{
			cout<<"\nEl numero es impar"<<endl;
		}
	}
	cin.get();
	return 0;
}

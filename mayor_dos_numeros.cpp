
/**************************************************************/
/* Programa: Numero mayor                                     */
/* Descripcion:  Calcular el mayor de dos numeros             */
/* Autor: Miguel Chacon                                       */
/* Fecha: 15/09/2022                                          */
/**************************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1, numero2;
	cout<< "Introduce numero1: ";
	cin>>numero1;
	cout<< "Introduce numero2: ";
	cin>>numero2;

	if (numero1 == numero2){
		cout<< "Los numeros son iguales";
	}
	else{
		if (numero1 > numero2){
			cout<< "Numero1 es mayor que numero2";
		}
		else{
			cout<< "Numero2 es mayor que numero1";
		}
	}
	cin.get();
	return 0;

}

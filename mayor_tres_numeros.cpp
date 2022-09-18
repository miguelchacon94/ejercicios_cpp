/**************************************************************/
/* Programa: Numero mayor 2                                   */
/* Descripcion:  Calcular el mayor de tres numeros            */
/* Autor: Miguel Chacon                                       */
/* Fecha: 15/09/2022                                          */
/**************************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1, numero2, numero3;
	cout<< "Introduce numero1: ";
	cin>>numero1;
	cout<< "Introduce numero2: ";
	cin>>numero2;
	cout<< "Introduce numero3: ";
	cin>>numero3;
	
	if (numero1 == numero2){
		if(numero1 == numero2){
			cout<< "\nLos numeros son iguales";
		}
		else{
			if (numero1 > numero3){
				cout<< "\nLos numeros uno y dos son iguales y mayor a 3";
			}
			else{
				cout<< "\nNumero3 es el mayor";
			}
			
		}
	}
	else{
		if (numero1 > numero2){
			cout<< "Numero1 es mayor que numero2";
		}
		else{
			cout<< "Numero2 es mayor que numero1";
		}
	}
	
	return 0;

}
/**************************************************************/
/* Programa: Numero mayor 2                                   */
/* Descripcion:  Calcular el mayor de tres numeros            */
/* Autor: Miguel Chacon                                       */
/* Fecha: 19/09/2022                                          */
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
		if(numero3 == numero2){
			cout<< "\nLos numeros son iguales"<<endl;
		}
		else{
			if (numero1 > numero3){
				cout<< "\nLos numeros uno y dos son iguales y mayor a 3";
			}
			else{
				cout<< "\nNumero3 es el mayor"<<endl;
			}

		}
	}
	else{
		if (numero3 == numero2){
			if(numero3 == numero1){
				cout<< "\nLos numeros son iguales"<<endl;
			}
			else{
				if(numero3 < numero1){
					cout<< "\nNumero1 es el mayor"<<endl;
				}
				else{
					cout<<"\nEl numero 2 y 3 son los mayores"<<endl;
				}
			}

		}
		else{
			if (numero1 == numero3){
				if(numero1 < numero2){
					cout<< "\nNumero2 es el mayor"<<endl;
				}
				else{
					cout<<"\nEl numero 1 y 3 son los mayores"<<endl;
				}
			}
			else{
				if (numero1 > numero2 && numero1 > numero3){
					cout<<"\nNumero1 es el mayor"<<endl;
				}
				else{
					if (numero2 > numero1 && numero2 > numero3){
						cout<<"\nNumero2 es el mayor"<<endl;
					}
					else{
						cout<<"\nNumero3 es el mayor"<<endl;
					}
				}

			}
		}
	}
	cin.get();
	return 0;

}

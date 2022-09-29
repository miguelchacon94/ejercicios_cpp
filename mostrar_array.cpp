/**********************************************************/
/* Programa: Suma Array                                   */
/* Descripcion: Realizar un programa que                  */
/* lea por entrada estándar un vector de números y muestre*/
/* la salida estándar los numeros del vector con sus      */
/* índices asociados                                      */
/* Autor: Miguel Chacon                                   */
/* Fecha: 26/09/2022                                      */
/**********************************************************/
#include<iostream>

using namespace std;

int main (){
	int numeros[100];
	int n;
	cout<<"Di el numero de elementos que va a ener el array";
	cin>>n;
	for (int i = 0; i<n;i++){
		cout<<"\nDi un numero: ";
		cin>>numeros[i];
	}
	for (int  i = 0; i<n;i++){
		cout<<"\n"<<i<<" -> "<<numeros[i];
	}

	return 0;
}

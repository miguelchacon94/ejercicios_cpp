/*************************************************/
/* Programa: Descomposición de numeros primos    */
/* Descripcion: Realizar un programa que         */
/* descomponga en unumeros primos un numero enero*/
/* Autor: Miguel Chacon                          */
/* Fecha: 26/09/2022                             */
/*************************************************/
#include<iostream>

using namespace std;

int main (){
	int n;
	cout<<"Introduzca el numero de elementos a sumar: ";
	cin>>n;
	for (int i = 2;n>1;i++){
		while(n%i==0){
			cout<<i<<" ";
			n /=i;
		}
	}
	return 0;
}

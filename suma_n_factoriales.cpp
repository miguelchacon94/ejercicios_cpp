/*****************************************/
/* Programa: Suma de n!                  */
/* Descripcion: Realizar un programa que */
/* sume los n! primeros                  */
/* Autor: Miguel Chacon                  */
/* Fecha: 23/09/2022                     */
/*****************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, sumaTotal=0, factorial = 1;
	cout<<"Introduzca el numero de elementos a sumar: ";
	cin>>n;
	for(int i =1;i<=n;i++){
		factorial *=i;
		sumaTotal += factorial;
	}
	cout<<"\nLa suma total es: "<<sumaTotal<<endl;
	systm("pause");
	return 0;
}
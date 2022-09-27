/************************************************/
/* Programa: Ejercicio tabla de multiplicar     */
/* Descripcion: Muestra la tabla de multiplicar */
/* del numero introducido                       */
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int i, numero;
	do{
		cout<<"Introduzca un numero: ";
		cin>>numero;
	}while((numero<1) || (numero>10));
	for(i=1; i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	cin.get();
	//system("pause");//evita que los programas ejecutables no terminen hasta que se presione una tecla
	return 0;

}

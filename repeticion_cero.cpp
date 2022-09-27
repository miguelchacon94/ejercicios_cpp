/************************************************/
/* Programa: Repeticion hasta cero     */
/* Descripcion: Realizar un programa que lea como entrada */
/* numeros hasta que se introduzca un cero. En ese momento*/
/* el programa debe terminar y mostrar como salida el numero*/
/* de valores mayores que cero leidos */
/* del numero introducido                       */
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int conteo = 0, numero;

	do{
		cout<<"Introduce un numero: ";
		cin>>numero;
		if (numero >0){
			conteo++;
		}
	}while(numero !=0);
	cout<<"\nEl numero de valores mayores a 0 es: "<<conteo<<endl;
	cin.get();
	//system("pause");//evita que los programas ejecutables no terminen hasta que se presione una tecla, solo windows
	return 0;

}

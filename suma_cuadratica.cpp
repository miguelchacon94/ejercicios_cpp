/************************************************/
/* Programa: Suma cuadrática en bucle     */
/* Descripcion: Realizar un programa que calcule y muestre */
/* la suma de los cuadrados de los 10primeros numeros enteros*/
/* del numero introducido                       */
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int cuadrado, suma = 0, i;

	for(i=1; i<=10;i++){
		cuadrado = i * i;
		suma +=cuadrado;
	}
	cout<<"\nLa suma ews: "<<suma<<endl;
	cin.get();
	//system("pause");//evita que los programas ejecutables no terminen hasta que se presione una tecla
	return 0;

}

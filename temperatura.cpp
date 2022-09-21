/************************************************/
/* Programa: Temperatura exterior     */
/* Descripcion: Realizar un programa que tome cada 4 */
/* horas la temperatura exterior, durande 24h. */
/* Calcule la media del dia, la maxima o minima */
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	float temperatura, mayor = 0, menor=9999999;
	float sumaTotal=0, promedio=0;
	int i;
	for (i =0; i<24;i+=4){
		cout<<"Introduce la temperatura de la hora "<<i<<": ";
		cin>>temperatura;
		sumaTotal += temperatura;
		if (temperatura > mayor){
			mayor = temperatura;
		}
		if (temperatura <menor){
			menor = temperatura;
		}
	}
	
	promedio = sumaTotal/6;
	cout<<"\nLa temperatura media es: "<<promedio<<endl;
	cout<<"\nLa maxima es: "<<mayor<<endl;
	cout<<"\nLa minima es: "<<menor<<endl;
	systm("pause");
	return 0;

}
/************************************************/
/* Programa: Calcular x elavado a y     */
/* Descripcion: Realizar un programa que lea x e y*/
/* calculando  x elavado a y, sin utiizar la función */
/* pow o similar. X e y son enteros. */
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int y, x, elevacion = 1;
	cout<<"Di el valor X: ";
	cin>>x;
	cout<<"\nDi el valor Y: ";
	cin>>y;
	for (int i=1; i<=y;i++){
		elevacion = elevacion * x;
	}
	cout<<"\nEl resultado es: "<<elevacion<<endl;
	systm("pause");
	return 0;

}
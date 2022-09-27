/*****************************************/
/* Programa: Suma factorial              */
/* Descripcion: Realizar un programa que */
/* calcule el factorial de n             */
/* Autor: Miguel Chacon                  */
/* Fecha: 23/09/2022                     */
/*****************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, resultado=1;
	cout<<"Introduzca el numero de elementos a sumar: ";
	cin>>n;
	for(int i =1;i<=n;i++){
		resultado = resultado * i;
	}
	cout<<"\nEl resultado total es: "<<resultado<<endl;
	cin.get();
	//system("pause");//solo para windows
	return 0;
}

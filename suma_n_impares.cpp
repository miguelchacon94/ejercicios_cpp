/*****************************************/
/* Programa: Suma n impares              */
/* Descripcion: Realizar un programa que */
/* sume los n numeros impares            */
/* Autor: Miguel Chacon                  */
/* Fecha: 23/09/2022                     */
/*****************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, sumaTotal=0;
	cout<<"Introduzca el numero de elementos a sumar: ";
	cin>>n;
	for(int i =1;i<=2*n-1;i++){
		sumaTotal += i;
	}
	cout<<"\nLa suma total es: "<<sumaTotal<<endl;
	cin.get();//para linux
	//system("pause");//para windows
	return 0;
}

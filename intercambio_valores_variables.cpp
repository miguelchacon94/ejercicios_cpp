/*********************************************/
/* Programa: Intercambio valores             */
/* Descripcion: Fragmento de programa que    */
/* intercambia los valores de dos variables  */
/* Autor: Miguel Chacon                      */
/* Fecha: 14/09/2022                         */
/*********************************************/
#include<iostream>

using namespace std;

int main (){
	float x,y,aux;
	cout<< "Introduce x: ";
	cin>>x;
	cout<< "\nIntroduce y: ";
	cin>>y;
	aux =x;
	x=y;
	y=aux;
	cout<<"\nEl valor de X es: "<<x<<endl;
	cout<<"El valor de Y es: "<<y<<endl;
	cin.get();
	return 0;
}

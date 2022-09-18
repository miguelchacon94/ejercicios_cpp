/************************************/
/* Programa: Expresiones en C++     */
/* Descripcion: (a+(b/c))/(d+(e/f)) */
/* Autor: Miguel Chacon             */
/* Fecha: 14/09/2022                */
/************************************/
#include<iostream>

using namespace std;

int main (){
	float a, b,c,d,e,f, resultado =0;
	cout<< "Introduce a: ";
	cin>>a;
	cout<< "\nIntroduce b: ";
	cin>>b;
	cout<< "\nIntroduce c: ";
	cin>>c;
	cout<< "\nIntroduce d: ";
	cin>>d;
	cout<< "\nIntroduce e: ";
	cin>>e;
	cout<< "\nIntroduce f: ";
	cin>>f;
	resultado= (a+(b/c)) / (d+(e/f));
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultadord: "<<resultado;
	return 0;
}
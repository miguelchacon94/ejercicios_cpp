/************************************/
/* Programa: Expresiones en C++     */
/* Descripcion: a+(b/(c-d))         */
/* Autor: Miguel Chacon             */
/* Fecha: 14/09/2022                */
/************************************/
#include<iostream>

using namespace std;

int main (){
	float a, b,c,d, resultado =0;
	cout<< "Introduce a: ";
	cin>>a;
	cout<< "\nIntroduce b: ";
	cin>>b;
	cout<< "\nIntroduce c: ";
	cin>>c;
	cout<< "\nIntroduce d: ";
	cin>>d;
	resultado= a+(b/(c-d));
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultadord: "<<resultado<<endl;
	cin.get();
	return 0;
}

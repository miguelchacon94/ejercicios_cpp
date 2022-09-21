/**************************************************************/
/* Programa: Calcular la solucion a funcion de segundo grado  */
/* Descripcion:  Calcular los resultados de                   */
/* la ecuacion de segundo grado a*x^2+b*x+c                   */
/* Autor: Miguel Chacon                                       */
/* Fecha: 14/09/2022                                          */
/**************************************************************/
#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float a, b, c, resultado1 =0, resultado2 =0;
	cout<< "Introduce a: ";
	cin>>a;
	cout<< "\nIntroduce b: ";
	cin>>b;
	cout<< "\nIntroduce c: ";
	cin>>c;
	resultado1= (-b + sqrt(pow(b,2)-(4*a*c))/(2*a);
	resultado1= (-b - sqrt(pow(b,2)-(4*a*c))/(2*a);
	cout.precision(2);
	cout<< "\nEl primer resultado es: "<<resultado1<<endl;
	cout<< "\nEl segundo resultado es: "<<resultado2<<endl;
	return 0;

}
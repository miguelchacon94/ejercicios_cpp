/*************************************/
/* Programa: Nota ponderada      */
/* Descripcion: la calificacion final de un estudiante se calcula asi: */
/* -La nota pracicas es un 30%*/
/* -La nota teorica es un 60% */
/* -la nota de participacion un 10% */
/* Calcula la nota final*/
/* Autor: Miguel Chacon              */
/* Fecha: 14/09/2022                 */
/*************************************/
#include<iostream>

using namespace std;

int main (){
	float a, b,c, resultado =0;
	cout<< "Introduce la nota practica: ";
	cin>>a;
	cout<< "\nIntroduce la nota teorica: ";
	cin>>b;
	cout<< "\nIntroduce la nota de paricipacion: ";
	cin>>c;
	a *=0.30; //es lo mismo que a= a*0.30
	b *= 0.60;
	c *=0.10;
	resultado= a+b+c;
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultado es: "<<resultado<<endl;
	return 0;
}
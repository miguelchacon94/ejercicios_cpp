/*************************************/
/* Programa: Media de 4 alumnos      */
/* Descripcion: dadas cuatro notas,  */
/* calcular la media de esos alumnos */
/* Autor: Miguel Chacon              */
/* Fecha: 14/09/2022                 */
/*************************************/
#include<iostream>

using namespace std;

int main (){
	float a, b,c,d, resultado =0;
	cout<< "Introduce primer alumno: ";
	cin>>a;
	cout<< "\nIntroduce segundo alumno: ";
	cin>>b;
	cout<< "\nIntroduce tercer alumno: ";
	cin>>c;
	cout<< "\nIntroduce cuarto alumno: ";
	cin>>d;
	resultado= (a+b+c+d)/4;
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultado es: "<<resultado<<endl;
	return 0;
}
/*********************************************/
/* Programa: Calcular la hipotenusa          */
/* Descripcion: Leer por entrada dos catetos */
/* y mostrar la hipotenusa                   */
/* Autor: Miguel Chacon                      */
/* Fecha: 14/09/2022                         */
/*********************************************/
#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float a, b, hipotenusa;
	cout<< "Introduce el primer cateto: ";
	cin>>a;
	cout<< "\nIntroduce el segundo cateto: ";
	cin>>b;
	hipotenusa = sqrt(pow((a,2.0)+pow(b,2.0)));//pow=elebar la primera variable a la segunda
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultado es: "<<hipotenusa<<endl;
	return 0;

}

/*********************************************/
/* Programa: Calcular la funcion f(x,y)      */
/* Descripcion:  Calcular los resultados de  */
/* f(x,y)=sqrt(x)/(y^2-1)                    */
/* Autor: Miguel Chacon                      */
/* Fecha: 14/09/2022                         */
/*********************************************/
#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float x, y, resultado =0;
	cout<< "Introduce x: ";
	cin>>x;
	cout<< "\nIntroduce y: ";
	cin>>y;
	resultado= (sqrt(x))/(pow(y,2)-1);//pow=elebar la primera variable a la segunda
	cout.precision(2);//sirve para modificar la precision de los numeros mostrados por consola
	cout<< "\nEl resultado es: "<<resultado<<endl;
	cin.get();
	return 0;

}

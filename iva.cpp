/***************************************************/
/* Programa: Operaciones aritmeticas               */
/*                                                 */
/* Descripción: Escrie un programa que te calcule el*/
/* iva de un precio obtenido por entrada           */
/* Autor: Miguel Chacon                            */
/*                                                 */
/* Fecha: 14/09/2022                               */
/***************************************************/
//Librerias que vamos a usar
#include<iostream>

using namespace std;
//si no se pone la linea de arriba tendriamos que poner std:: antes de cada instruccion de salida
//funcion principal
int main (){
	float n1, precio_final =0, iva=0.21, precio_int=0;
	cout<< "Precio: ";
	cin>>n1;
	precio_int=n1 * iva;
	precio_final= precio_int * n1;
	cout<<"\nEl precio final es: "<<precio_final<<endl;
	cin.get();
	return 0;
}

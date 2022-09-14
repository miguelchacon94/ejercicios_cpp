/***************************************************/
/* Programa: Operaciones aritmeticas               */
/*                                                 */
/* Descripción: Escrie un programa que lea dos numeros */
/* y muestre en la salida su suma, resta division y multiplicacion*/
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
	int n1, n2, suma =0, resta=0, multiplicacion=0;
	float division =0;
	cout<< "primer numero: ";
	cin>>n1;
	cout<<"segundo numero: ";
	cin>>n2;
	suma= n1 + n2;
	resta= n1 - n2;
	multiplicacion=n1 * n2;
	division= n1 / n2;
	count<<"\nLa suma es: "<<suma<<endl;
	count<<"La resta es: "<<resta<<endl;
	count<<"La multiplicacion es: "<<multiplicacion<<endl;
	count<<"La division es: "<<division<<endl;
	return 0;
}
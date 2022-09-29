/******************************************************/
/* Programa: Suma Array                               */
/* Descripcion: Realizar un programa que              */
/* defina un vector y calcule la multiplicación acumulada*/
/* Autor: Miguel Chacon                               */
/* Fecha: 26/09/2022                                  */
/******************************************************/
#include<iostream>

using namespace std;

int main (){
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1;
	for (int i = 0; i<5;i++){
		multiplicacion *= numeros[i];
	}
	cout<<"La multiplicación final es: "<<multiplicacion<<endl;
	return 0;
}

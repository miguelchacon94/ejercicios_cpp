/************************************************/
/* Programa: Suma rango [20 a 30]     */
/* Descripcion: Realizar un programa que lea valores*/
/* hasta que se introduzca un valor en el rango [20-30]*/
/* o el valor 0. Se debe mostrar la suma de los valors > 0*/
/* Autor: Miguel Chacon                         */
/* Fecha: 21/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int numero, suma =0;
	do {
		cout<<"Di un numero;";
		cin>>numero;
		if (numero>0){
			suma += numero;
		}
	}while(((numero<=30)||(numero>=20))&& (numero !=0));
	cout<<"\nLa suma es: "<<suma<<endl;
	cin.get();
	//system("pause");
	return 0;

}

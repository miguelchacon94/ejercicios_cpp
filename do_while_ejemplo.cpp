/**********************************************/
/* Programa: Ejemplo do while                    */
/* Descripcion: Explicación inicial del do while */
/* Autor: Miguel Chacon                       */
/* Fecha: 21/09/2022                          */
/**********************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int i =0;

	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	cin.get();//para linux
	//system("pause");//evita que los programas ejecutables no terminen hasta que se presione una tecla, solo para windows
	return 0;

}

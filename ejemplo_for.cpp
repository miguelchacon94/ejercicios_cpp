/**********************************************/
/* Programa: Ejemplo for                    */
/* Descripcion: Explicación inicial del bucle for */
/* Autor: Miguel Chacon                       */
/* Fecha: 21/09/2022                          */
/**********************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int i;
	for(i=1; i<=10;i++){
		cout<<i<<endl;
	}
	cin.get();//para linux
	//system("pause");//evita que los programas ejecutables no terminen hasta que se presione una tecla solo para windows
	return 0;

}

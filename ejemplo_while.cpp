/**********************************************/
/* Programa: Ejemplo while                    */
/* Descripcion: Explicación inicial del while */
/* Autor: Miguel Chacon                       */
/* Fecha: 21/09/2022                          */
/**********************************************/
#include<iostream>
#include <conio.h>

using namespace std;

int main (){
	int i =0;
	
	while(i<=10){
		cout<<i<<endl;
		i++;
	}
	getch();//evita que los programas ejecutables no terminen hasta que se presione una tecla
	return 0;

}
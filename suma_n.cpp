/************************************************/
/* Programa: Suman los primeros N     */
/* Descripcion: Realizar un programa que calcule*/
/* el valor de 1+2+3+..+n */
/* Autor: Miguel Chacon                         */
/* Fecha: 22/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, suma = 0;
	cout<<"Di el valor de n: ";
	cin>>n;
	for (int i=1; i<=n;i++){
		suma +=  n;
	}
	cout<<"\nEl resultado es: "<<suma<<endl;
	systm("pause");
	return 0;

}
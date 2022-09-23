/************************************************/
/* Programa: Suman los primeros N     */
/* Descripcion: Realizar un programa que calcule*/
/* el valor de 1+2+3+..+2*n-1 */
/* Autor: Miguel Chacon                         */
/* Fecha: 22/09/2022                            */
/************************************************/
#include<iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n, suma = 0, fin=0;
	cout<<"Di el valor de n: ";
	cin>>n;
	fin=2*n-1;
	for (int i=1; i<=fin;i++){
		suma +=  n;
	}
	cout<<"\nEl resultado es: "<<suma<<endl;
	systm("pause");
	return 0;

}
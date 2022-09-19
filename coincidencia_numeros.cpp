/*****************************************************************/
/* Programa: Coincidencia de números                             */
/* Descripcion: Cuatro numeros de entrada y mostrar si el cuarto */
/* es igual a uno de los tres aneriores                          */
/* Autor: Miguel Chacon                                          */
/* Fecha: 19/09/2022                                             */
/*****************************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1,numero2,numero3,numero4;
	cout<< "\nIntroduce numero1: ";
	cin>>numero1;
	cout<< "\nIntroduce numero2: ";
	cin>>numero2;
	cout<< "\nIntroduce numero3: ";
	cin>>numero3;
	cout<< "\nIntroduce numero4: ";
	cin>>numero4;
	if((numero1 == numero4)|| (numero2 == numero4)||(numero3 == numero4)){
		cout<<"\nEl numero coincide con alguno"<<endl;
	}
	else{
		cout<<"\nEl numero coincide con ninguno"<<endl;
	}
	
	
	return 0;
}
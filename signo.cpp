/**************************************************/
/* Programa: Signo                                */
/* Descripcion:  Cacular el signo de un numero    */
/* Autor: Miguel Chacon                           */
/* Fecha: 19/09/2022                              */
/**************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero1;
	cout<< "Introduce numero: ";
	cin>>numero1;
	if(numero1 == 0){
		cout<<"\nEl numero es cero"<<endl;
	}else{
		if (numero1>0){
			cout<<"\nEl numero es positivo"<<endl;
		}else
		{
			cout<<"\nEl numero es negativo"<<endl;
		}
			
	}

}
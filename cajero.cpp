/***********************************************************/
/* Programa: Cajero                                        */
/* Descripcion: Crear un simulador de cajero con 10000 euros de saldo */
/* Autor: Miguel Chacon                                    */
/* Fecha: 20/09/2022                                       */
/***********************************************************/
#include<iostream>


using namespace std;

int main (){
	int opcion;
	float dinero = 10000, extra = 0, saldo =0;
	cout<<"\tBienvenido a tu Cajero Virtual."<<endl;
	cout<<"[1] Ingresar dinero."<<endl;
	cout<<"[2] Retirar dinero."<<endl;
	cout<<"[3]Salir."<<endl;
	cout<< "Opcion: ";
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"introduzca un numero: "<<endl;
			cin>>extra;
			saldo =dinero+extra;
			cout<<"Dinero en cuenta: "<< saldo<<endl;
			break;
		case 2:
			cout<<"introduzca un numero: "<<endl;
			cin>>extra;
			if (extra<dinero){
				saldo =dinero-extra;
				cout<<"Dinero en cuenta: "<< saldo<<endl;
			}
			else{
					cout<<"Dinero insuficiente."<<endl;
			}
			break;
		case 3:
			break;
		default:
			count<<"Opcion no valida."<<endl;
			break;
	}
	cin.get();//para linux
	return 0;

}

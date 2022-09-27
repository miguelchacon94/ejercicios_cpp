/***********************************************************/
/* Programa: Mes del año                               */
/* Descripcion:  Mostrar el mes del año dependiendo del numero introducido*/
/* Autor: Miguel Chacon                                    */
/* Fecha: 20/09/2022                                       */
/***********************************************************/
#include<iostream>


using namespace std;

int main (){
	int numero;
	cout<< "Introduce un numero: ";
	cin>>numero;
	switch(numero){
        case 1:
            cout<<"Enero";
            break;
		case 2:
			cout<<"Febrero";
			break;
		case 3:
			cout<<"Marzo";
			break;
		case 4:
			cout<<"Abril";
			break;
		case 5:
			cout<<"Mayo";
			break;
		case 6:
			cout<<"Junio";
			break;
		case 7:
			cout<<"Julio";
			break;
		case 8:
			cout<<"Agosto";
			break;
		case 9:
			cout<<"Septiembre";
			break;
		case 10:
			cout<<"Octubre";
			break;
		case 11:
			cout<<"Noviembre";
			break;
		case 12:
			cout<<"Diciembre";
			break;
		default:
			cout<<"No es un mes";
			break;
	}
    cin.get();
	return 0;

}

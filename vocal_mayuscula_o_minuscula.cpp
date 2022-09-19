/******************************************************************/
/* Programa: Vocal o consonante                                   */
/* Descripcion:  Cacular una letra es vocal minuscula o mayuscula */
/* Autor: Miguel Chacon                                           */
/* Fecha: 19/09/2022                                              */
/******************************************************************/
#include<iostream>


using namespace std;

int main (){
	char letra;
	cout<< "Introduce letra: ";
	cin>>letra;
	switch(letra){
		//por eficiencia, se pone en todos, por simplicidad se puede poner en el caso de la u y funcionaria igual.
		case 'a':
			cout<<"Es una vocal minuscula"<<endl;
			break;
		case 'e':
			cout<<"Es una vocal minuscula"<<endl;
			break;
		case 'i':
			cout<<"Es una vocal minuscula"<<endl;
			break;
		case 'o':
			cout<<"Es una vocal minuscula"<<endl;
			break;
		case 'u':
			cout<<"Es una vocal minuscula"<<endl;
			break;
			case 'A':
			cout<<"Es una vocal mayuscula"<<endl;
			break;
		case 'E':
			cout<<"Es una vocal mayuscula"<<endl;
			break;
		case 'I':
			cout<<"Es una vocal mayuscula"<<endl;
			break;
		case 'O':
			cout<<"Es una vocal mayuscula"<<endl;
			break;
		case 'U':
			cout<<"Es una vocal mayuscula"<<endl;
			break;
		default:
			cout<<"No es una vocal;"<<endl;
			break;
	}
	return 0;

}
/*realize un programa que lea de la entrada estandar los siguientes 
datos de una persona:
	edad :datos de tipo entero
	sexo: dato de tipo caracter
	altura en metros: dato de tipo real

tras leer los datos,el programa debe mostralos en la salida estandar.*/

#include<iostream>
#include<string>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"digite su edad: ";cin>>edad;
	cout<<"digite su sexo: ";cin>>sexo;
	cout<<"digite su altura en metros: ";cin>>altura;

	cout<<"\nedad: "<<edad<<endl;
	cout<<"sexo: "<<sexo<<endl;
	cout<<"altura en metros: "<<altura<<endl;
	
	return 0;	
}

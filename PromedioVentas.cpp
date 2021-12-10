#include<iostream>

using namespace std;

int main () {
	float numeros[5];
	int cantidad;
	float acumulador = 0;
	float promedio = 0;
	cout<< "Ingrese Nombre de Vendedor: ";
	string nombre;
	cin>>nombre;
	cout<< endl;
	cout<<"Ingrese Numero total de Meses: ";// 4 meses 
	cin>>cantidad;
	if (cantidad > 0 && cantidad < 5){// los cuatro meses corresponden al mes 0,1,2,3 respectivamente
		for(int i = 0; i < cantidad; i++){
			cout<<"Ingrese valor de ventas realizadas en el mes: "<< i << ":";//ingresar el valor de cada mes sin usar puntos o comas 
			cin>> numeros[i];
			acumulador += numeros[i];
		}
		promedio = acumulador/cantidad;
		cout << endl;
		for (int i = 0; i < cantidad; i++) {
			cout<< "Mes "<< i << ": " << numeros[i] <<endl;
		} 
		cout<< endl;
		cout<< "El promedio de ventas de los primeros 4 meses es: " <<promedio;
	
	}
	return 0;

}
		


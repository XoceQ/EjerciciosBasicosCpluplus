//estatuto while
#include<iostream>

using namespace std;

int main(){
	char nombre[50],seguir;
	int numeroclientes,cantidad,preciounitario;
	long total,global;
	
	numeroclientes = 1;
	global = 0;
	do{
		system("CLS");
		cout<<"Nombre de cliente: "<<numeroclientes<<":";cin>>nombre;
		cout<<"cantidad de articulos comprados: ";cin>>cantidad;
		cout<<"precio unitario: ";cin>>preciounitario;
		
		total = cantidad*preciounitario;
		cout<<"el valor total a pagar es : "<<total<<endl;
		
		global = global + total;
		numeroclientes++;
		cout<<"siguiente cliente : ";cin>>seguir;
	}
	while ((seguir == 's') || (seguir == 's'));
	system("CLS");
	cout<<"las ventas totales del dia: "<<global<<endl;
	system("PAUSE");
		
		
	}
	
    

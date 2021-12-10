//condiciones comercializadora solva

#include <iostream>

using namespace std;

int main(){
	int valorescoba=5000,valoraromatizante=2000,valorrecogedor=3000,productos,categoria1,cantidadesc,cantidadrecog,
	cantidadaroma,productos2,categoria2,categoria3,productos3,categoria4,productos4,subtotal,tipodecliente,descuento1,descuento2,descuento3,descuento4;

	productos = valorescoba+valoraromatizante+valorrecogedor*0.05;
	categoria1 = 10000-productos;
	productos2 = valorescoba+valoraromatizante+valorrecogedor*0.08;
	categoria2 = 10000-productos2;
	productos3 = valorescoba+valoraromatizante+valorrecogedor*0.12;
	categoria3 = 10000-productos3;
	productos4 = valorescoba+valoraromatizante+valorrecogedor*0.15;
	categoria4 = 10000-productos4;
		
	cout<<"ingrese cantidad de escobas: ";cin>>cantidadesc;
	cout<<"ingrese cantidad de aromatizantes: ";cin>>cantidadaroma;	
	cout<<"ingrese cantidad de recogedores: ";cin>>cantidadrecog;
	cout<<"ingrese nombre del cliente: ";cin>>tipodecliente;
	
	subtotal = (valorescoba*cantidadesc)+(valoraromatizante*cantidadaroma)+(valorrecogedor*cantidadrecog);
	
	if(cantidadesc and cantidadrecog and cantidadaroma==10){
		cout<<"el valor total es: "<<categoria1<<endl;
		cout<<"el descuento es de 5% ";cin>>descuento1;
		
}
	 if(cantidadesc and cantidadrecog and cantidadaroma==20){
		cout<<"el valor total es: "<<categoria2<<endl;
		cout<<"el descuento es de 8% ";cin>>descuento2;
		
}
	if(cantidadesc and cantidadrecog and cantidadaroma==40){
		cout<<"el valor total es: "<<categoria3<<endl;
		cout<<"el descuento es de 12% ";cin>>descuento3;
		
}
	if(cantidadesc and cantidadrecog and cantidadaroma==80){
		cout<<"el valor total es: "<<categoria4<<endl;
		cout<<"el descuento es de 15% ";cin>>descuento4;
}
else if(cantidadesc and cantidadrecog and cantidadaroma!=10 or 20 or 40 or 80){
		cout<<"el subtotal es: "<<subtotal;//tomamos como valor subtotal al valor de los productos multiplicados por la cantidad solicitada sin descuento
		
}
}
	
	
			

	

	

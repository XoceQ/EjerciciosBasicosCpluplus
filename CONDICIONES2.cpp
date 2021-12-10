//CONDICIONES 2

#include<iostream>

using namespace std;

int main(){
	int preciobrocha=12000*0.2,preciorodillo=6000*0.15,preciosellador=4000,cantidadbrochas = 5,cantidadrodillos=4,cantidadselladores=6,preciorealbrocha,
	preciorealrodillo,preciorealsellador,preciototalcontado,preciototaldescuento,pagoporcontado,pagototalcredito,preciototalcredito,pagoconcredito;
	
	preciorealbrocha = 12000-preciobrocha;//Valores unitarios de cada producto aplicando descuento							
	preciorealrodillo = 6000-preciorodillo;  
	preciorealsellador = preciosellador; 
	
	preciototalcontado = (cantidadbrochas*preciorealbrocha)+(cantidadrodillos*preciorealrodillo)+(cantidadselladores*preciorealsellador)*(0.07);
	preciototaldescuento = 92400-preciototalcontado;
	
	preciototalcredito = (cantidadbrochas*preciorealbrocha)+(cantidadrodillos*preciorealrodillo)+(cantidadselladores*preciorealsellador);
	
	cout<<"ingrese cantidad a pagar en contado: ";cin>>pagoporcontado;
	cout<<"ingrese cantidad a pagar con credito: ";cin>>pagoconcredito;
	
	if(pagoporcontado==92400){ //ingresar cantidad a pagar en contado = 92400 y en cantidad a pagar con credito = 0 se imprimira el valor total con el 7% de descuento
		cout<<"el valor total es: "<<preciototaldescuento;
		
		}
		
else if(pagoconcredito==92400){//ingresar cantidad a pagar en contado = 0 y en cantidad a pagar con credito = 92400 se imprimira el valor total sin descuento
		cout<<"el valor total es: "<<preciototalcredito;
	
	
}	
	}
	
	
	
	


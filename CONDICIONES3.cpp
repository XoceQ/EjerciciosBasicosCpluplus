//CONDICIONES3

#include<iostream>

using namespace std;

int main(){
	int articulo1=30,articulo,articulo2=60*0.3,articulo3=90*0.4,articulo4=410*0.5,articulo2iva,articulo3iva,articulo4descuento;
	
	articulo2iva = 60+articulo2;
	articulo3iva = 90+articulo3;
	articulo4descuento = 401-articulo4;
	cout<<"ingrese el valor de articulo: ";cin>>articulo;

	if(articulo==30){
		cout<<"el valor total es: "<<articulo1;
	    }  
	
else if(articulo==60){
		cout<<"el valor total es: "<<articulo2iva;
		}
	if(articulo==90){
		cout<<"el valor total es: "<<articulo3iva;
	    }
else if (articulo==410){
		cout<<"el valor total es: "<<articulo4descuento;
	}
	}

	

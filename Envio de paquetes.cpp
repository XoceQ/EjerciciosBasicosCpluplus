//se ingresa el numero que representa el valor del peso en kilos
//dependiendo del peso se conoce el cargo fijo de envio por cada paquete 
#include <iostream>
using namespace std;

int peso1 (int);
int peso2 (int);
int peso3 (int);
int peso4 (int);

int main (){
	int n;
	cout<<"Ingrese el peso del paquete: ";
	cin>>n;

	if(n<10){
		cout<<"Para paquetes entre 0 y 10 kilos,el cargo fijo de envío es $28.000"<<endl;
		cout<<"el total de envio es: "<<peso1(n)<<endl;
	}
	if(n>10 && n<=30){
		cout<<"cuyo peso se encuentre entre 10 y 30 kilos, el cargo fijo es $34.000 adicional $1.600 por cada kilo superior a 10."<<endl;
		cout<<"el total de envio es: "<<peso2(n)<<endl;
	}
	if(n==50){
		cout<<"el peso sea igual a 50 kilos, el cargo fijo es de $60.000"<<endl;
		cout<<"el total de envio es: "<<peso3(n)<<endl;
	
	}
	
	if(n>=51){
		cout<<"el peso sea superior a 50 kilos, el cargo fijo es de $60.000, adicional $1.900 por cada kilo superior a 50"<<endl;
		cout<<"el total de envio es: "<<peso4(n)<<endl;
	 
	}


	return 0;
}
	
	int peso1(int c){
	
	return 28000;
	}
	
	int peso2(int d){
		
		return 34000+1600;
	}
	
	int peso3(int e){
		
		return 60000;
	}
	
	int peso4(int f){
		
		return 61900;
	}
	



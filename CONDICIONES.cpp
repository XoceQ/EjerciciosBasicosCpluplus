// CONDICIONES 1

#include<iostream>

using namespace std;

int main(){
	float calificacion1,calificacion2,calificacion3;
	
	cout<<"digite calificacion1: ";cin>>calificacion1;
	cout<<"digite calificacion2: ";cin>>calificacion2;
	cout<<"digite calificacion3: ";cin>>calificacion3;
	
	if(calificacion1>calificacion2 and calificacion1>calificacion3){
		cout<<"la calificacion1 es la mayor: "<<calificacion1;
}
else if(calificacion2>calificacion1 and calificacion2>calificacion3){
		cout<<"la calificacion2 es la mayor: "<<calificacion2;
		
}
else if(calificacion3>calificacion1 and calificacion3>calificacion2){
		cout<<"la calificacion3 es la mayor: "<<calificacion3;
		
}
}
	
 

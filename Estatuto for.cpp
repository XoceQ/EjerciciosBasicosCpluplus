//estatuto for

#include<iostream>

using namespace std;

int main(){
	int i,edad;
	char nombre[30];
	float peso,totaledad,totalpeso,pesopromedio,edadpromedio;
	totaledad = 0;
	totalpeso = 0;
	for (i=1; i<=30; i++){
		system("CLS");
		cout<<"Nombre del jugador "<< i <<": ";cin>>nombre;
		cout<<"edad del jugador : ";cin>>edad;
		cout<<"peso del jugador en kilogramos : ";cin>>peso;
		totalpeso = totalpeso+peso;
		totaledad = totaledad+edad;
		cout<<endl;
		system("PAUSE");
		
	}
}

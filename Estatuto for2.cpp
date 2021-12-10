//estatuto for

#include<iostream>

using namespace std;

int main(){
	int  n1,n2,mcm,r,mcd,aux;
	
	do{
	cout<<"ingrese numero 1: ";cin>>n1;
	cout<<"ingrese numero 2: ";cin>>n2;
	
	}while(n1<0 && n2<0);
	
	mcd=n1;
	aux=n2;
	do{
		r=mcd%aux;
		mcd=aux;
		aux=r;
		
	}while(r!=0);
	
	mcm=n1*n2/mcd;
	
	cout<<"el MCD es: "<<mcd<<endl;
	cout<<"el MCM es: "<<mcm<<endl;
	
	return 0;
	}

	

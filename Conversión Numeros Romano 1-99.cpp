/*condiciones conversion numero entre 1 y 99 a romanos
	L =	50
	X =	10
	V =	5
	I =	1
*/

#include<iostream>

using namespace std;

int main(){
	int numero,unidades,decenas;
	
	cout<<"digite un numero: ";cin>>numero;
	
	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /= 10;

	switch(decenas){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
		
	}
	
	switch(unidades){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
				
		
		
	}
			
	}




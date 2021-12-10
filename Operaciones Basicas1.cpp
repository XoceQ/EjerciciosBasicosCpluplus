//operaciones basicas I,II

#include<iostream>

using namespace std;

int main(){
	float x = 0;
	float y = 0;
	float z = 0;
	float a = 15;
	float b = 3;
	
	x =  7 + 3 * 6 /2 - 1;
	y = (3*9*(3+(9*3/(3))));
	z = 3 + 4 * (8*(4-(9+3)/6));
	a = a * 6/a++;
	b= --b*a++/b;
	
	cout<<"\nel resultado de x es: "<<x<<endl;
	cout<<"el resultado de  y es: "<<y<<endl;
	cout<<"el resultado de z es: "<<z<<endl;
		

	return 0;
}

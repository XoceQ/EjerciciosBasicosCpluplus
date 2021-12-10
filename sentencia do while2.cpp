/* sentencia do while

	do{
		conjunto de instrucciones;
	}while(expresion logica);
*/

#include<iostream>
#include<stdlib.h>//biblioteca mejor que #include<conio.h> pero sin necesidad- de getch 

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--;// esto aumenta el iterador de 1 en 1
	}while(i>=1);
	
	
	return 0;
}

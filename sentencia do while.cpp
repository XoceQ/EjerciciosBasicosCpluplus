/* sentencia do while

	do{
		conjunto de instrucciones;
	}while(expresion logica);
	
nota:bucle que primero actua y luego piensa 
*/

#include<iostream>

using namespace std;

int main(){
	int i;
	
	i = 1;
	
	do{
		cout<<i<<endl;
		i++;// esto aumenta el iterador de 1 en 1
	}while(i<=10);
	
	
	return 0;
}

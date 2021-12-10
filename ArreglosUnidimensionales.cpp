//tomamos 5 como numero maximo inicial de productos que podemos ingresar una vez ingresados se imprime  la lista 
//se pregunta si esta satisfecho, si lo esta se imprime un mensaje de despedida sino se pregunta si desea generar una nueva lista
//digite el numero de productos que quiere agregar
//digite el nombre de los productos que quiere en la lista
//se imprime la nueva lista
 

#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
	string productos[5];
	cout<<"Ingrese el nombre de los productos :"<<endl;
	int i=0;
	while(i<5)
	{
	cin>>productos[i];
	i++;
	
	}
	cout<<"\n"<<endl;
	cout<<"La lista de productos es: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<productos[i]<<endl;
	}
	

	string respuesta= "";
	cout<<"Esta satisfecho con la lista ?:";
	cin>> respuesta;
	if (respuesta == "si")
	
	{
		cout<<"Gracias, Buen dia";
	}
else
{
	string respuestados="";
	cout<<"Desea generar otra lista ?: ";
	cin>> respuestados;
	if (respuestados == "si")
{
	int numeros[100],n; string newproducto;
	
	cout<<"Digite el numero de productos que quiere agregar: ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		string newproducto[100];
		cout<<"Ingrese el nombre de los productos :"<<endl;
		while(i<n)
	{
	cin>>newproducto[i];
	i++;
	
	}
		cout<<"\n"<<endl;
	cout<<"La nueva lista de productos es: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<newproducto[i]<<endl;
	}

	}
	
}
else 
{
	cout<<"Gracias, Buen dia";
}
}
	return 0;
}


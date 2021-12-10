//la hora extra tendra un valor de 4000
#include<iostream>
using  namespace  std;

float salario(float horas,float valor,float extrasdescuento)
{
	float x;
	x=horas*valor+extrasdescuento;
	return x;

}

int main()
{
	
	string s="";
	cout<<"Ingrese su Nombres: "<<endl;
	cin>>s;
	string r="";
	cout<<"Ingrese su Cargo: "<<endl;
	cin>>r;
	
	float c,t,h,valor,numero;
	cout<<"Ingrese numero de CC: "<<endl;
	cin>>c;
	cout<<"Ingrese su Celular: "<<endl;
	cin>>t;
	cout<<"Ingrese las horas trabajadas: "<<endl;
	cin>>h;
	cout<<"Ingrese el valor de hora de trabajo en pesos: "<<endl;
	cin>>valor;
	cout<<"Ingrese horas extras: ";
	cin>>numero;
	
	if (numero > 0){
		
		t=numero*4000;
		cout<<"El salario es: "<<salario(h,valor,t)<<endl;

	}
	string descuento="";
	cout<<"tiene convenio de descuento por prestamos ?: ";
	cin>> descuento;
	if (descuento == "si"){
		
		t=numero*4000-300000;
		
	cout<<"El salario es: "<<salario(h,valor,t)<<endl;
	}
	
	string conveniosocial="";
	cout<<"tiene seguridad social ?: ";
	cin>> conveniosocial;
	if (conveniosocial == "si")
	{
		t=numero*4000-72000;
		
	cout<<"El salario es: "<<salario(h,valor,t)<<endl;
	}
	

	string ahorro="";
	cout<<"tiene fondo ahorro voluntario ?: ";
	cin>> ahorro;
	if (ahorro == "si"){
		t=numero*4000+150000;
		cout<<"El salario es: "<<salario(h,valor,t)<<endl;
	}

	
	return 0;		
}


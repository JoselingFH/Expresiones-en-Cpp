//5. Escriba un fragmento de programa que intercambie los valores de dos variables

#include<iostream>

using namespace std;

int main(){
	int a,b,tem;

	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	
	tem = a;
	a = b;
	b = tem;
	
	cout<<"\nAhora el valor de a es: "<<a<<endl;
	cout<<"Ahora el valor de b es: "<<b<<endl;
	
	
	
	return 0;
}


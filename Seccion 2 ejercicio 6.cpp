//6.Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>
using namespace std;
int main(){
	float a1,a2,a3,a4, notafinalmedia;
	
	cout<<"Ingrese la nota de a1: "; cin>>a1;
	cout<<"Ingrese la nota de a2: "; cin>>a2;
	cout<<"Ingrese la nota de a3: "; cin>>a3;
	cout<<"Ingrese la nota de a4: "; cin>>a4;
	
	notafinalmedia = (a1+a2+a3+a4)/4;
	
	cout.precision(2);
	cout<<"\nLa nota final media es: "<<notafinalmedia<<endl;
	
	
	return 0;
}

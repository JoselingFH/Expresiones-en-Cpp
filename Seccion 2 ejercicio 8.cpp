/*8.Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo
y escriba en la salida estandar su hipotenusa*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float c1,c2,h;
	
	cout<<"Ingrese el valor de c1: "; cin>>c1;
	cout<<"Ingrese el valor de c2: "; cin>>c2;
	
	h= sqrt(pow(c1,2)+pow(c2,2));

	cout<<"\nLa hipotenusa es: "<<h<<endl;	
	
	
	return 0;
	
} 

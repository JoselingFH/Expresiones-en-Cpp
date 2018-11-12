//9.Realice un programa que calcule el valor que toma la siguiente funcion para valores dados de x e y:

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,y,f = 0; 
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	f= (sqrt(x))/(pow(y,2)-1);
	
	cout.precision(2);
	cout<<"\nEl valor de f es: "<<f<<endl;
		
	return 0;
}

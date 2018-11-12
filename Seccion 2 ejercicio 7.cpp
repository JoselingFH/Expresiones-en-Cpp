/*7.La calificación final de un estudiante es el promedio de tres notas:
	-La nota de prácticas cuenta un 30% del total
	-La nota teórica que cuenta un 60%
	-La nota de participación que cuenta el 10% restante.
Escriba un programa que lea las tres notas del alumno y escriba su nota final*/

#include<iostream>
using namespace std;
int main(){
	float nota_practicas,nota_teorica,nota_participacion, notafinal = 0;
	
	cout<<"Digite la nota de practicas: "; cin>>nota_practicas;
	cout<<"Digite la nota teorica: "; cin>>nota_teorica;
	cout<<"Digite la nota de participacion: "; cin>>nota_participacion;
	
	notafinal = (nota_practicas*0.30)+(nota_teorica*0.60)+(nota_participacion*0.10);
	
	cout<<"\nLa nota final es: "<<notafinal<<endl; 
	
	
	return 0;
}

#include <iostream>
#include<string>
//programador ERNESTO KALEB//
using namespace std;

int main() {
	string nombre;
	string apellido;
	string genero;
	int edad;
	double peso;
	
	cout<<"nombre de la persona: ";
	cin>>nombre;
	cout<<"apellido de la persona: ";
	cin>>apellido;
	cout<<"cual es el genero de la persona: ";
	cin>>genero;
	cout<<"edad de la persona: ";
	cin>>edad;
	cout<<"introduzca el peso de la persona: ";
	cin>>peso;
	//desplegar todos los datos//
	cout<<"\n el nombre de la persona es: "<<nombre;
	cout<<"\n el apellido de la persona es: "<<apellido;
	cout<<"\n el genero de la persona es: "<<genero;
	cout<<"\n edad: "<<edad;
	cout<<"\n peso: "<<peso;
	cout<<"\n ¿deseas dar otros datos?";
	
}


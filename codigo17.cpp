#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int opc;
	cout<<"\n MENU \n";
	cout<<"\n 1.- edad \n";
	cout<<"\n 2.- aprobado y reprobado \n";
	cout<<"\n 3.- edad es verdadera \n";
	cout<<"\n 4.- temperatura mayor \n";
	cout<<"\n 5.- invierte el valor \n";
	cout<<"\n 6.- numeros iguales \n";
	cout<<"\n 7.- valor de numero \n";
	cout<<"\n 8.- usuario y contrase \n";
	cout<<"\n 9.- adios \n";
	cout<<"\n elige una opcion... ";
	cin>>opc;
	switch (opc)
	{
	case 1:
		{
		int edad;
		cout<<"introduce la edad: ";
		cin>>edad;
		if (edad>=18)
		{
			cout<<"eres mayor de edad";
		}
		break;
	}
	case 2:
		{
			int calificacion,nombre;
		cout<<"\n introduce el nombre del alumno";
		cin>>nombre;
		cout<<"\n introduce la calificacion";
		cin>>calificacion;
		if (calificacion>=60)
		{
			cout<<"\n felicidades estas aprobado";
		}
		else
			{
			cout<<"\n lo siento estas reprobado";
		}
		break;
	}
	case 3:
		{
		int edad;
		bool tieneID = true;
		cout<<"dame la edad ";
		cin>>edad;
		if (edad>=18 && tieneID)
		{
			cout<<"puede ingresar";
		}
		else
			{
			cout<<"no titene edad";
		}
		break;
		}
	case 4:
		{
		int temperatura=50;
		if (temperatura> 30 || temperatura)
		{
			cout<<"temperatura extrema";
		}
		break;
		}
	case 5:
		{
		bool soylisto = false;
		if (!soylisto)
		{
			cout<<"soy tonto";
		}
		break;
		}
	case 6:
		{
		int a=2, b=2;
		if (a==b)
		{
			cout<<"son iguales";
		}
		break;
		}
	case 7:
		{
		int numero;
		cout<<"\n ingresa un numero";
		cin>>numero;
		if (numero>=0)
		{
			if (numero==0)
			{
				cout<<"\n el numero es 0";
			}
			else
			{
				cout<<"\n el numero es positivo";
			}
		}
		else
			{
			cout<<"\n el numero es negativo";
		}
		break;
		}
	case 8:
		{
		string usuario,contrase;
		cout<<"ingresa el usuario";
		cin>>usuario;
		cout<<"ingresa la contrase";
		cin>>contrase;
		if (usuario=="admin")
		{
			if (contrase=="1234")
			{
				cout<<"acceso consedido";
			}
			else
				{
				cout<<"\n contrase incorrecta";
			}
		}
		else
			{
			cout<<"el usuario no existe";
		}
		return 0;
		break;
		}
	case 9:
		{
		Beep (750,3500);
		std::cout<<"\n\n\n adios hasta pronto";
		return 0;
		break;
		}
	default:
		{
		cout<<"ERROR 404 LA OPCION NO EXISTE";
		Beep (750,3500);
		std::cout<<"\n\n\n adios";
		break;
		}
		
		
	}
	return 0;
}


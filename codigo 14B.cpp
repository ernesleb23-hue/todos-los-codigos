#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	string user = "admin";
	string useri;
	string password = "123456789";
	string pass;
	cout<<"\n login"<<endl;
	cout<<"\n usser: ";
	cin>>useri;
	if (user == useri)
	{
		cout<<"\n el usuario es correcto";
	}
	else
		{
		Beep (750,3000);
		std::cout<<"\n \n \n el usuario es incorrecto intentalo de nuevo"<<endl;
	}
	cout<<"\n password: ";
	cin>>pass;
	if (pass == password)
	{
		cout<<"\n la contraseña es correcta";
	}
	else
		{
		cout<<"\n la contraseña es incorecta";
	}
	Beep (750,3000);
	std:: cout<<"\n \n \n adios";
	
return 0;
}

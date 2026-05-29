#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	string usuario,contrase;
	cout<<"ingresa el usuario: ";
	cin>>usuario;
	cout<<"ingresa la contrase: ";
	cin>>contrase;
	if (usuario=="admin")
	{
		if (contrase=="1234")
		{
			cout<<"\n acceso consedido";
		}
		else
		{
			cout<<"contrase incorrecta";
		}
	}
	else{
		cout<<"\n el usuario no existe";
		}
	Beep (750,3000);
	std::cout<<"\n \n \n adios";
	return 0;
}


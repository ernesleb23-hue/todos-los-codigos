#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int opcion;
	cout<<"programacion\n 1)java\n 2)python\n 3)c++\n elige un lenguaje: ";
	cin>>opcion;
	switch (opcion)
	{
	case 1:
		cout<<"\n\n seleccionaste java\n";
		break;
	case 2:
		cout<<"\n\n seleccionaste python\n";
		break;
	case 3:
		cout<<"\n\n seleccionaste c++\n";
		break;
	default:
		cout<<"\n\n\n lenguaje no valido\n";
		Beep(750,3500);
		std::cout<<"\n\n\n adios";
	}
	return 0;
}


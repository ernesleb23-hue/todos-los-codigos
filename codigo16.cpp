#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int opcion;
	cout<<"office\n 1)word\n 2)powerpoint 3)excel\n elige un programa: ";
	cin>>opcion;
	switch (opcion)
	{
	case 1:
		cout<<"\n\n seleccionaste word\n";
		break;
	case 2:
		cout<<"\n\n seleccionaste powerpoint\n";
		break;
	case 3:
		cout<<"\n\n seleccionaste excel\n";
		break;
	default:
		cout<<"\n\n\n programa no valido\n";
		Beep(750,3500);
		std::cout<<"\n\n\n adios";
	}
	return 0;
}


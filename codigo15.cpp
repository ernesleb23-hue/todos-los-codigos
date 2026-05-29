#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int opcion;
	cout<<"menu: \n1) sumar\n2)restar\n3)multiplicar\n elige una opcion: ";
	cin>>opcion;
	switch (opcion)
	{
		case 1:
			cout<<"\n\n selecionaste sumar \n";
		break;
		case 2:
			cout<<"\n\n selecionaste restar \n";
		break;
		case 3:
			cout<<"\n\n selecionaste multiplicar \n";
		break;
	default:
		cout<<"\n\n\n opcion no valida \n";
		Beep(750,3500);
		std::cout<<"\n\n\n adios";
	}
	return 0;
}
    

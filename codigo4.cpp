#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;
int main() {
	string nombre;
	string colonia;
	long cp;
	cout<<"introduzca el nombre de la persona"<<endl;
	cin>>nombre;
	cout<<"introduzca la colonia de la persona"<<endl;
	cin>>colonia;
	cout<<"introduzca el codigo postal de la persona"<<endl;
	cin>>cp;
	cout<< "el nombre de la persona es: "<<nombre<<endl;
	cout<< "la colonia de la persona es: "<<colonia<<endl;
	cout<< "el codigo postal de la persona es: "<<cp<<endl;
	system("pause");
	
	return 0;
}


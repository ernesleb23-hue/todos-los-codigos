#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;
int main() {
	string nombre;
	string colonia;
	long cp;
	string pais;
	string planeta;
	cout<<"introduzca el nombre de la persona"<<endl;
	cin>>nombre;
	cout<<"introduzca la colonia de la persona"<<endl;
	cin>>colonia;
	cout<<"introduzca el codigo postal de la persona"<<endl;
	cin>>cp;
	cout<<"introduzca el pais donde vive la persona"<<endl;
	cin>>pais;
	cout<<"introduzca el planeta donde vive la persona"<<endl;
	cin>>planeta;
	cout<< "el nombre de la persona es: "<<nombre<<endl;
	cout<< "la colonia de la persona es: "<<colonia<<endl;
	cout<< "el codigo postal de la persona es: "<<cp<<endl;
	cout<< "el pais donde vive la persona es: "<<pais<<endl;
	cout<< "el planeta donde vive la persona es: "<<planeta<<endl;
	system("pause");
	
	return 0;
}


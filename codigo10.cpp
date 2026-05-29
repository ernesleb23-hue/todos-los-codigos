#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"\n numero positivo o negativo";
	cout<<"\n introduce un numero: ";
	cin>>num;
	
	if (num>0)
	{
	cout<<"\n el numero es positivo: "<<num;
	}
	else
	{
	if (num<0)
	{
	cout<<"\n el numero es negativo: "<<num;
	}
	}
	return 0;
}


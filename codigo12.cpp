#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout<<"\n introduce un numero: ";
	cin>>a;
	cout<<"\n introduce otro numero: ";
	cin>>b;
	if(a>b)
	{
		cout<<"\n el primer numero es mayor";
	}
	else
	{
		if(a<b)
		{
			cout<<"\n el segundo numereo es mayor";
		}
		else
		   {
			cout<<"\n los numero son iguales";
		}
	}
	return 0;
}


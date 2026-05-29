#include <iostream>
using namespace std;

int main() {
	int edad;
	cout<<"\n ingresa tu edad: ";
	cin>>edad;
	if (edad>=60)
	{
		cout<<"eres un adulto mayor";
	}
	else
		{
		if (edad>=18)
		{
			cout<<"eres un adulto";
		}
		else
			{
			if (edad>=13)
			{
				cout<<"eres un adolescente";
			}
			else
				{
				cout<<"eres un niño";
			}
		}
	}
	return 0;
}


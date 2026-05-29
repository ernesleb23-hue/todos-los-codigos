#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int area, base, altura;
	cout<<"\n programa que determina el area de un triangulo";
	cout<<"\n introduce la base: ";
	cin>>base;
	cout<<"\n introduce la altura: ";
	cin>>altura;
	area=(base*altura)/2;
	cout<<"\n el area del triangulo es: "<<area;
}

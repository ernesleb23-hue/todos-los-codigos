#include <iostream>
using namespace std;

int main() {
	int n;
	int i;
	int s;
	s=0;
	cin>>n;
	for (i=20; i>=n; i--)
	{
		if (i%2==0)
		{
			cout<<"\n"<<i;
			s=s+1;
		}
	}
	cout<<"\n numeros pares ";
	cout<<s;
	return 0;
}


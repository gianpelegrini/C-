#include <iostream>
using namespace std;
#include <iomanip>

int main (int argc, char**argv)
{
	int i;
	double d;
	
		for(int i=0; i<5; i++)
	{
	cout << *x << endl;
	++x;	
	}
	cout << "Digite o valor de int: ";
	cin >> i;
	
	cout << "Digite o valor de double: ";
	cin >> d;
	
	cout << "Valor int: " << setw(10)<< i << std::endl;
	cout << "Valor double: " << setw(10) << d << std::endl;
	
return 0;

}
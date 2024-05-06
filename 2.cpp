#include <iostream>
using namespace std;
int main ()
{
	int n, count = 0, limit;
	cout << "Introduce el valor para la tabla de multiplicar:  ";
	cin >> n;
	cout << "Introduce el limite maximo para la tabla de multiplicar:  ";
	cin >> limit;
	do
	{
		cout << n << "*" << count << " = " << n*count <<endl;
		count++;
		
	}
	while (count <= limit);
	return 0;
}

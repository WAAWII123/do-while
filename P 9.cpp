#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float num;
	float factorial = 1;
	//Se pide el numero del factoria a calcular
	cout << "ingrese el numero a calcular:  ";
	//Vamos a fijar solo dos decimales para los calculos
	cout << setprecision(2);
	cout << fixed;
	
	//Se ingresa el numero a num
	cin >>num;
	
	for (
	int i = 1; i <= num; i++) {
	   factorial += i;	
	}
	
cout << "El factorial de "<<num<<" es " <<factorial << "\n";
return 0;
}

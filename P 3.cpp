#include<iostream>
using namespace std;

int main ()
{
	int i=1;
	float num, Total=0.0;
	char choose='1';
	//Mnesaje de bienvenida
	
	cout << "Este programa sumara los numeros ingresados " << "\n";
	
	while (choose =='1')
	
	    {
	    	//Se pide el primer nuemro
	    	cout << "Ingrese el numero: ";
	    	//Se asigna el vaalor a num
	    	cin >> num;
	    	
	    	Total= Total+num;
	    	cout<< "Para continuar captando mas datos 1, para terminar 0  "<<endl;
	    }
   cout<<"La suma de los numeros es  "<<Total<<endl;
   return 0;
}

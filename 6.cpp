#include <iostream>
int main () {
	using namespace std;
	int choose = 1;
	while (choose == 1) {
		int b;
		cout << "Ingresa un numero para verificar par o impar" << endl;
		cin >> b;
		if (b%2 == 0) {
			cout << "Numero es par" << endl;
	}
	else {
		cout << "Numero es impar" << endl;
	}
	cout << "Para comprobar mas: 1 para si y 0 para no" << endl;
	cin >> choose;
	
	}
	cout << "Todos los numeros verificados" << endl;
	return 0;
}

#include <iostream>
#include <locale>
using namespace std;

// Teste de valida��o n�meros pares e impares - IF ELSE
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Entre com um n�mero inteiro: ";
	cin >> num;
	
	if (num % 2 == 0)
		cout << "O n�mero � par.\n";
	else
		cout << "O n�mero � impar.\n";
}

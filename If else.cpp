#include <iostream>
#include <locale>
using namespace std;

// Teste de validação números pares e impares - IF ELSE
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Entre com um número inteiro: ";
	cin >> num;
	
	if (num % 2 == 0)
		cout << "O número é par.\n";
	else
		cout << "O número é impar.\n";
}

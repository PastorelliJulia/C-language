#include <iostream>

using namespace std;

// Função recursiva (!!)
void torre(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        cout << "Mova o disco 1 de torre " << origem << " para torre " << destino << endl;
        return;
    }

    torre(n - 1, origem, auxiliar, destino);
    cout << "Mova o disco " << n << " de torre " << origem << " para torre " << destino << endl;
    torre(n - 1, auxiliar, destino, origem);
}

int main() {
    int discos;

   	cout << "Digite o numero de discos que tem na sua torre: ";
    cin >> discos;

    cout << endl;
    cout << "Para resolver com " << discos << " discos:" << endl;

    torre(discos, '1', '2', '3');

    return 0;
}


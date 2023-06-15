#include <iostream>

using namespace std;

// Exemplo simples se Switch case - Menu 

int main() {
    int opcao;
    cout << "Digite uma opcao: \n";
    cout << "1- Primeira opcao\n";
    cout << "2- Segunda opcao\n";
    cout << "3- Terceira opcao\n";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Opcao 1 selecionada." << endl;
            break;
        case 2:
            cout << "Opcao 2 selecionada." << endl;
            break;
        case 3:
            cout << "Opcao 3 selecionada." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            break;
    }

    return 0;
}


#include <iostream>

using namespace std;

//Exemplo de uso de recursividade:

void andar(int posicao) {
    if (posicao == 0) {
        cout << "Voce alcancou a posicao final." << endl;
        return;
    }

    cout << "Att de posicao: " << posicao << endl;
    andar(posicao - 1);
}

int main() {
    int posicaoAtual;

    cout << "Digite sua posicao atual (Numero): ";
    cin >> posicaoAtual;

    cout << endl;
    cout << "Andando..." << endl;
    andar(posicaoAtual);

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Criação vetor
    vector<int> vetor;

    // Add elementos ao vetor
    vetor.push_back(1);
    vetor.push_back(2);
    vetor.push_back(3);

    // Imprimindo tamanho do vetor
    cout << "Tamanho do vetor: " << vetor.size() << endl;

    // Percorrendo o vetor 
    cout << "Elementos do vetor: ";
    for (size_t i = 0; i < vetor.size(); ++i) {
        cout << vetor[i] << " ";
    }

    return 0;
}


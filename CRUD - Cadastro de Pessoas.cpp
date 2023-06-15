#include <iostream>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

// Teste de CRUD em C++ - Cadastro de pessoas 

//Criação
vector<Pessoa> pessoas;

void criarPessoa() {
    Pessoa pessoa;
    cout << "Digite o nome: ";
    cin >> pessoa.nome;
    cout << "Digite a idade: ";
    cin >> pessoa.idade;
    pessoas.push_back(pessoa);
    cout << "Pessoa criada com sucesso!" << endl;
}

// Listagem
void listarPessoas() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        cout << "Lista de pessoas:" << endl;
        for (const auto & pessoa : pessoas) {
            cout << "Nome: " << pessoa.nome << ", Idade: " << pessoa.idade << endl;
        }
    }
}

// Atualização
void atualizarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        string nome;
        cout << "Digite o nome da pessoa que deseja atualizar: ";
        cin >> nome;
        bool encontrou = false;
        for (auto& pessoa : pessoas) {
            if (pessoa.nome == nome) {
                cout << "Digite o novo nome: ";
                cin >> pessoa.nome;
                cout << "Digite a nova idade: ";
                cin >> pessoa.idade;
                encontrou = true;
                cout << "Pessoa atualizada com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Pessoa não encontrada." << endl;
        }
    }
}

// Delete
void deletarPessoa() {
    if (pessoas.empty()) {
        cout << "Nenhuma pessoa cadastrada." << endl;
    } else {
        string nome;
        cout << "Digite o nome da pessoa que deseja deletar: ";
        cin >> nome;
        bool encontrou = false;
        for (auto it = pessoas.begin(); it != pessoas.end(); ++it) {
            if (it->nome == nome) {
                pessoas.erase(it);
                encontrou = true;
                cout << "Pessoa deletada com sucesso!" << endl;
                break;
            }
        }
        if (!encontrou) {
            cout << "Pessoa não encontrada." << endl;
        }
    }
}

// Menu
int main() {
    int opcao;

    while (true) {
        cout << "=== Menu ===" << endl;
        cout << "1. Criar pessoa" << endl;
        cout << "2. Listar pessoas" << endl;
        cout << "3. Atualizar pessoa" << endl;
        cout << "4. Deletar pessoa" << endl;
        cout << "5. Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                criarPessoa();
                break;
            case 2:
                listarPessoas();
                break;
            case 3:
                atualizarPessoa();
                break;
            case 4:
                deletarPessoa();
                break;
            case 5:
                cout << "Saindo do programa..." << endl;
                return 0;
            default:
                cout << "Opção inválida." << endl;
                break;
        }

        cout << endl;
}
}


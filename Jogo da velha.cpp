#include <iostream>
#include <iomanip>
using namespace std;

const int LINS = 3;
const int COLS = 3;

char board[LINS][COLS];
int jogadorAtual = 1;
int movesLeft = LINS * COLS;

void printBoard() {
	for (int i = 0; i < LINS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << setw(3) << board[i][j] << " ";
		}
		
		cout << endl;
	}
}

bool makeMove(int lin, int col) {
    if (board[lin][col] != ' ') {
		cout << "Essa posição está ocupada, selecione outra!" << endl;
		return false;
	}
	
	char symbol = (jogadorAtual == 1) ? 'X' : 'O';
	board[lin][col] = symbol;
	movesLeft--;
	return true;
}

bool checarVencedor() {
	//Conferindo Linha
	for (int i = 0; i < LINS; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return true;
	}
}
	//Conferindo colunas
	for (int j = 0; j < COLS; j++) {
	 if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return true;
		}
	}
	
	//Conferir diagonais
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return true;
    }
    return false;
}

int main() {
	for(int i = 0; i < LINS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = ' ';
		}
	}
	
	while (movesLeft > 0) {
		cout << "Vez do jogador: " << jogadorAtual << endl;
		printBoard();
		
		int lin, col;
		cout << "Digite linha e coluna (0-2) -> ";
		cin >> lin >> col;
		
		if(lin < 0 || lin >= LINS || col < 0 || col >= COLS) {
			cout << "Casa inválida, tente denovo." << endl;
            continue;
        }
        
         if (makeMove(lin, col)) {
            if (checarVencedor()) {
                cout << "Jogador " << jogadorAtual << " venceu!" << endl;
                printBoard();
                return 0;
            }
            // Troca de Jogador
            jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
        }
    }
    // Fim de jogo
    cout << "Tie game!" << endl;
    printBoard();
    return 0;
}

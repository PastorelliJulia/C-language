#include <iostream>
using namespace std;

//O Quicksort é um algoritmo de classificação ou ordenaçãoonde o array é dividido em subarrays menores, ordenados separadamente e, em seguida, combinados para obter a classificação final

// Trocar elementos
void swap(int* a, int* b) { // Swap é a troca de valores entre duas variáveis
    int t = *a;
    *a = *b;
    *b = t;
}

// Partição
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Escolhendo pivo dentro do array
    int i = (low - 1); // Indice do elemento menor

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função Quicksort recursiva
void quicksort(int arr[], int low, int high) {
    if (low < high) {

        int p = partition(arr, low, high);

        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

// Ordenando o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Mostrando os array's
int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original: ";
    printArray(arr, size);

    quicksort(arr, 0, size - 1);

    cout << "Array ordenado: ";
    printArray(arr, size);

    return 0;
}


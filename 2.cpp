#include <iostream>
using namespace std;

void apresenta(int *v, int n);
void preencha(int *v, int n);

int main() {
    int n;
    cout << "TAMANHO: ";
    cin >> n;
    int *ptr = new int[n];
    preencha(ptr, n);
    apresenta(ptr, n);
    delete[] ptr; // Desalocar o bloco de memória alocado dinamicamente
    return 0;
}

void preencha(int *v, int n) {
    for (int i = 0; i < n; i++) {
        *(v + i) = i; // Usando aritmética de ponteiros para acessar elementos do array
    }
}

void apresenta(int *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(v + i) << " "; // Usando aritmética de ponteiros para acessar elementos do array
    }
    cout << endl;
}

#include <iostream>

using namespace std;

void lerNotas(float *notas, int quantidadeAlunos) {
    float *ptr = notas;
    for (int i = 0; i < quantidadeAlunos; ++i) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> *(ptr + i);
    }
}

void imprimirMedia(float *notas, int quantidadeAlunos) {
    float *ptr = notas;
    float soma = 0.0;
    for (int i = 0; i < quantidadeAlunos; ++i) {
        soma += *(ptr + i);
    }
    float media = soma / quantidadeAlunos;
    cout << "A média aritmética das notas é: " << media << endl;
}

int main() {
    int quantidadeAlunos;
    cout << "Digite a quantidade de alunos na turma: ";
    cin >> quantidadeAlunos;
    float *notas = new float[quantidadeAlunos];
    lerNotas(notas, quantidadeAlunos);
    imprimirMedia(notas, quantidadeAlunos);
    delete[] notas;
    return 0;
}

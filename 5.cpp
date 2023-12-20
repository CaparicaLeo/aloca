#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int serie;
    float nota;
};

void lerNotas(Aluno *alunos, int quantidadeAlunos) {
    for (int i = 0; i < quantidadeAlunos; ++i) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite a serie do aluno " << i + 1 << ": ";
        cin >> alunos[i].serie;
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> alunos[i].nota;
        system("cls");
    }
}

void imprimirMedia(Aluno *alunos, int quantidadeAlunos) {
    float soma = 0.0;
    for (int i = 0; i < quantidadeAlunos; ++i) {
        soma += alunos[i].nota;
    }
    float media = soma / quantidadeAlunos;
    cout << "A media aritmetica das notas eh: " << media << endl;
}

int main() {
    int quantidadeAlunos;
    cout << "Digite a quantidade de alunos na turma: ";
    cin >> quantidadeAlunos;
    Aluno *alunos = new Aluno[quantidadeAlunos];
    lerNotas(alunos, quantidadeAlunos);
    imprimirMedia(alunos, quantidadeAlunos);
    delete[] alunos;
    return 0;
}

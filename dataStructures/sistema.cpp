#include "sistema.h"
using namespace std;

void cadastrarAluno(Stack<Aluno>& pilha, int& contadorAlunos)
{
	string nome;
	cout << "Digite o nome do aluno: ";
	getline(cin, nome);

	Aluno novo(contadorAlunos++, nome);
	pilha.push(novo);

	cout << "Aluno cadastrado." << endl;

}

void cadastrarNota(Stack<Aluno>& pilha, Deque<Nota>& fila)
{
	int numeroAluno;
	float valor;

	cout << "Digite o numero do aluno: ";
	cin >> numeroAluno;
	cout << "Digite a nota: ";
	cin >> valor;

	//Metodo interno para verificar se existe este aluno na pilha
	Stack<Aluno> temp = pilha;
	while (!temp.empty()) {
		temp.top().
	}
	

}

void calcularMedia(Stack<Aluno>& pilha, Deque<Nota>& fila)
{
}

void listarAlunosSemNotas(Stack<Aluno>& pilha, Deque<Nota>& fila)
{
}

void excluirAluno(Stack<Aluno>& pilha, Deque<Nota>& fila)
{
}

void excluirNota(Deque<Nota>& fila)
{
}

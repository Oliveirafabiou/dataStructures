#include <iostream>
#include "stack.h"
#include "pessoa.h"


int main() {
	
	Stack<Pessoa> pilhaPessoas;
	int contadorAlunos = 1;

	for (int i = 0; i < 7; i++)
	{
		std::string nome;
		std::cout << "Digite o nome do aluno: ";
		getline(cin, nome);

		Pessoa novaPessoa("Fulano", 35, 'M');
		pilhaPessoas.push(novaPessoa);

		contadorAlunos++;
	};
	
	
	
	std::cout << "\nAlunos na pilha (do topo para a base):\n";
	//pilhaPessoas.print();



	return 0;
};




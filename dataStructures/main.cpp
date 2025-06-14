#include "sistema.h"
#include <iostream>


int main() {
	
	Stack<Aluno> pilhaAlunos;
	int contadorAlunos = 1;

	for (int i = 0; i < 7; i++)
	{
		string nome;
		cout << "Digite o nome do aluno: ";
		getline(cin, nome);

		Aluno novoAluno(contadorAlunos, nome);
		pilhaAlunos.push(novoAluno);

		contadorAlunos++;
	};
	
	
	
	std::cout << "\nAlunos na pilha (do topo para a base):\n";
	pilhaAlunos.print();



	return 0;
};



//MAIN DA PROVA

//int main() {
//    Stack<Aluno> pilhaAlunos;
//    Deque<Nota> filaNotas;
//    int contadorAlunos = 1;
//
//    int opcao;
//
//    do {
//        cout << "\n******* Gerenciador de Alunos *******\n";
//        cout << "1 - Cadastrar aluno\n";
//        cout << "2 - Cadastrar nota\n";
//        cout << "3 - Calcular média de um aluno\n";
//        cout << "4 - Listar os nomes dos alunos sem notas\n";
//        cout << "5 - Excluir aluno\n";
//        cout << "6 - Excluir nota\n";
//        cout << "7 - Sair\n";
//        cout << "Escolha uma opção: ";
//        cin >> opcao;
//        cin.ignore();
//
//        switch (opcao) {
//        case 1:
//            cadastrarAluno(pilhaAlunos, contadorAlunos);
//            break;
//        case 2:
//            cadastrarNota(pilhaAlunos, filaNotas);
//            break;
//        case 3:
//            calcularMedia(pilhaAlunos, filaNotas);
//            break;
//        case 4:
//            listarAlunosSemNotas(pilhaAlunos, filaNotas);
//            break;
//        case 5:
//            excluirAluno(pilhaAlunos, filaNotas);
//            break;
//        case 6:
//            excluirNota(filaNotas);
//            break;
//        case 7:
//            cout << "Encerrando o programa.\n";
//            break;
//        default:
//            cout << "Opção inválida!\n";
//        }
//
//    } while (opcao != 7);
//
//    return 0;
//}



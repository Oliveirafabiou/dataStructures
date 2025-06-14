#include "stack.h"
#include "deque.h"
#include "list.h"
#include "pessoa.h"
#include <cstdlib>
#include <ctime>



// Main para testar o nodo

//int main() 
//{
//    Stack<string> minhaPilha;
//
//    minhaPilha.push("CAVALO");
//    minhaPilha.print();
//    minhaPilha.push("CACHORRO");
//    minhaPilha.print();
//	minhaPilha.getSize();
//    minhaPilha.push("VACA");
//    minhaPilha.print();
//
//	minhaPilha.getSize();
//	minhaPilha.pop();
//	minhaPilha.print();
//	minhaPilha.getSize();
//
//    return 0;
//}



//Main Pilha de pratos

//int main()
//{
//	unsigned seed = time(0);
//	srand(seed);
//
//	int turnos;
//
//	do {
//		cout << "Quantos turnos voce deseja simular?" << endl;
//		cin >> turnos;
//	} while (turnos <= 0);
//
//
//	Stack<char> pratosMolhados;
//	Stack<char> pratosSecos;
//	
//	for (int i = 1; i <= turnos; i++) {
//	
//		// Gera o numero aleatorio de pratos lavados para cada turno
//		int pratosLavados = rand() % 5 + 1;
//		cout << "\nTurno " << i << ": Lavando " << pratosLavados << " pratos." << endl;
//		cout << "..." << endl;
//
//		// Adicona os pratos lavados na pilha
//		for (int j = 0; j < pratosLavados; j++) {
//			pratosMolhados.push('P');
//		}
//
//		// Mostra a pilha ap�s lavagem
//		cout << "Pilha de pratos molhados apos lavagem: ";
//		pratosMolhados.print();
//		cout << "..." << endl;
//
//		// Gera o numero de pratos a serem secos
//		int pratosASecar = 0;
//
//		if (pratosMolhados.getSize() < 3) {
//			pratosASecar = rand() % pratosMolhados.getSize() + 1;
//		}
//		else {
//			pratosASecar = rand() % 3 + 1;
//		}
//
//		
//
//		// Remove os pratos secos da pilha
//		cout << "Turno " << i << ": Secando " << pratosASecar << " pratos." << endl;
//		cout << "..." << endl;
//
//		for (int j = 0; j < pratosASecar; j++) {
//			pratosSecos.push(pratosMolhados.peek());
//			pratosMolhados.pop();
//		}
//		// Mostra a pilha ap�s secagem
//		cout << "Pilha de pratos molhados apos secagem: ";
//		pratosMolhados.print();
//		pratosMolhados.printSize();
//
//		cout << "..." << endl;
//
//		cout << "Pilha de pratos secos: ";
//		pratosSecos.print();
//		pratosSecos.printSize();
//		cout << "..." << endl;
//
//
//	}
//}


// Main para testar o deque



// int main() {
// 	Deque<int> d;

// 	d.pushFront(10);
// 	d.print();  // Deque: 10
// 	d.pushBack(20);
// 	d.print();  // Deque: 10 20

// 	d.pushFront(5);
// 	d.print();  // Deque: 5 10 20

// 	cout << "Front: " << d.getFront() << endl;  // 5
// 	cout << "Back: " << d.getBack() << endl;    // 20

// 	d.popFront();
// 	d.print();  // Deque: 10 20

// 	d.popBack();
// 	d.print();  // Deque: 10

// 	d.popBack();
// 	d.print();  // Deque vazio

// 	return 0;
// }



// Main para testar a lista:


int main() {
	
	Pessoa p1("Joao", 20, 'M');
	Pessoa p2("Maria", 22, 'F');
	Pessoa p3("Jose", 25, 'M');
	Pessoa p4("Ana", 18, 'F');
	Pessoa p5("Carlos", 30, 'M');



	 Lista<Pessoa> lPessoa;
	 lPessoa.insert(p1);
	 lPessoa.insert(p2);
	 lPessoa.insert(p3);
	 lPessoa.insert(p4);
	 lPessoa.insert(p5);
	 lPessoa.remove(p2);
	 for (int i = 0; i < lPessoa.getSize(); i++) {
		 lPessoa.getItem(i).printPessoa();
	 }
	 cout << "Tamanho da lista: " << lPessoa.getSize() << endl;

	 int a = 0;
	 float b = 2.0;

	 bool c = a != b;

	
	// Lista<int> l;
	// l.insert(16);
	// l.insert(10);
	// l.insert(48);
	// l.insert(1);
	// l.insert(12);
	// l.print();
	// l.remove(18);
	// l.arrange();
	// l.print();
	// l.remove(16);
	// l.print();
	// cout << "Tamanho da lista: " << l.getSize() << endl;


	return 0;
};



#pragma once
#include "node.h"

template <class T>
class Deque {
private:
	Node<T>* front;
	Node<T>* back;
	int size;

public:
	Deque();
	~Deque();

	void pushFront(T elemento);
	void pushBack(T elemento);
	void popFront();
	void popBack();
	T getFront();
	T getBack();
	void print();
	int getSize();
	bool isEmpty();
};




// Construtor
template <class T>
Deque<T>::Deque() {
	front = NULL;
	back = NULL;
	size = 0;
}

// Destrutor
template <class T>
Deque<T>::~Deque() {
	Node<T>* temp = front;
	while (temp != NULL) {
		Node<T>* next = temp->getProximo();
		delete temp;
		temp = next;
	}
}

// Inserir no inicio
template <class T>
void Deque<T>::pushFront(T elemento) {
	Node<T>* newNode = new Node<T>(elemento);
	if (front == NULL) {
		front = back = newNode;
	}
	else {
		newNode->setProximo(front);
		front->setAnterior(newNode);
		front = newNode;
	}
	size++;
}

// Inserir no final
template <class T>
void Deque<T>::pushBack(T elemento) {
	Node<T>* newNode = new Node<T>(elemento);
	if (back == NULL) {
		front = back = newNode;
	}
	else {
		back->setProximo(newNode);
		newNode->setAnterior(back);
		back = newNode;
	}
	size++;
}

// Remover do inicio
template <class T>
void Deque<T>::popFront() {
	if (front == NULL) {
		cout << "Deque empty!" << endl;
		return;
	}
	Node<T>* temp = front;
	front = front->getProximo();
	if (front != NULL) {
		front->setAnterior(NULL);
	} 
	else {
		back = NULL;
	}
	delete temp;
	size--;
}

// Remover do final
template <class T>
void Deque<T>::popBack() {
	if (back == NULL) {
		cout << "Deque empty!" << endl;
		return;
	}
	Node<T>* temp = back;
	back = back->getAnterior();
	if (back != NULL) {
		back->setProximo(NULL);
	}
	else {
		front = NULL;
	}
	delete temp;
	size--;
}

// Consultar o elemento da frente "SEM RETIRAR"
template <class T>
T Deque<T>::getFront() {
	if (front == NULL) {
		cout << "Deque empty!" << endl;
		return T();
	}
	return front->getElemento();
}

// Consultar o elemento de trás "SEM RETIRAR"
template <class T> 
T Deque<T>::getBack() {
	if (front == NULL) {
		cout << "Deque empty!" << endl;
		return T();
	}
	return back->getElemento();
}

// Imprimir os elementos 
template <class T>
void Deque<T>::print() {
	Node<T>* temp = front;
	cout << "Deque: ";
	while (temp != NULL) {
		cout << temp->getElemento() << " ";
		temp = temp->getProximo();
	}
	cout << endl;
}

// Retorna o tamanho do deque
template <class T>
int Deque<T>::getSize() {
	return size;
}

// Verifica se o deque esta vazio
template <class T>
bool Deque<T>::isEmpty() {
	return size == 0;
}


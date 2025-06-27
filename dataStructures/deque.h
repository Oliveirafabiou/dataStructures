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
	front = nullptr;
	back = nullptr;
	size = 0;
}

// Destrutor
template <class T>
Deque<T>::~Deque() {
	Node<T>* temp = front;
	while (temp != nullptr) {
		Node<T>* next = temp->getProximo();
		delete temp;
		temp = next;
	}
}

// Inserir no inicio
template <class T>
void Deque<T>::pushFront(T elemento) {
	Node<T>* newNode = new Node<T>(elemento);
	if (front == nullptr) {
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
	if (back == nullptr) {
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
	if (front == nullptr) {
		cout << "Deque empty!" << endl;
		return;
	}
	Node<T>* temp = front;
	front = front->getProximo();
	if (front != nullptr) {
		front->setAnterior(nullptr);
	} 
	else {
		back = nullptr;
	}
	delete temp;
	size--;
}

// Remover do final
template <class T>
void Deque<T>::popBack() {
	if (back == nullptr) {
		cout << "Deque empty!" << endl;
		return;
	}
	Node<T>* temp = back;
	back = back->getAnterior();
	if (back != nullptr) {
		back->setProximo(nullptr);
	}
	else {
		front = nullptr;
	}
	delete temp;
	size--;
}

// Consultar o elemento da frente "SEM RETIRAR"
template <class T>
T Deque<T>::getFront() {
	if (front == nullptr) {
		cout << "Deque empty!" << endl;
		return T();
	}
	return front->getElemento();
}

// Consultar o elemento de trás "SEM RETIRAR"
template <class T> 
T Deque<T>::getBack() {
	if (front == nullptr) {
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
	while (temp != nullptr) {
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


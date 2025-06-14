#pragma once
#include "node.h"

template <class T>
class Stack {
private:
	Node<T>* base;
	Node<T>* top;
	int size;

public:
	Stack() {
		this->base = NULL;
		this->top = NULL;
		this->size = 0;
	};

	~Stack() {
		Node<T>* temp = this->top;
		while (temp != NULL) {
			Node<T>* anterior = temp->getAnterior();
			delete temp;
			temp = anterior;
		}
		this->base = NULL;
		this->top = NULL;
		this->size = 0;
	}

	//Metodos
	void push(T elemento) {
		Node<T>* newNode = new Node<T>(elemento);
		//Caso n�o tenha nada na pilha, o pr�prio nodo � a base e o topo
		if (this->base == NULL) {
			this->base = newNode;
			this->top = newNode;
		}
		//Caso tenha algo na pilha, o novo nodo � o topo
		else {
			this->top->setProximo(newNode);
			newNode->setAnterior(this->top);
			this->top = newNode;
		}
		this->size++;
	};



	void pop() {
		if (this->top == NULL) {
			cout << "Pilha vazia!" << endl;
			return;
		}
		Node<T>* temp = this->top;
		this->top = this->top->getAnterior();
		if (this->top != NULL) {
			this->top->setProximo(NULL);
		}
		else {
			this->base = NULL;
		}
		delete temp;
		this->size--;
	}

	T const& top() const {
		if (this->top == nullptr) {
			cout << "Pilha vazia!" << endl;
			return T();
		}
		return this->top->getElemento();
	}

	void print() {
		Node<T>* temp = this->base;
		cout << "Pilha: \n";
		while (temp != NULL) {
			cout << temp->getElemento() << " ";
			temp = temp->getProximo();
		}
		cout << endl;
	}

	int getSize() {
		return this->size;
	};

	bool empty() {
		return (this->size == 0);
	};

	void printSize() {
		cout << "Tamanho da pilha: " << this->size << endl;
	};

};
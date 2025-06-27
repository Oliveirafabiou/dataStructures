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
		this->base = nullptr;
		this->top = nullptr;
		this->size = 0;
	};

	~Stack() {
		Node<T>* temp = this->top;
		while (temp != nullptr) {
			Node<T>* anterior = temp->getAnterior();
			delete temp;
			temp = anterior;
		}
		this->base = nullptr;
		this->top = nullptr;
		this->size = 0;
	}

	//Metodos
	void push(T elemento) {
		Node<T>* newNode = new Node<T>(elemento);
		//Caso n�o tenha nada na pilha, o pr�prio nodo � a base e o topo
		if (this->base == nullptr) {
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
		if (this->top == nullptr) {
			std::cout << "Pilha vazia!" << std::endl;
			return;
		}
		Node<T>* temp = this->top;
		this->top = this->top->getAnterior();
		if (this->top != nullptr) {
			this->top->setProximo(nullptr);
		}
		else {
			this->base = nullptr;
		}
		delete temp;
		this->size--;
	}

	T const& top() const {
		if (this->top == nullptr) {
			std::cout << "Pilha vazia!" << std::endl;
			return T();
		}
		return this->top->getElemento();
	}

	void print() {
		Node<T>* temp = this->base;
		std::cout << "Pilha: \n";
		while (temp != nullptr) {
			std::cout << temp->getElemento() << " ";
			temp = temp->getProximo();
		}
		std::cout << std::endl;
	}

	int getSize() {
		return this->size;
	};

	bool empty() {
		return (this->size == 0);
	};

	void printSize() {
		std::cout << "Tamanho da pilha: " << this->size << std::endl;
	};

};
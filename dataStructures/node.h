#pragma once
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node {
private:
	T elemento;
	Node<T>* proximo;
	Node<T>* anterior;

public:
	Node() {
		proximo = NULL;
		anterior = NULL;
	}

	Node(T elemento) {
		this->elemento = elemento;
		this->proximo = NULL;
		this->anterior = NULL;
	};

	~Node() {
		this->proximo = NULL;
		this->anterior = NULL;
	};

	//Metodos
	void setAtributos(T elemento, Node<T>* proximo, Node<T>* anterior) {
		this->elemento = elemento;
		this->proximo = proximo;
		this->anterior = anterior;
	};


	T getElemento() {
		return this->elemento;
	};
	Node<T>* getProximo() {
		return this->proximo;
	};
	Node<T>* getAnterior() {
		return this->anterior;
	};

	void setElemento(T elemento) {
		this->elemento = elemento;
	};
	void setProximo(Node<T>* proximo) {
		this->proximo = proximo;
	};
	void setAnterior(Node<T>* anterior) {
		this->anterior = anterior;
	};



	
	
};

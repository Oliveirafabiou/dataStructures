#pragma once
#include <stdlib.h>
#include <iostream>
#include <string>

template <class T>
class Node {
private:
	T elemento;
	Node<T>* proximo;
	Node<T>* anterior;

public:
	Node();
	Node(T elemento);
	~Node();

	//Metodos
	void setAtributos(T elemento, Node<T>* proximo, Node<T>* anterior);
	T getElemento();
	Node<T>* getProximo();
	Node<T>* getAnterior();
	void setElemento(T elemento);
	void setProximo(Node<T>* proximo);
	void setAnterior(Node<T>* anterior);
};


template <class T>
Node<T>::Node(){
	this->proximo = nullptr;
	this->anterior = nullptr;
}

template <class T>
Node<T>::Node(T elemento) {
	this->elemento = elemento;
	this->proximo = nullptr;
	this->anterior = nullptr;
};

template <class T>
Node<T>::~Node() {
	this->proximo = nullptr;
	this->anterior = nullptr;
};

template <class T>
void Node<T>::setAtributos(T elemento, Node<T>* proximo, Node<T>* anterior) {
	this->elemento = elemento;
	this->proximo = proximo;
	this->anterior = anterior;
};

template <class T>
T Node<T>::getElemento() {
	return this->elemento;
};

template <class T>
Node<T>* Node<T>::getProximo() {
	return this->proximo;
};

template <class T>
Node<T>* Node<T>::getAnterior() {
	return this->anterior;
};

template <class T> 
void Node<T>::setElemento(T elemento) {
	this->elemento = elemento;
};

template<class T>
void Node<T>::setProximo(Node<T>* proximo) {
	this->proximo = proximo;
};

template<class T>
void Node<T>::setAnterior(Node<T>* anterior) {
	this->anterior = anterior;
};

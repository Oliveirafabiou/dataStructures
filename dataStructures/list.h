#pragma once
#include "node.h"

template <class T>
class Lista {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    Lista();
    ~Lista();
    
    void insert(T elemento); 
    void insertAndArrange(T elemento);
    void remove(T elemento);
    void arrange();
    void print();
    T getItem(int index);
    int getSize() const;
    

};

//Construtor
template <class T>
Lista<T>::Lista() {
    head = NULL;
    tail = NULL;
    size = 0;
};

//Destrutor
template <class T>
Lista<T>::~Lista() {
    Node<T>* temp = head;
    while (temp != NULL) {
        Node<T>* next = temp->getProximo();
        delete temp;
        temp = next;
    } 
}

//Método de insertção sem ordenação
template <class T>
void Lista<T>::insert(T elemento) {
    Node<T>* newNode = new Node<T>(elemento);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->setProximo(newNode);
        newNode->setAnterior(tail);
        tail = newNode;
    }
    size++;
};

//Método de inserção com ordenação
template <class T>
void Lista<T>::insertAndArrange(T elemento) {
    Node<T>* newNode = new Node<T>(elemento);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->setProximo(newNode);
        newNode->setAnterior(tail);
        tail = newNode;
    }
    size++;
    arrange(); // Ordena após inserção
};

//Método de ordenação
template <class T>
void Lista<T>::arrange() {
    if (head == nullptr) return;

    bool trocou;
    do {
        trocou = false;
        Node<T>* atual = head;

        while (atual->getProximo() != nullptr) {
            Node<T>* prox = atual->getProximo();
            if (atual->getElemento() > prox->getElemento()) {
                // troca os elementos (não os nós)
                T temp = atual->getElemento();
                atual->setElemento(prox->getElemento());
                prox->setElemento(temp);
                trocou = true;
            }
            atual = atual->getProximo();
        }
    } while (trocou);
}

// Método de remoção
template <class T>
void Lista<T>::remove(T elemento) {
    Node<T>* atual = head;

    // Procura o nó com o elemento
    while (atual != nullptr && atual->getElemento() != elemento) {
        atual = atual->getProximo();
    }

    //Caso não achar, sai
    if (atual == nullptr) {
        //cout << "Elemento " << elemento << " nao pode ser removido pois nao foi encontrado na lista." << endl;
        return;
    }
    
    //Se for igual o head
    if  (atual == head) {
        //cout << "Elemento " << elemento << " removido." << endl;
        head = atual->getProximo();
        if (head != nullptr) {
            head->setAnterior(nullptr);
        } else {
            tail = nullptr;
        }
    }

    //Se for igual o tail
    else if (atual == tail) {
        //cout << "Elemento " << elemento << " removido." << endl;
        tail = atual->getAnterior();
        if (tail != nullptr) {
            tail->setProximo(nullptr);
        } else {
            head = nullptr;
        }
    }

    //Se for igual a um elemento do meio da lista
    else {   
        //cout << "Elemento " << elemento << " removido." << endl;
        Node<T>* anterior = atual->getAnterior();
        Node<T>* proximo = atual->getProximo();
        anterior->setProximo(proximo);
        proximo->setAnterior(anterior);
    }

    delete atual;
    size--;
        
};

//Metodo de busca
template <class T>
T Lista<T>::getItem(int index) {
    Node<T>* atual = head;
	int contador = 0;

   // Procura o nó com o elemento
    while (atual != nullptr && contador != index) {
        atual = atual->getProximo();
		contador++;
    }

    //Caso não achar, sai
    if (atual == nullptr) {
        throw std::runtime_error("Elemento nao encontrado na lista.");
    }
    
    //Caso ache, retorna o item
    else {
        //cout << "Elemento " << elemento << " encontrado: " << endl;
        return atual->getElemento();
    }
};

//Metodo para saber tamanho da lista
template <class T>
int Lista<T>::getSize() const {
    return size;
};


//Método de impressão
//template <class T>
//void Lista<T>::print() {
//    Node<T>* atual = head;
//    while (atual != nullptr) {
//        cout << atual->getElemento() << ", ";
//        atual = atual->getProximo();
//    }
//    cout << endl;
//}
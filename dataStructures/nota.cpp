#include "nota.h"

Nota::Nota()
{
	this->numeroAluno = 0;
	this->valor = 0.0f;
}

Nota::Nota(int numeroAluno, float valor)
{
	this->numeroAluno = numeroAluno;
	this->valor = valor;
}

int Nota::getNumeroAluno() const
{
	return numeroAluno;
}

float Nota::getValor() const
{
	return valor;
}

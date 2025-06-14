#include "aluno.h"

Aluno::Aluno()
{
    this->numero = 0;
    this->nome = "";
}

Aluno::Aluno(int numero, const std::string& nome)
{
    this->numero = numero;
    this->nome = nome;
}

int Aluno::getNumero() const
{
    return numero;
}

std::string Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const std::string& nome)
{
    this->nome = nome;
}

std::ostream& operator<<(std::ostream& os, const Aluno& aluno) {
    os << "Aluno #" << aluno.getNumero() << ": " << aluno.getNome() << "\n";
    return os;
}

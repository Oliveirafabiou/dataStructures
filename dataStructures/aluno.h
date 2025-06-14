#pragma once
#include <string>
#include <iostream>

class Aluno {
private:
    int numero;
    std::string nome;

public:
    Aluno();
    Aluno(int numero, const std::string& nome);

    int getNumero() const;
    std::string getNome() const;

    void setNome(const std::string& nome);
};

std::ostream& operator<<(std::ostream& os, const Aluno& aluno);
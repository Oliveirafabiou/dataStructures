#pragma once

class Nota {
private:
    int numeroAluno;
    float valor;

public:
    Nota();
    Nota(int numeroAluno, float valor);

    int getNumeroAluno() const;
    float getValor() const;
};
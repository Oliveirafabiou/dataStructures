#pragma once
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    private:

        string name;
        int age;
        char gender;

    public:

    Pessoa();
    Pessoa(string name, int age, char gender);
    ~Pessoa() = default;


    string getName() const;
    int getAge();
    char getGender();

    void setAtributos(string name, int age, char gender);
    void setName(string name);
    void setAge(int age);
    void setGender(char gender);
    void printPessoa();


};
    bool operator!=(Pessoa const& lhs, Pessoa const& rhs);
	bool operator> (Pessoa const& lhs, Pessoa const& rhs);
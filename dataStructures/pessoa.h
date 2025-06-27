#pragma once
#include <stdlib.h>
#include <iostream>
#include <string>


class Pessoa {
    private:

        std::string name;
        int age;
        char gender;

    public:

    Pessoa();
    Pessoa(std::string name, int age, char gender);
    ~Pessoa() = default;


    std::string getName() const;
    int getAge();
    char getGender();

    void setAtributos(std::string name, int age, char gender);
    void setName(std::string name);
    void setAge(int age);
    void setGender(char gender);
    void printPessoa();


};
    bool operator!=(Pessoa const& lhs, Pessoa const& rhs);
	bool operator> (Pessoa const& lhs, Pessoa const& rhs);
#include "pessoa.h"

    Pessoa::Pessoa() {
        this->name = "";
        this->age = 0;
        this->gender = ' ';
    };

    Pessoa::Pessoa(std::string name, int age, char gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    };

    std::string Pessoa::getName() const {
        return this->name;
    };

    int Pessoa::getAge() {
        return this->age;
    };

    char Pessoa::getGender() {
        return this->gender;
    };

    void Pessoa::setAtributos(std::string name, int age, char gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    };

    void Pessoa::setName(std::string name) {
        this->name = name;
    };

    void Pessoa::setAge(int age) {
        this->age = age;
    };

    void Pessoa::setGender(char gender) {
        this->gender = gender;
    };

    void Pessoa::printPessoa() {
        std::cout << "Nome: " << this->name << std::endl;
        std::cout << "Idade: " << this->age << std::endl;
        std::cout << "Genero: " << this->gender << std::endl;

    }

    
    bool operator!=(Pessoa const& lhs, Pessoa const& rhs)
    {
        if (lhs.getName() != rhs.getName()) return true;
		else return false;
    }

    bool operator>(Pessoa const& lhs, Pessoa const& rhs)
    {
        std::string p1 = lhs.getName();
        std::string p2 = rhs.getName();

        if (p1 > p2) return true;
        else return false;
    }

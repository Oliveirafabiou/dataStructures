#include "pessoa.h"

    Pessoa::Pessoa() {
        this->name = "";
        this->age = 0;
        this->gender = ' ';
    };

    Pessoa::Pessoa(string name, int age, char gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    };

    string Pessoa::getName() const {
        return this->name;
    };

    int Pessoa::getAge() {
        return this->age;
    };

    char Pessoa::getGender() {
        return this->gender;
    };

    void Pessoa::setAtributos(string name, int age, char gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    };

    void Pessoa::setName(string name) {
        this->name = name;
    };

    void Pessoa::setAge(int age) {
        this->age = age;
    };

    void Pessoa::setGender(char gender) {
        this->gender = gender;
    };

    void Pessoa::printPessoa() {
        cout << "Nome: " << this->name << endl;
        cout << "Idade: " << this->age << endl;
        cout << "Genero: " << this->gender << endl;

    }

    
    bool operator!=(Pessoa const& lhs, Pessoa const& rhs)
    {
        if (lhs.getName() != rhs.getName()) return true;
		else return false;
    }

    bool operator>(Pessoa const& lhs, Pessoa const& rhs)
    {
		string p1 = lhs.getName();
		string p2 = rhs.getName();

        if (p1 > p2) return true;
        else return false;
    }

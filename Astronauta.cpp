#include "Astronauta.h"

Astronauta::Astronauta(const std::string& cpf, const std::string& nome, int idade)
    : cpf_(cpf), nome_(nome), idade_(idade) {}

std::string Astronauta::getCPF() const {
    return cpf_;
}

std::string Astronauta::getNome() const {  // Implementação do método getNome
    return nome_;
}

int Astronauta::getIdade() const {  // Implementação do método getIdade
    return idade_;
}

std::string Astronauta::toString() const {
    return "CPF: " + cpf_ + ", Nome: " + nome_ + ", Idade: " + std::to_string(idade_);
}
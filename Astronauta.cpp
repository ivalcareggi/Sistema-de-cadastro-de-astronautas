#include "Astronauta.h"

Astronauta::Astronauta(const std::string& cpf, const std::string& nome, int idade)
    : cpf(cpf), nome(nome), idade(idade), vivo(true), disponivel(true) {}

Astronauta::~Astronauta() {}

std::string Astronauta::getCPF() const {
    return cpf;
}

std::string Astronauta::toString() const {
    return "CPF: " + cpf + ", Nome: " + nome + ", Idade: " + std::to_string(idade);
}

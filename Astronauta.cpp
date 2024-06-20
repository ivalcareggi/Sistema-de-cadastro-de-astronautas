#include "Astronauta.h"

Astronauta::Astronauta(const std::string& cpf, const std::string& nome, int idade)
    : cpf(cpf), nome(nome), idade(idade), vivo(true), disponivel(true) {}

Astronauta::~Astronauta(){}



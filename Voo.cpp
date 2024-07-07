#include "Voo.h"
#include <algorithm>
#include <iostream>

Voo::Voo(int codigo) : codigo(codigo), disponivel(true) {}

void Voo::addAstronauta(const std::string& cpf) {
    astronautas.push_back(cpf);
    std::cout << "Astronauta com CPF " << cpf << " adicionado ao voo " << codigo << ".\n";
}

void Voo::removeAstronauta(const std::string& cpf) {
    auto it = std::remove(astronautas.begin(), astronautas.end(), cpf);
    if (it != astronautas.end()) {
        astronautas.erase(it, astronautas.end());
        std::cout << "Astronauta com CPF " << cpf << " removido do voo " << codigo << ".\n";
    } else {
        std::cout << "Astronauta com CPF " << cpf << " não encontrado no voo " << codigo << ".\n";
    }
}

std::string Voo::toString() const {
    std::string result = "Voo " + std::to_string(codigo) + " com astronautas: ";
    for (const auto& cpf : astronautas) {
        result += cpf + " ";
    }
    return result;
}

int Voo::getCodigo() const {
    return codigo;
}

void Voo::lancar() {
    disponivel = false;
}

bool Voo::estaDisponivel() const {
    return disponivel;
}

void Voo::explodir(CadastroAstronauta& cadastroAstronauta) {
    for (const auto& cpf : astronautas) {
        cadastroAstronauta.matarAstronauta(cpf); // Marca astronautas como mortos
    }
    astronautas.clear();
}
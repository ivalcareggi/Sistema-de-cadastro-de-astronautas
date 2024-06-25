#include "GerenciamentoVoo.h"
#include <iostream>
#include <algorithm>

void GerenciamentoVoo::cadastrarVoo(int codigo) {
    voos.emplace_back(codigo);
}

void GerenciamentoVoo::adicionarAstronautaAoVoo(int codigo, const std::string& cpf) {
    auto it = std::find_if(voos.begin(), voos.end(), [codigo](const Voo& voo) {
        return voo.getCodigo() == codigo;  // Use getter method
    });
    if (it != voos.end()) {
        it->addAstronauta(cpf);
    } else {
        std::cout << "Voo com código " << codigo << " não encontrado.\n";
    }
}

void GerenciamentoVoo::removerAstronautaDoVoo(int codigo, const std::string& cpf) {
    auto it = std::find_if(voos.begin(), voos.end(), [codigo](const Voo& voo) {
        return voo.getCodigo() == codigo;  // Use getter method
    });
    if (it != voos.end()) {
        it->removeAstronauta(cpf);
    } else {
        std::cout << "Voo com código " << codigo << " não encontrado.\n";
    }
}

void GerenciamentoVoo::listarVoos() const {
    for (const auto& voo : voos) {
        std::cout << voo.toString() << std::endl;
    }
}

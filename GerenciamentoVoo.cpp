#include "GerenciamentoVoo.h"
#include <iostream>
#include <algorithm>

void GerenciamentoVoo::cadastrarVoo(int codigo) {
    Voo voo(codigo);
    voos.push_back(voo);
    std::cout << "Voo com código " << codigo << " cadastrado com sucesso.\n";
}

void GerenciamentoVoo::adicionarAstronautaAoVoo(int codigo, const std::string& cpf) {
    for (auto& voo : voos) {
        if (voo.getCodigo() == codigo) {
            voo.addAstronauta(cpf);
            return;
        }
    }
    std::cout << "Voo com código " << codigo << " não encontrado.\n";
}

void GerenciamentoVoo::removerAstronautaDoVoo(int codigo, const std::string& cpf) {
    for (auto& voo : voos) {
        if (voo.getCodigo() == codigo) {
            voo.removeAstronauta(cpf);
            return;
        }
    }
    std::cout << "Voo com código " << codigo << " não encontrado.\n";
}


void GerenciamentoVoo::listarVoos() const {
    for (const auto& voo : voos) {
        std::cout << voo.toString() << std::endl;
    }
}

void GerenciamentoVoo::explodirVoo(int codigo, CadastroAstronauta& cadastroAstronauta) {
    for (auto& voo : voos) {
        if (voo.getCodigo() == codigo) {
            voo.explodir(cadastroAstronauta);
            std::cout << "Voo com código " << codigo << " explodiu.\n";
            return;
        }
    }
    std::cout << "Voo com código " << codigo << " não encontrado.\n";
}

std::vector<Voo>& GerenciamentoVoo::getVoos() {
    return voos;
}
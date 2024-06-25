#ifndef GERENCIAMENTO_VOO_H
#define GERENCIAMENTO_VOO_H

#include "Voo.h"
#include <vector>

class GerenciamentoVoo {
public:
    void cadastrarVoo(int codigo);
    void adicionarAstronautaAoVoo(int codigo, const std::string& cpf);
    void removerAstronautaDoVoo(int codigo, const std::string& cpf);
    void listarVoos() const;

private:
    std::vector<Voo> voos;
};

#endif // GERENCIAMENTO_VOO_H

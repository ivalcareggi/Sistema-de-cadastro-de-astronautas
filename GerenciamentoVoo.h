#ifndef GERENCIAMENTOVOO_H
#define GERENCIAMENTOVOO_H


#include <vector>
#include "Voo.h"

class GerenciamentoVoo {
public:
    void cadastrarVoo(int codigo);
    void adicionarAstronautaAoVoo(int codigo, const std::string& cpf);
    void removerAstronautaDoVoo(int codigo, const std::string& cpf);
    void listarVoos() const;
    void explodirVoo(int codigo, CadastroAstronauta& cadastroAstronauta);
    std::vector<Voo>& getVoos();

private:
    std::vector<Voo> voos;
};

#endif // GERENCIAMENTOVOO_H

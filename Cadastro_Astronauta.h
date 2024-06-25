#ifndef CADASTRO_ASTRONAUTA_H
#define CADASTRO_ASTRONAUTA_H

#include <vector>
#include <string>
#include <iostream>
#include "Astronauta.h"
#include "Voo.h"

class CadastroAstronauta {
public:
    void adicionarAstronauta(const Astronauta& astronauta);
    void removerAstronauta(const std::string& cpf);
    Astronauta* buscarAstronauta(const std::string& cpf);
    void listarAstronautas() const;
    void adicionarAstronautasVoo(Voo& voo);

private:
    std::vector<Astronauta> astronautas_;
};

#endif // CADASTRO_ASTRONAUTA_H

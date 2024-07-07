#ifndef CADASTRO_ASTRONAUTA_H
#define CADASTRO_ASTRONAUTA_H

#include <vector>
#include <string>
#include <iostream>
#include "Astronauta.h"
#include "Voo.h"

class Voo;  

class CadastroAstronauta {
public:
    void adicionarAstronauta(const Astronauta& astronauta);
    void removerAstronauta(const std::string& cpf);
    Astronauta* buscarAstronauta(const std::string& cpf);
    void listarAstronautas() const;
    void listarAstronautasMortos() const;
    void adicionarAstronautasVoo(Voo& voo);
    void matarAstronauta(const std::string& cpf);

private:
    std::vector<Astronauta> astronautas_;
    std::vector<Astronauta> astronautasMortos;
};

#endif // CADASTRO_ASTRONAUTA_H

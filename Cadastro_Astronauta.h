#ifndef CADASTRO_ASTRONAUTA_H
#define CADASTRO_ASTRONAUTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Voo.h"
#include "Astronauta.h"

class CadastroAstronauta{
private:
    std::vector<Astronauta> astronautas_; //novo vetor de objetos Astronauta criado exclusivamente para o cadastro de astronautas 
public:
    void cadastrarAstronauta();
    void adicionarAstronautasVoo(Voo& voo);
};


    
#endif
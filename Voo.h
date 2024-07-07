#ifndef VOO_H
#define VOO_H

#include <string>
#include <vector>
#include "Cadastro_Astronauta.h" 

class CadastroAstronauta;  // Declaração antecipada para evitar dependência circular

class Voo {
public:
    Voo(int codigo);
    void addAstronauta(const std::string& cpf);
    void removeAstronauta(const std::string& cpf);
    std::string toString() const;
    int getCodigo() const;  
    void lancar();
    bool estaDisponivel() const;
    void explodir(CadastroAstronauta& cadastroAstronauta); 

private:
    int codigo;
    bool disponivel;
    std::vector<std::string> astronautas;
};

#endif // VOO_H

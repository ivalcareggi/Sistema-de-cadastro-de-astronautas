#ifndef VOO_H
#define VOO_H

#include <string>
#include <vector>

class Voo {
public:
    Voo(int codigo);
    void addAstronauta(const std::string& cpf);
    void removeAstronauta(const std::string& cpf);
    std::string toString() const;
    int getCodigo() const;  // Added getter method

private:
    int codigo;
    std::vector<std::string> astronautas;
};

#endif // VOO_H

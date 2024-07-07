#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <string>

class Astronauta {
public:
    Astronauta(const std::string& cpf, const std::string& nome, int idade);
    std::string getCPF() const;
    std::string getNome() const;  // Adicionando o método getNome
    int getIdade() const;         // Adicionando o método getIdade
    std::string toString() const;

private:
    std::string cpf_;
    std::string nome_;
    int idade_;
};

#endif // ASTRONAUTA_H
#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <string>

class Astronauta {
public:
    Astronauta(const std::string& cpf, const std::string& nome, int idade);
    ~Astronauta();

    std::string getCPF() const;
    std::string toString() const;

private:
    std::string cpf;
    std::string nome;
    int idade;
    bool vivo;
    bool disponivel;
};

#endif // ASTRONAUTA_H

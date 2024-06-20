#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <string>

class Astronauta{
private:
    std::string cpf;
    std::string nome;
    int idade;
    bool vivo;
    bool disponivel; 
public:
   Astronauta(const std::string& cpf, const std::string& nome, int idade);
    ~Astronauta();//Destrutor
    
   
    bool isAlive() const{
        return vivo;
    };
    
    void setAlive(bool estado){
        vivo = estado;
    }
    
    bool isAvailable()const{
        return disponivel;

    }

    std::string getCPF()const{
        return cpf;
    }
   
    std::string toString()const{
        return "CPF:" + cpf + "Nome:" + nome + "Idade: " + std::to_string(idade) + "Vivo:" + (vivo? "SIM" : "NÃO")+(disponivel ? "SIM": "NÃO");
    }

};  
    

#endif

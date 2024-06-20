#ifndef VOO_H
#define VOO_H

#include <iostream>
#include <string>
#include <vector>


class Voo {
private: 
    int codigo_;
    std::vector<std::string> cpf_; // recebe um vetor de strings com _ para diferenciar 
    bool planejamento_;
    bool emCurso_;
    bool finalizado_;
public:
    Voo(int codigo);

    Voo(int codigo, std::vector<std::string> cpf);

    bool isEmpty(); // retorna se o vetor esta vazio
    void addAstronauta(std::string cpf); 
    void removeAstronauta(std::string cpf);
    void lancarVoo(); // troca a variavel planejamento para false
    std::vector<std::string> explodeVoo(); //retorna um vetor de strings dos astronautas
    void finishVoo();
    std::string toString(); // descriçao dos atributos.




 

    

};

  
#endif
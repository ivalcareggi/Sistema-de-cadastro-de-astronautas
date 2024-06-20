#include <iostream>
#include "Astronauta.h"
#include "Cadastro_Astronauta.h"

void CadastroAstronauta::cadastrarAstronauta() {
 
    std::string cpf, nome;
    int idade;

    std::cout << "Insira o CPF: ";
    std::getline(std::cin, cpf);

    std::cout << "Insira o nome: ";
    std::getline(std::cin, nome);

    std::cout << "Insira a idade: ";
    std::cin >> idade;
    std::cin.ignore();

    Astronauta astronauta(cpf,nome,idade);
    astronautas_.push_back(astronauta);  
    }

void CadastroAstronauta::adicionarAstronautasVoo(Voo& voo) {
    for (const auto& astronauta : astronautas_) {
        voo.addAstronauta(astronauta.getCPF());
    }
}
   
    


   
    

   

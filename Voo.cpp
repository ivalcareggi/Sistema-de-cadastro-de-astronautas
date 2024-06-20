#include "Voo.h"
#include <algorithm>

Voo::Voo(int codigo) : codigo_(codigo), planejamento_(true), emCurso_(false), finalizado_(false) {}

Voo::Voo(int codigo, std::vector<std::string> cpf) : codigo_(codigo), cpf_(cpf), planejamento_(true), emCurso_(false), finalizado_(false) {}



bool Voo::isEmpty(){
    return cpf_.empty();
   }

void Voo::addAstronauta(std::string cpf) {
    if (planejamento_){
        cpf_.push_back(cpf);

    }
    else {
        std::cout <<"O voô não está em planejamento"  << std::endl; 
    }

    

}


void Voo::removeAstronauta(std::string cpf) {
    if (planejamento_) {
        auto it = std::find(cpf_.begin(), cpf_.end(), cpf);
        if (it != cpf_.end()) {
            cpf_.erase(it);
        } else {
            std::cerr << "CPF não encontrado" << std::endl;
        }
    } else {
        std::cerr << "O voo não está em planejamento!" << std::endl;
    }
}
         
 


void Voo :: lancarVoo(){  //trocar a variavel bool de planejamento
    if(!cpf_.empty()){    //inverte o valor do booleano cpf.empty que retorna true se o vetor estiver vazio
        planejamento_ = false; // caso seja verdadeiro(o vetor não estiver vazio), o planejamento assumirá valor false
        emCurso_ = true;
    }
    else {
        std::cerr <<"Não foi possível lançar o vôo" << std::endl;
    }
}
std::vector<std::string>Voo::explodeVoo(){
    if(!planejamento_){
        planejamento_ = false;
        finalizado_ = true;
        std::vector<std::string> mortos = cpf_;
        cpf_.clear();
        return mortos;
        }
    else{
            std::cout<<"O voo ainda está em planejamento e não pode explodir"<<std::endl;
            return{};
        }


}

void Voo :: finishVoo(){
    if(emCurso_){
        emCurso_ = false;
        finalizado_= true;

    }
    else{
        std::cerr<<"O vôo não pode ser finalizado porque ele não está em curso." << std::endl;
    }

}
std::string Voo:: toString(){
    std::string result = "Código de Voo:" + std::to_string(codigo_) + "\nAstronautas:\n";

    for (const auto& cpf : cpf_) {
        result += cpf + "\n";
    }
    result += "Status: " + std::string(planejamento_ ? "Planejamento" : (finalizado_ ? "Finalizado" : "Em curso")) + "\n";
    return result;
}

 
  

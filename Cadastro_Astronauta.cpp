#include "Cadastro_Astronauta.h"
#include <algorithm>

void CadastroAstronauta::adicionarAstronauta(const Astronauta& astronauta) {
    astronautas_.push_back(astronauta);
}

void CadastroAstronauta::removerAstronauta(const std::string& cpf) {
    auto it = std::remove_if(astronautas_.begin(), astronautas_.end(), [&cpf](const Astronauta& astronauta) {
        return astronauta.getCPF() == cpf;
    });
    if (it != astronautas_.end()) {
        astronautas_.erase(it, astronautas_.end());
        std::cout << "Astronauta removido com sucesso!\n";
    } else {
        std::cout << "Astronauta não encontrado.\n";
    }
}

Astronauta* CadastroAstronauta::buscarAstronauta(const std::string& cpf) {
    for (auto& astronauta : astronautas_) {
        if (astronauta.getCPF() == cpf) {
            return &astronauta;
        }
    }
    return nullptr;
}

void CadastroAstronauta::listarAstronautas() const {
    for (const auto& astronauta : astronautas_) {
        std::cout << astronauta.toString() << std::endl;
    }
}

void CadastroAstronauta::listarAstronautasMortos() const {
    for (const auto& astronauta : astronautasMortos) {
        std::cout << "CPF: " << astronauta.getCPF() << ", Nome: " << astronauta.getNome() << ", Idade: " << astronauta.getIdade() << '\n';
    }
}

void CadastroAstronauta::adicionarAstronautasVoo(Voo& voo) {
    for (const auto& astronauta : astronautas_) {
        voo.addAstronauta(astronauta.getCPF());
    }
}

void CadastroAstronauta::matarAstronauta(const std::string& cpf) {
    auto it = std::find_if(astronautas_.begin(), astronautas_.end(),
        [&](const Astronauta& a) { return a.getCPF() == cpf; });
    if (it != astronautas_.end()) {
        astronautasMortos.push_back(*it);
        astronautas_.erase(it);
    }
}


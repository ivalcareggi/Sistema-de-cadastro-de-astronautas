#include "exibirMenu.h"
#include <iostream>
#include <string>
#include <limits>

void exibirMenu() {
    std::cout << "===== Menu =====\n";
    std::cout << "1. Cadastrar Astronauta\n";
    std::cout << "2. Cadastrar Voo\n";
    std::cout << "3. Adicionar Astronauta ao Voo\n";
    std::cout << "4. Remover Astronauta do Voo\n";
    std::cout << "5. Listar Voos\n";
    std::cout << "6. Listar Astronautas\n";
    std::cout << "7. Listar Astronautas Mortos\n";
    std::cout << "8. Explodir Voo\n";
    std::cout << "9. Lançar Voo\n";
    std::cout << "0. Sair\n";
    std::cout << "Escolha uma opção: ";
}

int lerOpcao() {
    int opcao;
    while (!(std::cin >> opcao)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada inválida. Por favor, insira um número: ";
    }
    std::cin.ignore();
    return opcao;
}

std::string lerString(const std::string& mensagem) {
    std::string entrada;
    std::cout << mensagem;
    std::getline(std::cin, entrada);
    return entrada;
}

int lerInt(const std::string& mensagem) {
    int numero;
    std::cout << mensagem;
    while (!(std::cin >> numero)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada inválida. Por favor, insira um número: ";
    }
    std::cin.ignore();
    return numero;
}

void limparTela() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

void pausarTela() {
    std::cout << "Pressione Enter para continuar...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void cadastrarAstronauta(CadastroAstronauta& cadastroAstronauta) {
    while (true) {
        limparTela();
        std::string cpf = lerString("Insira o CPF: ");
        std::string nome = lerString("Insira o nome: ");
        int idade = lerInt("Insira a idade: ");

        Astronauta astronauta(cpf, nome, idade);
        cadastroAstronauta.adicionarAstronauta(astronauta);
        std::cout << "Astronauta cadastrado com sucesso!\n";

        std::string opcao = lerString("Deseja cadastrar outro astronauta? (s/n): ");
        if (opcao != "s" && opcao != "S") {
            break;
        }
    }
    pausarTela();
}

void cadastrarVoo(GerenciamentoVoo& gerenciamentoVoo) {
    while (true) {
        limparTela();
        int codigo = lerInt("Insira o código do voo: ");
        gerenciamentoVoo.cadastrarVoo(codigo);
        std::cout << "Voo cadastrado com sucesso!\n";

        std::string opcao = lerString("Deseja cadastrar outro voo? (s/n): ");
        if (opcao != "s" && opcao != "S") {
            break;
        }
    }
    pausarTela();
}

void adicionarAstronautaAoVoo(GerenciamentoVoo& gerenciamentoVoo) {
    while (true) {
        limparTela();
        int codigo = lerInt("Insira o código do voo: ");
        std::string cpf = lerString("Insira o CPF do astronauta: ");

        gerenciamentoVoo.adicionarAstronautaAoVoo(codigo, cpf);

        std::string opcao = lerString("Deseja adicionar outro astronauta a um voo? (s/n): ");
        if (opcao != "s" && opcao != "S") {
            break;
        }
    }
    pausarTela();
}

void removerAstronautaDoVoo(GerenciamentoVoo& gerenciamentoVoo) {
    while (true) {
        limparTela();
        int codigo = lerInt("Insira o código do voo: ");
        std::string cpf = lerString("Insira o CPF do astronauta: ");

        gerenciamentoVoo.removerAstronautaDoVoo(codigo, cpf);

        std::string opcao = lerString("Deseja remover outro astronauta de um voo? (s/n): ");
        if (opcao != "s" && opcao != "S") {
            break;
        }
    }
    pausarTela();
}

void listarVoos(GerenciamentoVoo& gerenciamentoVoo) {
    limparTela();
    gerenciamentoVoo.listarVoos();
    pausarTela();
}

void listarAstronautas(CadastroAstronauta& cadastroAstronauta) {
    limparTela();
    cadastroAstronauta.listarAstronautas();
    pausarTela();
}

void listarAstronautasMortos(const CadastroAstronauta& cadastroAstronauta) {
    limparTela();
    cadastroAstronauta.listarAstronautasMortos();
    pausarTela();
}

void explodirVoo(GerenciamentoVoo& gerenciamentoVoo, CadastroAstronauta& cadastroAstronauta) {
    limparTela();
    int codigo = lerInt("Digite o código do voo: ");
    gerenciamentoVoo.explodirVoo(codigo, cadastroAstronauta);
    pausarTela();
}

void lancarVoo(GerenciamentoVoo& gerenciamentoVoo) {
    limparTela();
    int codigo = lerInt("Digite o código do voo: ");
    for (auto& voo : gerenciamentoVoo.getVoos()) {
        if (voo.getCodigo() == codigo) {
            voo.lancar();
            std::cout << "Voo com código " << codigo << " lançado com sucesso.\n";
            pausarTela();
            return;
        }
    }
    std::cout << "Voo com código " << codigo << " não encontrado.\n";
    pausarTela();   
}

#include <iostream>
#include <string>
#include "GerenciamentoVoo.h"
#include "Cadastro_Astronauta.h"

void exibirMenu() {
    std::cout << "===== Menu =====\n";
    std::cout << "1. Cadastrar Astronauta\n";
    std::cout << "2. Cadastrar Voo\n";
    std::cout << "3. Adicionar Astronauta ao Voo\n";
    std::cout << "4. Remover Astronauta do Voo\n";
    std::cout << "5. Listar Voos\n";
    std::cout << "6. Listar Astronautas\n";
    std::cout << "0. Sair\n";
    std::cout << "Escolha uma opção: ";
}

int main() {
    GerenciamentoVoo gerenciamentoVoo;
    CadastroAstronauta cadastroAstronauta;
    int opcao;

    do {
        exibirMenu();
        std::cin >> opcao;
        std::cin.ignore(); // Limpa o buffer do input

        switch (opcao) {
            case 1: {
                std::string cpf, nome;
                int idade;

                std::cout << "Insira o CPF: ";
                std::getline(std::cin, cpf);
                std::cout << "Insira o nome: ";
                std::getline(std::cin, nome);
                std::cout << "Insira a idade: ";
                std::cin >> idade;
                std::cin.ignore();

                Astronauta astronauta(cpf, nome, idade);
                cadastroAstronauta.adicionarAstronauta(astronauta); // Corrected function call
                std::cout << "Astronauta cadastrado com sucesso!\n";
                break;
            }
            case 2: {
                int codigo;
                std::cout << "Insira o código do voo: ";
                std::cin >> codigo;
                std::cin.ignore();

                gerenciamentoVoo.cadastrarVoo(codigo);
                std::cout << "Voo cadastrado com sucesso!\n";
                break;
            }
            case 3: {
                int codigo;
                std::string cpf;

                std::cout << "Insira o código do voo: ";
                std::cin >> codigo;
                std::cin.ignore();
                std::cout << "Insira o CPF do astronauta: ";
                std::getline(std::cin, cpf);

                gerenciamentoVoo.adicionarAstronautaAoVoo(codigo, cpf);
                break;
            }
            case 4: {
                int codigo;
                std::string cpf;

                std::cout << "Insira o código do voo: ";
                std::cin >> codigo;
                std::cin.ignore();
                std::cout << "Insira o CPF do astronauta: ";
                std::getline(std::cin, cpf);

                gerenciamentoVoo.removerAstronautaDoVoo(codigo, cpf);
                break;
            }
            case 5: {
                gerenciamentoVoo.listarVoos();
                break;
            }
            case 6: {
                cadastroAstronauta.listarAstronautas();
                break;
            }
            case 0: {
                std::cout << "Saindo...\n";
                break;
            }
            default: {
                std::cout << "Opção inválida! Tente novamente.\n";
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}

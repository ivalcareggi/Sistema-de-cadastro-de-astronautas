#include "GerenciamentoVoo.h"
#include "Cadastro_Astronauta.h"
#include "exibirMenu.h"  // Inclua o cabeçalho do menu aqui
#include <iostream>

int main() {
    GerenciamentoVoo gerenciamentoVoo;
    CadastroAstronauta cadastroAstronauta;
    int opcao;

    do {
        limparTela();
        exibirMenu();  // Chamada para exibir o menu
        opcao = lerOpcao();

        switch (opcao) {
            case 1:
                cadastrarAstronauta(cadastroAstronauta);
                break;
            case 2:
                cadastrarVoo(gerenciamentoVoo);
                break;
            case 3:
                adicionarAstronautaAoVoo(gerenciamentoVoo);
                break;
            case 4:
                removerAstronautaDoVoo(gerenciamentoVoo);
                break;
            case 5:
                listarVoos(gerenciamentoVoo);
                break;
            case 6:
                listarAstronautas(cadastroAstronauta);
                break;
            case 7:
                listarAstronautasMortos(cadastroAstronauta);
                break;
            case 8:
                explodirVoo(gerenciamentoVoo, cadastroAstronauta);
                break;
            case 9:
                lancarVoo(gerenciamentoVoo);
                break;
            case 0:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opção inválida! Tente novamente.\n";
                pausarTela();
                break;
        }
    } while (opcao != 0);

    return 0;
}

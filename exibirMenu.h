#ifndef EXIBIR_MENU_H
#define EXIBIR_MENU_H

#include "GerenciamentoVoo.h"
#include "Cadastro_Astronauta.h"

void exibirMenu();
int lerOpcao();
void limparTela();
void pausarTela();
void cadastrarAstronauta(CadastroAstronauta& cadastroAstronauta);
void cadastrarVoo(GerenciamentoVoo& gerenciamentoVoo);
void adicionarAstronautaAoVoo(GerenciamentoVoo& gerenciamentoVoo);
void removerAstronautaDoVoo(GerenciamentoVoo& gerenciamentoVoo);
void listarVoos(GerenciamentoVoo& gerenciamentoVoo);
void listarAstronautas(CadastroAstronauta& cadastroAstronauta);
void listarAstronautasMortos(const CadastroAstronauta& cadastroAstronauta);
void explodirVoo(GerenciamentoVoo& gerenciamentoVoo, CadastroAstronauta& cadastroAstronauta);
void lancarVoo(GerenciamentoVoo& gerenciamentoVoo);

#endif // EXIBIR_MENU_H

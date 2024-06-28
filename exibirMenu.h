#ifndef EXIBIR_MENU_H
#define EXIBIR_MENU_H

#include "GerenciamentoVoo.h"
#include "Cadastro_Astronauta.h"

void exibirMenu();
int lerOpcao();
std::string lerString(const std::string& mensagem);
int lerInt(const std::string& mensagem);
void limparTela();
void pausarTela();
void cadastrarAstronauta(CadastroAstronauta& cadastroAstronauta);
void cadastrarVoo(GerenciamentoVoo& gerenciamentoVoo);
void adicionarAstronautaAoVoo(GerenciamentoVoo& gerenciamentoVoo);
void removerAstronautaDoVoo(GerenciamentoVoo& gerenciamentoVoo);
void listarVoos(GerenciamentoVoo& gerenciamentoVoo);
void listarAstronautas(CadastroAstronauta& cadastroAstronauta);

#endif
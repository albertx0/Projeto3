#ifndef PROJETO3_BIBLIOTECA_H
#define PROJETO3_BIBLIOTECA_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int prioridade;
    char descricao[300];
    char categoria[100];
} Tarefa;

typedef struct {
    Tarefa tarefas[100];
    int tam;
} Tarefas_armazem;

void lobby();
Tarefas_armazem *leitura(char *nome);
void escreve(Tarefas_armazem *v, char *nome);
Tarefas_armazem *cadastrarTarefa(Tarefas_armazem *lista);
Tarefas_armazem *deletarTarefa(Tarefas_armazem *lista);
void listar_tarefas(Tarefas_armazem *lista);

#endif //PROJETO3_BIBLIOTECA_H

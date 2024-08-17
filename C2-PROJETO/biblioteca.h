#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define TAM_TITULO 100
#define TAM_DESCRICAO 255

#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Tarefa {
    int id;
    char titulo[TAM_TITULO];
    char descricao[TAM_DESCRICAO];
    int prioridade;
    Data data_limite;
    int concluida;
} Tarefa;

void cadastrar_tarefa(Tarefa **lista_tarefas, int *n_tarefas, int *proximo_id);
void listar_tarefas(Tarefa *lista_tarefas, int n_tarefas);
void editar_tarefa(Tarefa *lista_tarefas, int n_tarefas);
void remover_tarefa(Tarefa **lista_tarefas, int *n_tarefas);
void marcar_tarefa_como_concluida(Tarefa *lista_tarefas, int n_tarefas);
void gerar_relatorios(Tarefa *lista_tarefas, int n_tarefas);
void liberar_lista_tarefas(Tarefa *lista_tarefas, int n_tarefas);

Data ler_data();
void imprimir_data(Data data);

#endif
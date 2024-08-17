#include "biblioteca.h"

void cadastrar_tarefa(Tarefa **lista_tarefas, int *n_tarefas, int *proximo_id) {
    *lista_tarefas = realloc(*lista_tarefas, sizeof(Tarefa) * (*n_tarefas + 1));
    Tarefa *nova_tarefa = &(*lista_tarefas)[*n_tarefas];

    nova_tarefa->id = (*proximo_id)++;
    
    printf("Digite o título da tarefa: ");
    scanf("%s", nova_tarefa->titulo);

    printf("Digite a descrição da tarefa: ");
    scanf("%s", nova_tarefa->descricao);

    printf("Digite a prioridade da tarefa (1-5): ");
    scanf("%d", &nova_tarefa->prioridade);

    nova_tarefa->data_limite = ler_data();

    nova_tarefa->concluida = 0;

    (*n_tarefas)++;
}

void liberar_lista_tarefas(Tarefa *lista_tarefas, int n_tarefas) {
    free(lista_tarefas);
}
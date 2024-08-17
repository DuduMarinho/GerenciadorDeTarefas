#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.c"

int main() {
    Tarefa *lista_tarefas = NULL;
    int n_tarefas = 0;
    int proximo_id = 1;

    int opcao;
    do {
        system("clear");
        printf("------- Sistema de Gerenciamento de Tarefas -------\n\n");
        printf("1 - Cadastrar Tarefa\n");
        printf("2 - Listar Tarefas\n");
        printf("3 - Editar Tarefa\n");
        printf("4 - Remover Tarefa\n");
        printf("5 - Marcar Tarefa como Concluída\n");
        printf("6 - Gerar Relatórios\n");
        printf("0 - Sair\n\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_tarefa(&lista_tarefas, &n_tarefas, &proximo_id);
                break;
            case 2:
                listar_tarefas(lista_tarefas, n_tarefas);
                break;
            case 3:
                editar_tarefa(lista_tarefas, n_tarefas);
                break;
            case 4:
                remover_tarefa(&lista_tarefas, &n_tarefas);
                break;
            case 5:
                marcar_tarefa_como_concluida(lista_tarefas, n_tarefas);
                break;
            case 6:
                gerar_relatorios(lista_tarefas, n_tarefas);
                break;
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        getchar(); 
    } while (opcao != 0);

    liberar_lista_tarefas(lista_tarefas, n_tarefas);
    
    return 0;
}
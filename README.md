# Sistema de Gerenciamento de Tarefas

## Visão Geral
Este sistema de gerenciamento de tarefas é um programa em C que permite aos usuários gerenciar uma lista de tarefas. As funcionalidades incluem cadastrar, listar, editar, remover, marcar como concluída, e gerar relatórios de tarefas. As tarefas são armazenadas em memória e podem ser salvas e carregadas de um arquivo.

## Estrutura de Dados

### `struct Data`
Representa uma data no formato dia, mês e ano.

- **Atributos**:
  - `int dia`: Dia do mês (1 a 31).
  - `int mes`: Mês do ano (1 a 12).
  - `int ano`: Ano.

### `struct Tarefa`
Representa uma tarefa com título, descrição, prioridade, data limite, estado de conclusão, e um identificador único.

- **Atributos**:
  - `int id`: Identificador único da tarefa.
  - `char titulo[TAM_TITULO]`: Título da tarefa.
  - `char descricao[TAM_DESCRICAO]`: Descrição da tarefa.
  - `int prioridade`: Prioridade da tarefa (1 a 5).
  - `Data data_limite`: Data limite para a conclusão da tarefa.
  - `int concluida`: Indica se a tarefa foi concluída (0 para não, 1 para sim).

## Funções

### `int main()`
A função principal que controla o fluxo do programa e interage com o usuário.

- **Funcionalidades**:
  - Apresenta o menu de opções ao usuário.
  - Executa as operações de gerenciamento de tarefas com base na escolha do usuário.
  - Libera a memória alocada para a lista de tarefas ao final.

### `void cadastrar_tarefa(Tarefa **lista_tarefas, int *n_tarefas, int *proximo_id)`
Cadastra uma nova tarefa na lista.

- **Parâmetros**:
  - `Tarefa **lista_tarefas`: Ponteiro para o ponteiro da lista de tarefas.
  - `int *n_tarefas`: Ponteiro para o número total de tarefas.
  - `int *proximo_id`: Ponteiro para o próximo ID disponível para a tarefa.

- **Funcionamento**:
  - A tarefa é alocada dinamicamente e inicializada com as informações fornecidas pelo usuário.
  - O ID da tarefa é incrementado automaticamente.

### `void listar_tarefas(Tarefa *lista_tarefas, int n_tarefas)`
Lista todas as tarefas armazenadas.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.
  - `int n_tarefas`: Número total de tarefas.

- **Funcionamento**:
  - Imprime os detalhes de todas as tarefas, incluindo título, descrição, prioridade, data limite e status de conclusão.

### `void editar_tarefa(Tarefa *lista_tarefas, int n_tarefas)`
Edita uma tarefa existente na lista.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.
  - `int n_tarefas`: Número total de tarefas.

- **Funcionamento**:
  - O usuário seleciona uma tarefa para editar com base no ID.
  - Os dados da tarefa são atualizados conforme a entrada do usuário.

### `void remover_tarefa(Tarefa **lista_tarefas, int *n_tarefas)`
Remove uma tarefa da lista.

- **Parâmetros**:
  - `Tarefa **lista_tarefas`: Ponteiro para o ponteiro da lista de tarefas.
  - `int *n_tarefas`: Ponteiro para o número total de tarefas.

- **Funcionamento**:
  - O usuário seleciona uma tarefa para remover com base no ID.
  - A lista de tarefas é realocada para remover a tarefa selecionada.

### `void marcar_tarefa_como_concluida(Tarefa *lista_tarefas, int n_tarefas)`
Marca uma tarefa como concluída.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.
  - `int n_tarefas`: Número total de tarefas.

- **Funcionamento**:
  - O usuário seleciona uma tarefa para marcar como concluída.
  - O status da tarefa é alterado para concluída.

### `void gerar_relatorios(Tarefa *lista_tarefas, int n_tarefas)`
Gera relatórios das tarefas.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.
  - `int n_tarefas`: Número total de tarefas.

- **Funcionamento**:
  - Relatórios são gerados com base nas tarefas armazenadas, como listar tarefas concluídas ou tarefas por prioridade.

### `void liberar_lista_tarefas(Tarefa *lista_tarefas)`
Libera a memória alocada para a lista de tarefas.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.

- **Funcionamento**:
  - Libera a memória alocada dinamicamente para a lista de tarefas.

### `Data ler_data()`
Lê uma data do usuário.

- **Retorno**:
  - Retorna uma estrutura `Data` com o dia, mês e ano fornecidos pelo usuário.

### `void imprimir_data(Data data)`
Imprime uma data formatada.

- **Parâmetros**:
  - `Data data`: Estrutura de dados que contém dia, mês e ano.

- **Funcionamento**:
  - A data é impressa no formato `dd/mm/aaaa`.

### `int carregar_tarefas(Tarefa **lista_tarefas, char *nome_arquivo)`
Carrega tarefas de um arquivo.

- **Parâmetros**:
  - `Tarefa **lista_tarefas`: Ponteiro para o ponteiro da lista de tarefas.
  - `char *nome_arquivo`: Nome do arquivo de onde as tarefas serão carregadas.

- **Retorno**:
  - Retorna o número total de tarefas carregadas.

- **Funcionamento**:
  - O arquivo de tarefas é lido e as tarefas são carregadas na memória.

### `void salvar_tarefas(Tarefa *lista_tarefas, int n_tarefas, char *nome_arquivo)`
Salva as tarefas em um arquivo.

- **Parâmetros**:
  - `Tarefa *lista_tarefas`: Ponteiro para a lista de tarefas.
  - `int n_tarefas`: Número total de tarefas.
  - `char *nome_arquivo`: Nome do arquivo onde as tarefas serão salvas.

- **Funcionamento**:
  - As tarefas são salvas no arquivo especificado.

## Arquivos

### `biblioteca.h`
Arquivo de cabeçalho que define as estruturas de dados e declara as funções utilizadas no programa.

### `biblioteca.c`
Implementa as funções declaradas em `biblioteca.h`.

### `main.c`
Contém a função principal e o fluxo de execução do programa.

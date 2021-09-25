#include "structs.h"

List* criarList(){
    List* list = (List*) malloc(sizeof(List));

    list-> quantidade = 5;
    list-> primeiro = NULL;

    return list;
}

int expoente;

void expoentes(int contaExpoente){
    expoente = contaExpoente - 1;
}

void imprimirLista(List* list){
    Noh* ponteiro = list-> primeiro;

    if (ponteiro == NULL)
        printf("Lista vazia!");

    while(ponteiro != NULL){
        if(expoente == 0){
          printf("%d*10^%d ", ponteiro->info.id, expoente);
          expoente = expoente - 1;
          ponteiro = ponteiro->prox;
        }else{
          printf("%d*10^%d + ", ponteiro->info.id, expoente);
          expoente = expoente - 1;
          ponteiro = ponteiro->prox;
        }

    }
    printf("\n");
}

void addInfo(List* list, Info info){
    Noh* noh = (Noh*) malloc(sizeof(Noh));

    noh->info = info;
    noh->prox = list->primeiro;
    list->primeiro = noh;
    list->quantidade++;
}

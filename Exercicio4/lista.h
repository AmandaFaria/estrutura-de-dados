#include "structs.h"
#include "maior.h"

List* criarList(){
    List* list = (List*) malloc(sizeof(List));

    list-> quantidade = 5;
    list-> primeiro = NULL;

    return list;
}

void imprimirLista(List* list){
    Noh* ponteiro = list-> primeiro;

    if (ponteiro == NULL)
        printf("Lista vazia!");

    while(ponteiro != NULL){
        printf("%d ", ponteiro->info.id);
        ponteiro = ponteiro->prox;
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

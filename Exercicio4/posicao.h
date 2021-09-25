#include "structs.h"

Noh* posicao(List* list, int index){
    if (index >= 0 && index < list->quantidade){
        Noh* noh = list->primeiro;

        int i;
        for (i = 0; i < index; i++)
            noh = noh->prox;

        return noh;
    }
    return NULL;
}

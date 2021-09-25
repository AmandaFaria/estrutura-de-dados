#include "posicao.h"

Noh* max(List* list, int index){
    Noh* ponteiro = posicao(list, index);

    if (ponteiro != NULL) {
        Noh* maxNoh = ponteiro;

        while (ponteiro != NULL){
            if (ponteiro-> info.id > maxNoh->info.id)
                maxNoh = ponteiro;

                ponteiro = ponteiro->prox;

        }
        return maxNoh;
    }
       return NULL;
}

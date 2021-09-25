void destruirListaRecursiva(pNoh atual){
    if (atual == NULL)
        return;
    destruirListaRecursiva(atual->prox);
    free(atual);
}

/* -------------------------------------*/
void destruirLista(pDLista pd){

   destruirListaRecursiva(pd->primeiro);
   pd->primeiro   = NULL;
   pd->ultimo     = NULL;
   pd->quantidade = 0;
}

/* -------------------------------------*/
void destruirListaNaoRecursivo(pDLista pd){

    pNoh atual;
    atual = pd->primeiro;

    while(atual != NULL){
       pNoh aux = atual->prox;
       free(atual);
       atual = aux;
    }

   pd->primeiro   = NULL;
   pd->ultimo     = NULL;
   pd->quantidade = 0;
}









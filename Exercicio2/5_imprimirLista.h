void imprimirLista(pDLista pd, FuncaoImpressao pfi){

    pNoh aux;
    aux = pd->primeiro;

    while(aux != NULL){
       pfi(aux->info);

       aux = aux->prox;
    }
}

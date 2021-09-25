#ifndef SPLIT_SPLIT_H
#define SPLIT_SPLIT_H

pDLista split(pDLista *pd, FuncaoPredicado funcaoPred)
{

    /*cria uma nova lista que recebera as novas informacoes*/
    pDLista pLista = criarLista();
    pDLista aux = criarLista();

    pNoh atual = (*pd)->primeiro;
    while (atual != NULL)
    {
        //numeros divisiveis por 3
        (funcaoPred(atual->info) == 1) ?
            incluirInfo(pLista, atual->info) :
        //numeros não divisiveis por 3
            incluirInfo(aux, atual->info);

        (*pd) = aux;
        atual = atual->prox;
    }
    return pLista;
}
#endif

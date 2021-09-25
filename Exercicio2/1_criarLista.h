#ifndef CRIAR_LISTA_H
#define CRIAR_LISTA_H

pDLista criarLista(){
    pDLista pd = malloc(sizeof(DLista));
    pd->quantidade = 0;
    pd->primeiro   = NULL;
    pd->ultimo     = NULL;
    return pd;
}

#endif

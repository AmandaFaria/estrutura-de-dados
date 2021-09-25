#include <stdio.h>
#include "Utils.h"
#include "Lista.h"
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    pDLista pListaInt = criarLista();

    incluirInfo(pListaInt, alocaInt(5));
    incluirInfo(pListaInt, alocaInt(1));
    incluirInfo(pListaInt, alocaInt(6));
    incluirInfo(pListaInt, alocaInt(7));
    incluirInfo(pListaInt, alocaInt(3));

    printf("\nLista original:\n");
    imprimirLista(pListaInt,imprimeInt);

    printf("\n\nLista original após a divisão:\n");
    imprimirLista(pListaInt,imprimeInt);

    printf("\n\nLista que satisfaz o predicado:\n");
    imprimirLista(split(&pListaInt,divTres),imprimeInt);
}

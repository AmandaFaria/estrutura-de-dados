#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "lista.h"



int main(){
	setlocale(LC_ALL, "");
	int x, i=0;

    List* lista = criarList();

    Info info;

	for(i=0; i<7; i++){
		printf("Digite o %d� n�mero da lista: ", i+1);
		scanf("%d", &x);

		info.id = x;
    	addInfo(lista, info);
	}
	printf("\nOs n�meros das lista s�o: ");
	imprimirLista(lista);

	printf("\nO maior n�mero da lista � o: ");
    printf("%d", max(lista,0)->info.id);
    getch();
}

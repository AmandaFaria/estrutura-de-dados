#include <stdio.h>
#include <locale.h>

#include "lista.h"

void decompor(int n){
	int multiplicador = contador(n);
	List* lista = criarList();
    Info info;

	switch(multiplicador){
		case 1: info.id = n; addInfo(lista, info);			break;
		case 2:	info.id = n%10; addInfo(lista, info);
				info.id = (n%100)/10; addInfo(lista, info);	break;
		case 3:
				info.id = n%10; addInfo(lista, info);
				info.id = (n%100)/10; addInfo(lista, info);
				info.id = n/100; addInfo(lista, info);		break;
		case 4:
				info.id = n%10; addInfo(lista, info);
				info.id = (n%100)/10; addInfo(lista, info);
				info.id = (n/100)%10; addInfo(lista, info);
				info.id = n/1000; addInfo(lista, info);		break;
		default: return 0;
	}
	imprimirLista(lista);
}

int contador(int n){
	int contaDigitos=0;
	do{
		contaDigitos = contaDigitos + 1;
		n = n / 10;
    }while (n != 0);
    expoentes(contaDigitos);
    return contaDigitos;
}

int main(void){
	setlocale(LC_ALL, "");
	int valor;
	printf("Digite um número inteiro positivo:\n");
    scanf("%d", &valor);

    printf("\nA decomposição desse número inteiro é: \n");
	decompor(valor);
	getch();
}

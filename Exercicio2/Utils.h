#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------- */
/* tipo de dado INT */
/* ---------------------------------------- */
int comparaInt(void *info1, void *info2){
    int *p1 = (int *) info1;
    int *p2 = (int *) info2;
    return *p2 - *p1;
}
/* ---------------------------------------- */
void imprimeInt(void *info){
   int *pi = (int *) info;
   printf("%d ", *pi);
}
/* ---------------------------------------- */
void* alocaInfoInt(void* info){
   int *pi = (int *) malloc(sizeof(int));
   *pi = *((int*)info);
   return pi;
}
/* ---------------------------------------- */
int* alocaInt(int n){
   int *pi = (int *) malloc(sizeof(int));
   *pi = n;
   return pi;
}

int divTres(void* n) {
   int *novo = (int *) malloc(sizeof(int));
   novo = (int *)n;
   return (*novo %  3 == 0) ? 1 : 0;
}

#endif /* UTILS_H */

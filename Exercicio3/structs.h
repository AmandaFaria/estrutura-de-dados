#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct info{
    int id;
}Info;

typedef struct noh{
    Info info;
    struct noh* prox;
}Noh;

typedef struct list{
    int quantidade;
    Noh* primeiro;
}List;


#endif

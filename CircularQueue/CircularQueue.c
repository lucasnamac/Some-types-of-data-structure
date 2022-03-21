#include<stdio.h>
#include<stdlib.h>
#include"CircularQueue.h"

struct no{
    int info;
    struct no *prox;
};

Fila cria_fila() {
    return NULL;
}

int fila_vazia(Fila f) {
    if (f == NULL)
        return 1;
    else
        return 0;
}

int insere_fim(Fila *f, int elem) {
    Fila N = (Fila) malloc(sizeof(struct no));
    if (N == NULL) { return 0; }
    N->info = elem;

    if (fila_vazia(*f) == 1) {
        N->prox = N;
        *f = N;
    }

    else {
        N->prox = (*f)->prox;
        (*f)->prox = N;
        *f = N;
    }
   return 1;
}

int remove_ini(Fila *f, int *elem) {

    if (fila_vazia(*f) == 1)
        return 0;
    Fila aux = (*f)->prox;
    *elem = aux->info;
    if (*f == (*f)->prox)
        *f = NULL;
    else
        (*f)->prox = aux->prox;
    free(aux);
    return 1;
}

int imprimir(Fila f){

    Fila Aux=f->prox;

   do{
        printf("%d  ",Aux->info);
        Aux=Aux->prox;

    }while(Aux!=f->prox);

    return 1;

}

void menu(){
    printf("1- Inserir\n");
    printf("2- Remover\n");
    printf("3- Imprimir\n");

}

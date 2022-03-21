#include<stdio.h>
#include<stdlib.h>
#include"DynamicHead.h"

struct no{
    int info;
    struct no * prox;
};

Lista cria_lista() {
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    if (cab != NULL) {
        cab->prox = NULL;
        cab->info = 0;
    }
    return cab;
}

int lista_vazia(Lista lst) {
    if (lst->prox== NULL) return 1;

    else return 0;
}

int insere_ord (Lista *lst,int elem) {
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) {
        return 0;
    }
    N->info = elem;
    Lista aux = *lst;

    while (aux->prox != NULL && aux->prox->info < elem) aux = aux->prox;
    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;
    return 1;
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1) return 0;
    Lista aux = *lst;

    while (aux->prox != NULL && aux->prox->info < elem) aux = aux->prox;

    if (aux->prox == NULL || aux->prox->info > elem)return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
    return 1;
}

int imprime(Lista lst){
    if(lista_vazia(lst)==1) return 0;

    Lista Aux=lst->prox;

    while(Aux!=NULL){
        printf("%d ", Aux->info);
        Aux=Aux->prox;
    }
    printf("\n");
    return 1;
}

void menu(){
    printf("1- Inserir\n");
    printf("2- Remover\n");
    printf("3- Imprimir\n");
    printf("4- Tamannho\n");
    printf("5- Remover Impares\n");
    printf("6- Menor\n");
    printf("7- Iguais\n");
    printf("8- Intercalar\n");

}

int tamanho(Lista lst){
    if(lista_vazia(lst)==1) return 0;
    else
        return lst->info;
}

int removerImpares(Lista *lst){
    if(lista_vazia(*lst)==1) return 0;

    Lista Aux=(*lst);
    Lista Aux2;


    while(Aux->prox!=NULL){
        if(Aux->prox->info%2!=0){
            Aux2=Aux->prox;
            Aux->prox=Aux2->prox;
            free(Aux2);
            Aux=Aux->prox;
        }
        //Aux=Aux->prox;
    }
    return 1;
}

int menor(Lista lst){
   if(lista_vazia(lst)==1) return 0;

   return lst->prox->info;
}

int iguais(Lista lst1, Lista lst2){

    Lista Aux1, Aux2;
    Aux1=lst1->prox;
    Aux2=lst2->prox;
    int cont=0;

    if(lista_vazia(lst1)==1 && lista_vazia(lst2)==1){
        printf("S�o iguais\n");
        return 1;
    }
    if(lst1->info != lst2->info){
        printf("N�o s�o iguais\n");
        return 0;
    }

    while(Aux1!=NULL && Aux2!=NULL){
        if(Aux1->info==Aux2->info){
            cont++;
        }
        Aux1=Aux1->prox;
        Aux2=Aux2->prox;
    }
    if(cont==tamanho(lst1)){
        printf("S�o iguais\n");
    }
    return 1;

}

Lista intercala(Lista lst1, Lista lst2){
    Lista lst3=cria_lista();
    Lista Aux1=lst1->prox;
    Lista Aux2=lst2->prox;
    Lista Aux3;
    Lista N;
    while(Aux1!=NULL || Aux2!=NULL){
        N= (Lista) malloc (sizeof(struct no));
        if(N!=NULL) N->prox=NULL;
        else return NULL;

        if((Aux2==NULL) || ((Aux1!=NULL) && (Aux1->info <= Aux2->info))){
            N->info=Aux1->info;
            Aux1=Aux1->prox;

        }else{
            N->info=Aux2->info;
            Aux2=Aux2->prox;
        }

        if(lista_vazia(lst3)==1){
            lst3->prox=N;
            lst3->info++;
            Aux3=N;
        }else{
            N->prox=Aux3->prox;
            Aux3->prox=N;
            lst3->info++;
            Aux3=Aux3->prox;

        }
    }
    return lst3;
}
#include<stdio.h>
#include<stdlib.h>
#include"CircularQueue.h"

int main(){
    int elem, opcao, remover;
    Fila f;
    f=cria_fila();

    menu();
    scanf("%d", &opcao);

    while(opcao!=4){
        switch(opcao){
            case(1):
                printf("Digite o numero que deseja inserir\n");
                scanf("%d", &elem);
                insere_fim(&f, elem);
            break;

            case(2):

                if(remove_ini(&f, &remover)==1){
                    printf("Numero removido: %d", remover);
                }
                else{
                    printf("Nao e possivel remover. Lista Vazia !!!!!!\n");
                }
                break;

            case(3):
                imprimir(f);

            break;

        };
        printf("\n");
        menu();
        scanf("%d", &opcao);
    }

    return 1;
}
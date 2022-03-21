#include<stdio.h>
#include<stdlib.h>
#include"StaticQueue.h"

int main(){

    Fila F;
    F=cria_fila();
    int elem, remover, opcao;

    menu();
    scanf("%d", &opcao);

    while(opcao!=7){
        switch(opcao){
            case(1):
                printf("Digite o numero que deseja inserir\n");
                scanf("%d", &elem);
                insere_fim(F, elem);
            break;

            case(2):
                remove_ini(F, &remover);
                printf("Numero removido: %d", remover);
            break;

            case(3):
                imprimir(F);

            break;
        };
        printf("\n");
        menu();
        scanf("%d", &opcao);
    }



    return 1;
}
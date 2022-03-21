#include<stdio.h>
#include<stdlib.h>
#include"DynamicHead.h"
#include<locale.h>


int main(){
    int opcao, elem, remover,qtd=0;
    Lista l1, l2, l3;
    l1=cria_lista();
    l2=cria_lista();
    l3=cria_lista();
    setlocale(LC_ALL, "Portuguese");
    menu();
    scanf("%d", &opcao);

    while(opcao!=11){
        switch(opcao){
            case(1):
                printf("Digite o n�mero que deseja inserir\n");
                scanf("%d", &elem);
                insere_ord(&l1, elem);
                break;
            case(2):
                printf("Digite o n�mero que quer remover\n");
                scanf("%d", &remover);
                remove_ord(&l1, remover);
                break;
            case(3):
                imprime(l1);
                break;

            case(4):
                printf("O tamanaho da lista �: %d\n",tamanho(l1));
                break;

            case(5):
                removerImpares(&l1);
                break;

            case(6):
                printf("O menor elemento �: %d\n", menor(l1));
                break;

            case(7):
                printf("Verifica se as listas s�o iguais\n");
                printf("Digite a quantidade de elmentos da lista 2\n");
                scanf("%d", &qtd);
                while(qtd--){
                    scanf("%d", &elem);
                    insere_ord(&l2, elem);
                }
                imprime(l2);
                iguais(l1, l2);
                break;

            case(8):
                printf("Intercala duas listas\n");
                printf("Digite a quantidade de elementos da lista 2\n");
                scanf("%d", &qtd);
                printf("Digite os elementos da lista 2\n");
                while(qtd--){
                    scanf("%d", &elem);
                    insere_ord(&l2, elem);
                }
                l3=intercala(l1, l2);
                imprime(l3);
        };
        menu();
        scanf("%d", &opcao);
    }

    return 0;
}

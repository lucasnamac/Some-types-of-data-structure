typedef struct no * Lista;

Lista cria_lista();

int lista_vazia(Lista lst);

int insere_ord (Lista *lst,int elem);

int remove_ord (Lista *lst, int elem);

int imprime(Lista lst);

void menu();

int tamanho(Lista lst);

int removerImpares(Lista *lst);

int menor(Lista lst);

int iguais(Lista lst1, Lista lst2);

Lista intercala(Lista lst1, Lista lst2);


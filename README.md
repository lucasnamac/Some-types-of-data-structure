# Some types of data structure

## These are some types data structure. Below is presented each one

### Circular Queue

A circular queue is the extended version of a regular queue where the last element is connected to the list first element. In image below we can see a representation it.

![image-20220321152246295](./resources/circularQueue.png)


#### How to work ?

Circular Queue works by the process of circular increment i.e. when we try to increment the pointer and we reach the end of the queue, we start from the beginning of the queue.

Here is code line that verify if current position is end them pointer go to first position of queue. The code line is in <i>imprimir function</i>.



```c
do{
        printf("%d  ",Aux->info);
        Aux=Aux->prox;
}while(Aux!=f->prox);
```

##### Operations

* cria_fila: This function create a pointer to structure queue.
* fila_vazia: This function verify if queue is empty.
* insere_fim: This function create a node where will be stored new element e after node will be linked in the last postion of queue.
* remove_ini: This function remove first element of queue. To do this is need manager pointer.
* imprimir: This function show all elements of queue.
* menu: This function was create to keep a interactive with user.


### Dynamic Queue

A dynamic queue is a data structure that consists of a set of elements that are placed sequentially one after another. In this case, the addition of elements is carried out on the one hand, and the removal (stretching) on the other hand. In image below we can see a representation it.

![DynamicQueue](./resources/Dynamicqueue.jpg)


#### How to work ?

The queue works according to the FIFO principle – First In – First Out i.e. the first element is processed first and the newest element is processed last.
The manager of delete and insertion is did by two function called <i>insere_fim</i> and <i>remove_ini</i>.


##### Operations

* cria_fila: Create a pointer to the queue structure.
* fila_vazia: This function verify if  queue is empty.
* insere_fila: This function allocate a node and stores the element inside that node. Done that is  made the manipulation of pointers and insertion of node in the last position of queue.
* remove_ini: This function remove first element of queue. This is done by means of manipulation of pointers and through deallocation of removed node.
* imprimir: This function show all elements of the queue.
* menu: This function was create to keep a interactive with user.



### Sorted Dynamic List

 It's an variation of linked list, because the element is inserted in an orderly manner, then the use of sorting algorithms after insetion it's not necessary. 

 ![SortedDynamic](./resources/sorteddynamiclist.png)


#### How to work ?

It's work by means nodes. Every that an element is inserted is created a node that store the element and after the node will be linked in list according to sort criterion. To remove a node is necessary manipulation of pointers and deallocation of removed node. This code implements some functions of manipulation of list. I will talk about it in operations topic.

##### Operations

* cria_lista: This function create a pointer to list structure.
* lista_vazia: This function verify if the list is empty.
* insere_ord: This function insert element in position following the sort crterion.
* remove_ord: This function receive a element that will be search in list. If there is this element in list then it removed and done the manipulation of pointers. If there isn't this element in list then is return 0.
* imprimir: This function show all elements of list.
* removerImpares: This function removed all odd elements of list.
* menor: This function return less element of list.
* tamanho: This function return length of list.
* Iguais: This function compare if two lists are equals. if they are the same then return 1 else return 0.
* Intercala: This function receive two lists and does merge between two lists keeping the ordination.



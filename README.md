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

* 

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    
    int identidade;
    int consumo;
    int ano;
    char cor[30];
    char marca[30];
    
    struct Item* proximo;
    
}Item;

typedef struct{
    
    int quantidade;
    struct Item * inicio;
    
}Lista;

Lista* criaLista();

int insereItem(Lista * L);


int removeItem(Lista * L,int id);

Item* Busca(Lista* L,int id);

int apagaLista(Lista * L);


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


// int removeItem(Lista * L,int id);
/*
int buscaItem(Cafeteira * lista,int id);

int apagaLista(Cafeteira * lista);

void imprimeLista(Cafeteira * lista);


*/

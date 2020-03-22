#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

struct elemento{
    
    Elemento *proximo;
    int elemento;
};

typedef struct lista{
    Elemento *cabeca;
    int tamanho;
}Lista;

Lista *lista_cria(){
    Lista *q = (Lista *)malloc(sizeof(Lista));
    q->tamanho = 0;
    q->cabeca = NULL;
    return q;
}
void lista_libera(Lista *p){
    Elemento *q;
    while(q != NULL){
        Elemento *aux = q->proximo;
        free(q);
        q = aux;
    }
    free(p);
}
char *imprime(Lista *p){
    Elemento *q = p->cabeca;
    char *string = (char*)malloc(100*sizeof(char));
    int i;
    for( i = 0; i < p->tamanho; i++){
        char aux[6];
        sprintf(aux,"%d ",q->elemento);
        q = q->proximo;
        strcat(string,aux);
    }
    return string;
}
void lista_insere_posicao(Lista *p, int elemento, int posicao){
    if(posicao == 0 ){
        Elemento *q = (Elemento*)malloc(sizeof(Elemento));
        q->elemento = elemento;
        q->proximo = p->cabeca;
        p->cabeca = q;
        p->tamanho++;
    }else{
        posicao--;
        Elemento *aux = (Elemento*)malloc(sizeof(Elemento));
        aux->elemento = elemento;
        Elemento *q = p->cabeca;
        while(posicao--)
            q = q->proximo;
        aux->proximo = q->proximo;
        q->proximo = aux;
        p->tamanho++;
    }
}
int lista_obtem_elemento(Lista *p, int posicao){
    Elemento *q = p->cabeca;
    int i;
    for( i = 0; i < posicao; i++) q = q->proximo;
    return q->elemento;
}
int lista_obtem_tamanho(Lista *p){
    return p->tamanho;
}


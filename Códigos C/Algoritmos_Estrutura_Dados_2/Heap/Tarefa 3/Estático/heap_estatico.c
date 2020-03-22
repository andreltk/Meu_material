#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include "heap_estatico.h" //inclui os Protótipos

struct elemento{
    int valor;
    int priori;
};

struct fila_prioridade{
    int tamanho;
    struct elemento fila[MAX];
};

Fila_Priori* cria_Fila_Priori(){
    
    Fila_Priori *fila_p;
    
    fila_p = (Fila_Priori*) malloc(sizeof(struct fila_prioridade));
    fp->qtd = 0;


////////////////////////////////
/*
 * PARADO AQUI
 * 
 * Usando ProjFilaPrioridadeHeap como base
 * Trocar nomes pelos novos termos
 * Vai lá filhão
/////////////////////////////////    
    if(fila_p != NULL){
        printf("Erro de Alocação");
    }
    
    return fila_p;
}

void libera_FilaPr(FilaPrio* fp){
    free(fila_p);
}

int consulta_FilaPrio(FilaPrio* fp, char* nome){
    if(fp == NULL || fp->qtd == 0)
        return 0;
    strcpy(nome,fp->dados[0].nome);
    return 1;
}

void promoverElemento(FilaPrio* fp, int filho){
    int pai;
    struct elemento temp;
    pai = (filho - 1) / 2;
    while((filho > 0) && (fp->dados[pai].prio <= fp->dados[filho].prio)){
        temp = fp->dados[filho];
        fp->dados[filho] = fp->dados[pai];
        fp->dados[pai] = temp;
        
        filho = pai;
        pai = (pai - 1) / 2;
    }
}

int insere_FilaPrio(FilaPrio* fp, char *nome, int prioridade){
    if(fp == NULL)
        return 0;
    if(fp->qtd == MAX)//fila cheia
        return 0;
    /* insere na primeira posição livre */
    strcpy(fp->dados[fp->qtd].nome,nome);
    fp->dados[fp->qtd].prio = prioridade;
    /* desloca elemento para posição correta */
    promoverElemento(fp,fp->qtd);
    /* incrementa número de elementos no heap */
    fp->qtd++;
    return 1;
}

void rebaixarElemento(FilaPrio* fp, int pai){
    struct elemento temp;
    int filho = 2 * pai + 1;
    while(filho < fp->qtd){
        
        if(filho < fp->qtd-1) /* verifica se tem 2 filhos */
            if(fp->dados[filho].prio < fp->dados[filho+1].prio)
                filho++; /*filho aponta para filho menor */
                
                if(fp->dados[pai].prio >= fp->dados[filho].prio)
                    break; /* encontrou lugar */
                    
                    temp = fp->dados[pai];
                fp->dados[pai] = fp->dados[filho];
            fp->dados[filho] = temp;
        
        pai = filho;
        filho = 2 * pai + 1;
    }
}

int remove_FilaPrio(FilaPrio* fp){
    if(fp == NULL)
        return 0;
    if(fp->qtd == 0)
        return 0;
    
    fp->qtd--;
    fp->dados[0] = fp->dados[fp->qtd];
    rebaixarElemento(fp,0);
    return 1;
}

int tamanho_FilaPrio(FilaPrio* fp){
    if(fp == NULL)
        return -1;
    else
        return fp->qtd;
}

int estaCheia_FilaPrio(FilaPrio* fp){
    if(fp == NULL)
        return -1;
    return (fp->qtd == MAX);
}

int estaVazia_FilaPrio(FilaPrio* fp){
    if(fp == NULL)
        return -1;
    return (fp->qtd == 0);
}

void imprime_FilaPrio(FilaPrio* fp){
    if(fp == NULL)
        return;
    int i;
    for(i=0; i < fp->qtd ; i++){
        printf("%d) Prio: %d \tNome: %s\n",i,fp->dados[i].prio,fp->dados[i].nome);
    }
}

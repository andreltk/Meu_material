#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define INSERE "inserir\0"
#define REMOVE "remover\0"
#define CONSULTA "consultar\0"
#define FINALIZA "finalizar\0"

struct no {
    char * elemento;
    struct no * proximo;
};
typedef struct no No;

typedef struct fila Fila;

struct fila {
    int tamanho;
    int maxTamanho;
    No * inicio;
    No * fim;
};

Fila * fila_cria (int maxTamanho);
Fila * fila_copia (Fila * p);
void fila_libera (Fila * p);
int fila_insere (Fila * p, char * elemento);
char * fila_remove (Fila * p);
char * fila_obtem_primeiro  (Fila * p);
int fila_obtem_tamanho  (Fila * p);
int fila_se_vazia (Fila * p);
int fila_se_cheia (Fila * p);
char * fila_imprime  (Fila * p);
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////

int main(){
    
    Fila * inss;
    char opcao[MAX], parametro[MAX], auxiliar[MAX];
    int contador, chave;
    
    inss = fila_cria(MAX);
    
    do{
        
        scanf("\n %s",opcao);
        
        if(strcmp(opcao,INSERE) == 0){
            scanf("\n %s",parametro);
            fila_insere(inss, parametro);
            
            continue;
        }
        
        
        if(strcmp(opcao,REMOVE) == 0){
            
            scanf("\n %s",parametro);
            chave = 0;
            
            for(contador = fila_obtem_tamanho(inss); contador > 0; contador--){
                
                strcpy(auxiliar, fila_remove(inss));
                
                if(strcmp(auxiliar, parametro) == 0){
                    chave = 1;
                    continue;
                }
                fila_insere(inss, auxiliar);
            }
            
            if(chave == 1){
                fila_insere(inss, parametro);
            }
        }
        
        
        if(strcmp(opcao,CONSULTA) == 0){
            printf("%s\n",fila_imprime(inss));            
            continue;
            
        }
        
    }while(strcmp(opcao,FINALIZA) != 0);
    
    
    
    
}

///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
Fila * fila_cria (int maxTamanho) {
    Fila * q = (Fila *) malloc(sizeof(Fila));
    if (q!=NULL) {
        q->tamanho = 0;
        q->maxTamanho = maxTamanho;
        q->inicio = NULL;
        q->fim    = NULL;
    }
    return q;
}
Fila * fila_copia (Fila * p) {
    return NULL;
}
void fila_libera (Fila * p) {
    
    No * auxiliar, * auxiliar_2;
    
    auxiliar = p->inicio;
    
    while(auxiliar != NULL){
        
        auxiliar_2 = auxiliar->proximo; 
        
        free(auxiliar->elemento);
        free(auxiliar);
        
        auxiliar = auxiliar_2;
    }
    
    free(p);
    p = NULL;
    
    return;
    
}
int fila_insere (Fila * p, char * elemento) {
    
    No * novo;
    char * auxiliar;
    
    if(fila_se_cheia(p) == 1 || p == NULL){
        return -1;
    }
    
    if(fila_se_vazia(p) == 1){
        
        novo =(No *)malloc(sizeof(No));
        auxiliar = (char *)malloc(sizeof(char) * strlen(elemento));
        
        strcpy(auxiliar, elemento);
        
        novo->elemento = auxiliar;
        novo->proximo = NULL;
        
        p->inicio = novo;
        p->fim = novo;
        p->tamanho++;
        
        return 1; // insercao com sucesso	
    }
    else{
        
        novo =(No *)malloc(sizeof(No));
        auxiliar = (char *)malloc(sizeof(char) * strlen(elemento));
        
        strcpy(auxiliar, elemento);
        
        novo->elemento = auxiliar;
        novo->proximo = NULL;
        
        p->fim->proximo = novo;
        p->fim = novo;
        p->tamanho++;
        
        return 1;
    }    
}
char * fila_remove (Fila * p) {
    
    No * temporario;
    char * auxiliar;
    
    if(fila_se_vazia(p) == 1 || p == NULL){
        return NULL;
    }
    
    temporario = p->inicio;
    auxiliar = (char *)malloc(sizeof(char) * strlen(temporario->elemento));
    strcpy(auxiliar,temporario->elemento);
    
    p->inicio = temporario->proximo;
    p->tamanho--;
    
    free(temporario->elemento);
    free(temporario);
    
    return auxiliar;
    
}
char * fila_obtem_primeiro  (Fila * p){
    
    No * temporario;
    char * auxiliar;
    
    temporario = p->inicio;
    
    auxiliar = (char *)malloc(sizeof(char) * strlen(temporario->elemento));
    strcpy(auxiliar, temporario->elemento);
    
    return auxiliar;
}
int fila_obtem_tamanho  (Fila * p) {
    return p->tamanho;
}
int fila_se_vazia (Fila * p) {
    
    if(p == NULL){
        return -1;
    }
    if(p->tamanho == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int fila_se_cheia (Fila * p) {
    
    if(p == NULL){
        return -1;
    }
    
    if(p->tamanho == p->maxTamanho){
        return 1;
    }
    else{
        return 0;
    }
    
}
char * fila_imprime  (Fila * p) {
    char * retorno = (char *) malloc(sizeof(char)*10*p->maxTamanho);
    retorno [0] = '\0';
    int tam;
    for (tam = fila_obtem_tamanho(p); tam > 0; tam--) {
        char * aux = fila_remove(p);
        strcat(retorno, aux);
        strcat(retorno, " ");
        fila_insere(p, aux);
    }
    retorno = realloc(retorno, strlen(retorno)+1);
    return retorno;
}

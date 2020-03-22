#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 100
#define INSERE "inserir\0"
#define REMOVE "remover\0"
#define CONSULTA "consultar\0"
#define FINALIZA "finalizar\0"


typedef struct fila Fila;

struct fila {
    int tamanho, inicio, final;
    int maxTamanho;
    char ** elementos;
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
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

int main(){
    
    Fila * inss;
    char opcao[MAX], parametro[MAX], auxiliar[MAX];
    int contador;
    
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
            
            for(contador = fila_obtem_tamanho(inss); contador > 0; contador--){
                
                strcpy(auxiliar, fila_remove(inss));
                
                if(strcmp(auxiliar, parametro) == 0){
                    continue;
                }
                
                fila_insere(inss, auxiliar);
            }
        }
        
        if(strcmp(opcao,CONSULTA) == 0){
            printf("%s\n",fila_imprime(inss));            
            continue;
            
        }
    }while(strcmp(opcao,FINALIZA) != 0);
    
    fila_libera(inss);
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
Fila * fila_cria (int maxTamanho) {
    Fila * q = (Fila *) malloc(sizeof(Fila));
    if (q!=NULL) {
        q->tamanho = 0;
        q->inicio  = 0;
        q->final   = 0;
        q->maxTamanho = maxTamanho;
        q->elementos = (char **) malloc(sizeof(char *) * maxTamanho);
    }
    return q;
}
Fila * fila_copia (Fila * p) {
    return NULL;
}
void fila_libera (Fila * p) {
    
    int contador;
    
    for(contador = 0;contador < fila_obtem_tamanho(p); contador++){
        
        free(p->elementos[contador]);
        p->elementos[contador] = NULL;
        
    }
    
    free(p->elementos);
    p->elementos = NULL;
    free(p);
    p = NULL;
    
    return;
    
}
int fila_insere (Fila * p, char * elemento) {
    
    int final;
    char * auxiliar;
    
    final = p->final;
    
    if(p == NULL){
        return -1;
    }
    else{
        
        auxiliar = (char *)malloc(sizeof(char) * strlen(elemento) + 1);
        
        strcpy(auxiliar, elemento);
        
        p->elementos[final] = auxiliar;
        p->tamanho++;
        p->final = (final + 1 ) % p->maxTamanho;
        
        return 1;
    }
}
char * fila_remove (Fila * p) {
    
    int inicio;
    char * auxiliar;
    
    if(fila_se_vazia(p) == 1 || p == NULL){
        return NULL;
    }
    
    else{
        
        inicio = p->inicio;
        auxiliar = (char *)malloc(sizeof(char) * strlen(p->elementos[inicio]));
        
        strcpy(auxiliar, p->elementos[inicio]);
        
        free(p->elementos[inicio]);
        
        p->elementos[inicio] = NULL;
        p->tamanho--;
        p->inicio = (inicio + 1) % p->maxTamanho;
        
        return auxiliar;
    }
}
char * fila_obtem_primeiro  (Fila * p) {
    
    int inicio;
    char * auxiliar;
    
    inicio = p->inicio;
    
    if(fila_se_vazia(p) == 1 || p == NULL){
        return NULL;
    }
    else{
        
        auxiliar = (char *)malloc(sizeof(char) * strlen(p->elementos[inicio]) + 1);
        
        strcpy(auxiliar, p->elementos[inicio]);
        
        return auxiliar;
    }
}
int fila_obtem_tamanho  (Fila * p) {
    
    if(p == NULL){
        return -1;
    }
    
    else{
        return p->tamanho;
    }
    
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
    
    char * retorno = (char *) malloc(sizeof(char)*MAX*p->maxTamanho);
    retorno [0] = '\0';
    int i;
    for (i = p->tamanho; i>0; i--) {
        char * aux = fila_remove(p);
        fila_insere(p, aux);
        strcat(retorno, aux);
        strcat(retorno, " ");
    }
    retorno = realloc(retorno, strlen(retorno)+1);
    return retorno;
    
    
}

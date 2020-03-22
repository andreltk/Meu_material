#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define NUM_0_ASCII 48
#define NUM_9_ASCII 57
#define PA "feha_parenteses\0"
#define CC "fecha_colchetes\0"
#define CH "fecha_chaves\0"
#define SM "soma\0"
#define ST "subtracao\0"
#define MP "miltiplicacao\0"
#define DV "divisao\0"


struct pilha {
    int tamanho;
    int maxTamanho;
    char ** elementos;
};

typedef struct pilha Pilha;

Pilha * pilha_cria (int maxTamanho);
Pilha * pilha_copia (Pilha * p);
void pilha_libera (Pilha * p);
int pilha_insere (Pilha * p, char * elemento); // push
char * pilha_remove (Pilha * p); // pop
char * pilha_obtem_topo  (Pilha * p); // top
int pilha_obtem_tamanho  (Pilha * p);
int pilha_se_vazia (Pilha * p);
int pilha_se_cheia (Pilha * p);
char * pilha_imprime  (Pilha * p);

/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
int main(){
    
    Pilha * principal;
    char expressao[MAX], numeros [MAX], caractere;
    int contador, contador_numeros;
    
    principal = pilha_cria(MAX);
    
    scanf("%[^\n]s",expressao);
    
    contador_numeros = 0;
    
    //------------------------------------------------------------------//
    
    for(contador = 0; contador < strlen(expressao); contador++){
        
        caractere = expressao[contador];
        
        if(caractere >= NUM_0_ASCII && caractere <= NUM_9_ASCII){
            
            numeros[contador_numeros] = caractere;
            contador_numeros++;
        }
        
        else if(caractere == '('){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, PA);
        }
        else if(caractere == '['){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, CC);
        }
        else if(caractere == '{'){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, CH);
        }
        else if(caractere == '+'){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, SM);
        }
        else if(caractere == '-'){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, ST);
        }
        else if(caractere == '*'){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, MP);
        }
        else if(caractere == '/'){
            printf("\t-> %c\n",caractere);
            pilha_insere(principal, DV);
        }
    } 
    //------------------------------------------------------------------//
    
    
    
    return 0;
    
    
}

/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

Pilha * pilha_cria (int maxTamanho) {
    Pilha * q = (Pilha *) malloc(sizeof(Pilha));
    if (q!=NULL) {
        q->tamanho = 0;
        q->maxTamanho = maxTamanho;
        q->elementos = (char **) malloc(sizeof(char *) * maxTamanho);
    }
    return q;
}
Pilha * pilha_copia (Pilha * p) {
    return NULL;
}

void pilha_libera (Pilha * p) {
    
}
int pilha_insere (Pilha * p, char * elemento) {
    
    char * auxiliar;
    int tamanho;
    
    if(pilha_se_cheia(p) == 1 || p == NULL){
        return -1;
    }	
    
    
    tamanho = pilha_obtem_tamanho(p);
    auxiliar = (char *)malloc(sizeof(char) * strlen(elemento));
    
    strcpy(auxiliar, elemento);
    
    ;
    p->elementos[tamanho] = auxiliar;
    p->tamanho++;
    
    return 1;
}
char * pilha_remove (Pilha * p) {
    
    char * auxiliar;
    int tamanho;
    
    if(pilha_se_vazia(p) == 1 || p == NULL){
        return NULL;
    }	
    
    tamanho = pilha_obtem_tamanho(p);
    auxiliar = (char *)malloc(sizeof(char) * strlen(p->elementos[tamanho - 1]));
    
    strcpy(auxiliar, p->elementos[tamanho - 1]);
    
    p->tamanho--;
    free(p->elementos[tamanho]);
    p->elementos[tamanho] = NULL;
    
    return auxiliar;
}
char * pilha_obtem_topo  (Pilha * p) {
    
    char * auxiliar;
    int tamanho;
    
    if(pilha_se_vazia(p) == 1 || p == NULL){
        return NULL;
    }	
    
    
    tamanho = pilha_obtem_tamanho(p);
    auxiliar = (char *)malloc(sizeof(char) * strlen(p->elementos[tamanho - 1]));
    
    strcpy(auxiliar, p->elementos[tamanho - 1]);
    
    return auxiliar;
}
int pilha_obtem_tamanho  (Pilha * p) {
    
    if(p == NULL){
        return -1;
    }	
    
    return p->tamanho;
    
}
int pilha_se_vazia (Pilha * p) {
    
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
int pilha_se_cheia (Pilha * p) {
    
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
char * pilha_imprime  (Pilha * p) {
    char * aux = (char *) malloc(sizeof(char)*10*p->maxTamanho);
    aux [0] = '\0';
    int i;
    for (i=p->tamanho-1; i>=0; i--) {
        strcat(aux, p->elementos[i]);
        strcat(aux, " ");
    }
    aux = realloc(aux, strlen(aux)+1);
    return aux;
}


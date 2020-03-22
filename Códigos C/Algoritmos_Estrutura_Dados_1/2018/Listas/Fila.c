#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct{
    
    int x;
    
    struct item * prox; 
}item;

typedef struct{
    
    int quantidade;
    item * entrada;
    item * saida;
}fila;

int enfil(fila* f,int x);
int desenfil(fila* f);
void imprime(fila* f);

int main(){
    
    char opcao;
    int entrada,verifica;
    fila f;
    
    f.quantidade=0;
    f.entrada=NULL;
    f.saida=NULL;
    
    
    while(opcao != 'T'){
        
        scanf("\n %c",&opcao);
        
        
        if(opcao == 'E'){
            
            scanf("%d",&entrada);
            
            verifica=enfil(&f,entrada);
            if(verifica == -1)
                printf("Fila cheia\n");
            
            else
                imprime(&f);
            
        }
        else if(opcao == 'D'){
            
            verifica=desenfil(&f);
            
            
            if(verifica == -1){
                printf("Fila vazia\n");
                
                
            }
            else
                imprime(&f);
        }
        
    }
    
}


int enfil(fila* f,int x){
    
    item * auxiliar;
    item * auxiliar2;
    
    if (f->quantidade == MAX)
        return -1;
    
    else if(f->quantidade == 0){
        
        auxiliar=(item*)malloc(sizeof(item));
        
        if(auxiliar == NULL)
            return -1;
        
        auxiliar->x = x;
        auxiliar->prox=NULL;
        
        f->quantidade = 1;
        f->entrada = auxiliar;
        f->saida = auxiliar;
        
        return 1;
    }
    
    else{
        
        
        auxiliar2=(item*)malloc(sizeof(item));
        
        if(auxiliar2 == NULL)
            return -1;
        
        auxiliar2->x = x;
        auxiliar2->prox = NULL;
        
        auxiliar = f->entrada;
        
        auxiliar->prox = (struct item*)auxiliar2;
        
        f->entrada = auxiliar2;
        f->quantidade++;
        
        return 1;
    }
    
}


void imprime(fila* f){
    
    item * auxiliar;
    int epc;
    
    
    auxiliar=f->saida;
    epc = 0;
    
    if(auxiliar == NULL){
        printf("\n");
        return;
    }
    
    while(1){
        
        if(epc>0)
            printf(" ");
                
        printf("%d",auxiliar->x);
        
        auxiliar =(item*) auxiliar->prox;
        epc++;
        
        if(auxiliar == NULL)
            break;
        
    }
    
    
    
    printf("\n");
    
}

int desenfil(fila* f){
    
    item * auxiliar;
    
    if(f->quantidade == 0)
        return -1;
    
    auxiliar=f->saida;
    
    f->quantidade--;
    
    if(f->quantidade == 0){
        
        f->saida = NULL;
        f->entrada = NULL;
    }
    else
        f->saida =(item *) auxiliar->prox;
    
    if(auxiliar == NULL)
        return -1;
    
    free(auxiliar);
}

#include<stdio.h>
#include<stdlib.h>

typedef struct vetor Vetor;

struct vetor {
    int * numeros;
    int tamanho;
    int tamanho_maximo;
};

Vetor * vetor_cria (int tamanho_maximo);
void vetor_libera (Vetor * p);
void vetor_insere (Vetor * p, int numero);
void vetor_remove (Vetor * p, int numero);
int vetor_obtem_minimo (Vetor * p);
int vetor_obtem_tamanho (Vetor * p);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////










int main(){
    
    int maximo, elemento;
    char opcao;
    Vetor * inteiros;
    
    scanf("%d",&maximo);
    
    inteiros = vetor_cria(maximo);
    
    do{
        
        scanf("\n %c",&opcao);
        //////////////////////////////////////////INSERI////////////////////////////////
        if(opcao == 'I'){
            
            scanf("%d",&elemento);
            vetor_insere(inteiros,elemento);
            
        }
        //////////////////////////////////////////INSERI////////////////////////////////
        //////////////////////////////////////////REMOVE////////////////////////////////
        if(opcao == 'R'){
            
            scanf("%d",&elemento);
            vetor_remove(inteiros,elemento);
            
            
        }
        //////////////////////////////////////////REMOVE////////////////////////////////
        //////////////////////////////////////////MENOR/////////////////////////////////
        if(opcao == 'M'){
            
            printf("%d\n",vetor_obtem_minimo(inteiros));
            
        }
        //////////////////////////////////////////MENOR/////////////////////////////////
        
    }while(opcao != 'F');
    
    vetor_libera(inteiros);
    
}










////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

Vetor * vetor_cria (int tamanho_maximo){
    
    Vetor * auxiliar;
    int * vetor_numeros;
    
    auxiliar = (Vetor *) malloc(sizeof(Vetor));
    vetor_numeros = (int *) malloc(sizeof(int) * tamanho_maximo);
    
    auxiliar->numeros = vetor_numeros;
    auxiliar->tamanho = 0;
    auxiliar->tamanho_maximo = tamanho_maximo;
    
    return auxiliar;
}

void vetor_libera (Vetor * p){
    
    free(p->numeros);
    free(p);
    
    p = NULL;
    
    return;
}

void vetor_insere (Vetor * p, int numero){
    
    int contador;
    
    if(p->tamanho == p->tamanho_maximo){
        return;
    }
    
    for(contador = 0; contador < p->tamanho; contador++){
        if(p->numeros[contador] == numero){
            return;
        }
    }
    
    p->numeros[p->tamanho] = numero;
    p->tamanho++;
    return;
    
}
void vetor_remove (Vetor * p, int numero){
    
    int contador, presenca;
    
    presenca = 0;
    
    for(contador = 0; contador < p->tamanho; contador++){
        if(p->numeros[contador] == numero){
            presenca = 1;
            break;
        }
    }
    
    if(presenca == 1){
        
        for(contador = contador; contador < p->tamanho + 1; contador++){
            
            p->numeros[contador] = p->numeros[contador + 1];
            
        }
        
        p->tamanho--;
        return;
    }
    else{
        return;
    }
}
int vetor_obtem_minimo (Vetor * p){
    
    int contador, menor;
    
    if(p->tamanho == 0){
        return -1;
    }
    
    menor = p->numeros[0];
    
    for(contador = 0; contador < p->tamanho; contador++){
        
        if(p->numeros[contador] < menor){
            menor = p->numeros[contador];
        }
        
    }
    
    return menor;
}



int vetor_obtem_tamanho (Vetor * p){
    
    return p->tamanho;
    
}

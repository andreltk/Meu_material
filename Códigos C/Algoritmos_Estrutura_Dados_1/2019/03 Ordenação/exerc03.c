//Feito por André Luiz
//https://open.spotify.com/track/5XRHGXut00SrJUFmcn2lQF?si=WBHtHzWQROWWOnIyiw8YnQ
#include<stdio.h>
#include<stdlib.h>

void preenche(int * vetor, int tamanho, int atual);

void imprime(int * vetor, int tamanho, int atual);

void ordenacao_selecao(int * vetor, int tamanho, int ordenado);

int main(){
    
    int *vetor;
    int tamanho;
    
    scanf("%d",&tamanho);
    
    vetor = (int *)malloc(sizeof(int) * tamanho);
    
    preenche(vetor, tamanho, 0);
    
    ordenacao_selecao(vetor, tamanho, 0);
    
    imprime(vetor, tamanho, 0);
    
    free(vetor);
    
    
    
}

void preenche(int * vetor, int tamanho, int atual){
    
    if(atual == tamanho)
        return;
    
    scanf("%d",&vetor[atual]);
    
    return preenche(vetor, tamanho, atual + 1);
    
}


void imprime(int * vetor, int tamanho, int atual){
    
    
    if(atual == tamanho){
        printf("\n");
        return;
    }
    
    if(atual > 0)
        printf(" ");
    
    
    printf("%d",vetor[atual]);
    
    return imprime(vetor, tamanho, atual + 1);
    
}


void ordenacao_selecao(int * vetor, int tamanho,int ordenado){
    
    if(ordenado == tamanho)
        return;
    
    int atual, auxiliar, menor, posicao;
    
    menor = vetor[ordenado];
    atual = ordenado;
    
    for(posicao = ordenado; posicao < tamanho; posicao++){
        
        if(vetor[posicao] < menor){
            
            menor = vetor[posicao];
            atual = posicao;
            
        }
        
    }
    
    if(atual != ordenado){
        
        printf("%d <-> %d\n",vetor[ordenado],vetor[atual]);
        
        auxiliar = vetor[ordenado];
        vetor[ordenado] = vetor[atual];
        vetor[atual] = auxiliar;
        
        
    }
    return ordenacao_selecao(vetor, tamanho, ordenado + 1);
}

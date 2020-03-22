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
    
    ordenacao_selecao(vetor, tamanho, 1);
    
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

    int atual, auxiliar, fronteira, posicao;
    
    atual = vetor[ordenado];
    fronteira = vetor [ordenado - 1];
    
    if(atual < fronteira){
        
        posicao = ordenado;
        
        while(posicao > 0){
            
            if(vetor[posicao -1] > vetor[posicao]){
                
                auxiliar = vetor[posicao -1];
                vetor[posicao -1] = vetor[posicao];
                vetor[posicao] = auxiliar;

            }
            
            posicao--;
        }
    }
    
    return ordenacao_selecao(vetor, tamanho, ordenado + 1);
    
    
}

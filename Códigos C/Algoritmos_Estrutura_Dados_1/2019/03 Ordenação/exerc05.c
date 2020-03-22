//Feito por André Luiz
//https://open.spotify.com/track/5XRHGXut00SrJUFmcn2lQF?si=WBHtHzWQROWWOnIyiw8YnQ
#include<stdio.h>
#include<stdlib.h>

void preenche(int * vetor, int tamanho, int atual);

void imprime(int * vetor, int tamanho, int atual);

void ordenacao_bolha(int * vetor, int tamanho, int ordenado);

int main(){
    
    int *vetor;
    int tamanho;
    
    scanf("%d",&tamanho);
    
    vetor = (int *)malloc(sizeof(int) * tamanho);
    
    preenche(vetor, tamanho, 0);
    
    ordenacao_bolha(vetor, tamanho, tamanho - 1);
    
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


void ordenacao_bolha(int * vetor, int tamanho,int ordenado){
    
    
    if(ordenado < 0)
        return;
    
    int atual, proximo, auxiliar, posicao;
    
//     printf("Ordenado = %d ================================================================\n",ordenado);
            
    
    for(posicao = 0; posicao < ordenado; posicao++){
        
        atual = vetor[posicao];
        proximo = vetor[posicao + 1];
        
//         printf("\tPosição = %d\tAtual = %d\tProximo = %d\tOrdenado = %d\n",posicao,atual,proximo,ordenado);
        
        if(atual == proximo){
//             printf("Igual\n");
            continue;
        }
        
        if(atual > proximo){
            
            printf("%d <-> %d\n",atual,proximo);
            
            auxiliar = vetor[posicao];
            vetor[posicao] = proximo;
            vetor[posicao + 1] = auxiliar;
            
        }
    } 
    
//     printf("Ordenado = %d ================================================================\n",ordenado);
    return ordenacao_bolha(vetor, tamanho, ordenado - 1);
}

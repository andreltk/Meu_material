//Feito por André Luiz
//https://open.spotify.com/track/5XRHGXut00SrJUFmcn2lQF?si=WBHtHzWQROWWOnIyiw8YnQ
#include<stdio.h>
#include<stdlib.h>

void preenche(float * vetor, int tamanho, int atual);

void imprime(float * vetor, int tamanho, int atual);

void ordenacao_selecao(float * vetor, int tamanho, int ordenado);

int main(){
        
    float *vetor;
    int tamanho;
    
    scanf("%d",&tamanho);
    
    vetor = (float *)malloc(sizeof(float) * tamanho);
    
    preenche(vetor, tamanho, 0);
    
    ordenacao_selecao(vetor, tamanho, 1);
    
    imprime(vetor, tamanho, 0);
    
    free(vetor);
    
    
    
}

void preenche(float * vetor, int tamanho, int atual){
    
    if(atual == tamanho)
        return;
    
    scanf("%f",&vetor[atual]);
    
    return preenche(vetor, tamanho, atual + 1);
    
}


void imprime(float * vetor, int tamanho, int atual){
    
    
    if(atual == tamanho){
        return;
    }
        
    printf("%.2f\n",vetor[atual]);
    
    return imprime(vetor, tamanho, atual + 1);
    
}


void ordenacao_selecao(float * vetor, int tamanho,int ordenado){
    
    if(ordenado == tamanho)
        return;

    int atual, fronteira, posicao;
    float auxiliar;
    
    atual = vetor[ordenado];
    fronteira = vetor [ordenado - 1];
    
    if(atual < fronteira){
        
        
        posicao = ordenado;
        
        while(posicao > 0){
            
            atual = vetor[posicao - 1];
            fronteira = vetor [posicao];
            
            if(atual > fronteira){
                
                auxiliar = vetor[posicao -1];
                vetor[posicao -1] = vetor[posicao];
                vetor[posicao] = auxiliar;

            }
        
            posicao--;
        }
    }
    
    return ordenacao_selecao(vetor, tamanho, ordenado + 1);
    
    
}

//Feito por André Luiz Teixeira Kohlrausch


/*
 * Escreva um programa em C para
 * encontrar o maior elemento de um vetor. 
 */
#include<stdio.h>
#include<stdlib.h>

int busca_maior (int * vetor,int posicao, int maior,int tamanho);

int main(){
    
    int * vetor;
    int tamanho,contador;
    
    scanf("%d",&tamanho);
    
    vetor = (int *)malloc(sizeof(int) * tamanho);
    
    for(contador = 0;contador < tamanho; contador ++){
        
        scanf("%d",&vetor[contador]);
    }
    
    printf("%d\n",busca_maior(vetor,0,0,tamanho));
    
    free(vetor);
}


int busca_maior (int * vetor,int posicao, int maior,int tamanho){
    
    if(posicao == tamanho)
        return maior;
    
    if(vetor[posicao] > maior)
        
        return busca_maior(vetor,posicao + 1,vetor[posicao],tamanho);
    
    else
        
        return busca_maior(vetor,posicao + 1,maior,tamanho);
    
}

// Feito por André Luiz

#include<stdio.h>
#include<stdlib.h>

void preenche(int *vetor, int tamanho);

void imprime(int *vetor, int tamanho);

void troca(int *vetor, int indice_1, int indice_2);

void ordenacao_rapida(int *vetor, int inicio, int final);

int particionamento(int * vetor,int inicio, int final);

int soma(int *vetor, int inicio, int final);

int main(){
    
    int * vetor;
    int tamanho, inicio, final, resultado;
    
    scanf("%d",&tamanho);
    
    vetor = (int*)malloc(sizeof(int) * tamanho);
    
    preenche(vetor, tamanho);
    
    ordenacao_rapida(vetor, 0, tamanho - 1);
    
    scanf("%d",&inicio);
    scanf("%d",&final);
    
    resultado = soma(vetor, inicio - 1, final);
    
    printf("%d\n",resultado);
    
    free(vetor);
    
}

void preenche(int *vetor, int tamanho){
    
    int contador;
    
    for(contador = 0; contador < tamanho; contador++)
        scanf("%d",&vetor[contador]);
    
}

void imprime(int *vetor, int tamanho){
    
    int contador;
    
    for(contador = 0; contador < tamanho; contador++){
        
        if(contador > 0)
            printf(" ");
        
        printf("%d",vetor[contador]);
    }
    
    printf("\n");
    
}

void troca(int *vetor, int indice_1, int indice_2){
    
    int auxiliar;
    
    //     printf("Trocando V [%d] = %d <--> V [%d] = %d\n",indice_1,vetor[indice_1],indice_2,vetor[indice_2]);
    
    auxiliar = vetor[indice_1];
    
    vetor[indice_1] = vetor[indice_2];
    
    vetor[indice_2] = auxiliar;
    
}

void ordenacao_rapida(int *vetor, int inicio, int final){
    
    //     printf("Iniciando Quick\tInicio = %d / Final = %d\n",inicio,final);
    
    int pivo;
    
    if(inicio >= final)
        return;
    
    pivo = particionamento(vetor, inicio, final);
    
    
    ordenacao_rapida(vetor, inicio, pivo - 1);
    ordenacao_rapida(vetor, pivo + 1, final);
    
}

int particionamento(int * vetor,int inicio, int final){
    
    //     
    
    int pivo, indice_pivo, indice;
    
    pivo = vetor[final];
    
    indice_pivo = inicio - 1;
    
    //     printf("\n\n=========================================\n");
    
    for(indice = inicio; indice < final; indice++ ){
        
        
        //         printf("\n\tVetor [%d] = %d / Pivô = %d\n",indice,vetor[indice],pivo);
        
        if(vetor[indice] <= pivo){
            
            indice_pivo++;
            
            //             printf("\nEntrou no IF, Índice Pivô = %d\n", indice_pivo);
            
            
            troca(vetor, indice_pivo, indice);
        }
        
        
        //         printf("\n-----------------------------------------\n");
        
    }
    
    troca(vetor , indice_pivo + 1, final);
    
    return indice_pivo + 1;
    
    //     printf("\n\n=========================================\n");
    
    
}


int soma(int *vetor, int inicio, int final){
    
    int contador, resultado;
    
    
    
    
    resultado = 0;
    
    for(contador = inicio; contador < final; contador++){
 
        printf("\tVetor[%d] = %d\n",contador,vetor[contador]);
        
        resultado += vetor[contador];
    }
    return resultado;
    
}

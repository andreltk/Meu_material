#include<stdio.h>
#include<stdlib.h>

int * aloca_vetor(int tamanho);

void libera_vetor(int * vetor);

void preenche_vetor(int * vetor, int tamanho);

void imprime_vetor(int * vetor, int tamanho);

void imprime_especial(int * vetor, int tamanho,int pivo, int inicio, int final);

void troca(int * vetor,int indice_1, int indice_2);

void ordenacao_rapida(int * vetor,int inicio, int final, int tamanho);

int particionamento(int * vetor,int inicio, int final);


int main(){
    
    int * vetor;
    int tamanho;
    
    scanf("%d",&tamanho);
    
    vetor = aloca_vetor(tamanho);
    preenche_vetor(vetor, tamanho);
    
    ordenacao_rapida(vetor, 0, tamanho - 1, tamanho);
    
    imprime_vetor(vetor, tamanho);
    
    libera_vetor(vetor);
}


int * aloca_vetor(int tamanho){
    
    int * auxiliar;
    
    auxiliar = (int *)malloc(sizeof(int) * tamanho);
    
    if(auxiliar != NULL){
        
        return auxiliar;
        
    }
    else{
        
        printf("Erro de alocação\n");
        return NULL;
    }
}
void libera_vetor(int * vetor){
    
    int * auxiliar;
    
    auxiliar = vetor;
    free(auxiliar);    
    auxiliar = vetor = NULL;
    
}

void preenche_vetor(int * vetor, int tamanho){
    
    int contador;
    
    for(contador = 0; contador < tamanho;contador ++){
        
        scanf("%d",&vetor[contador]);
        
    }
    
}

void imprime_vetor(int * vetor, int tamanho){
    
    int contador;
    
    for(contador = 0; contador < tamanho; contador++){
        
        if(contador > 0){
            printf(" ");
        }
        
        printf("%d",vetor[contador]);
    }
    
    printf("\n");
}

void imprime_especial(int * vetor, int tamanho,int pivo, int inicio, int final){
    
    int contador;
    
    printf("v(%d)=%d * ",pivo,vetor[pivo]);
    
    for(contador = 0; contador < tamanho; contador++){
        
           
        if(contador > 0){
            printf(" ");
        }
        
        if(contador == inicio){
            printf("[");
        }
     
        printf("%d",vetor[contador]);
        
        if(contador + 1 == final){
            printf("]");
        }
        
        
    }
    printf("\n");
}

void troca(int * vetor,int indice_1, int indice_2){
    
    int auxiliar;
    
    auxiliar = vetor[indice_1];
    vetor[indice_1] = vetor[indice_2];
    vetor[indice_2] = auxiliar;
    
    return;
}

void ordenacao_rapida(int * vetor,int inicio, int final, int tamanho){
    
    int auxiliar;
    
    printf("Iniciando ordenação rápida\n");
    printf("Início = %d\tFinal = %d\n",inicio, final);
    
    if(inicio < final){
        
        auxiliar = particionamento(vetor, inicio, final);
        
        imprime_especial(vetor, tamanho, auxiliar, inicio, final);
        
        ordenacao_rapida(vetor, inicio, auxiliar - 1, tamanho);
        
        
        
        ordenacao_rapida(vetor, auxiliar + 1, final, tamanho);
        
    }
}

int particionamento(int * vetor,int inicio, int final){
    
    int contador, indice_menor, pivo;
    
    indice_menor = inicio - 1;
    pivo = final;
    
    
    
    
    for(contador = inicio; contador < final; contador++){
        
        if(vetor[contador] < vetor[pivo]){
            
            indice_menor++;
            
            troca(vetor, contador, indice_menor);
            
        }
    }
    
    troca(vetor, indice_menor + 1, pivo);
    
    return indice_menor + 1;
    
}

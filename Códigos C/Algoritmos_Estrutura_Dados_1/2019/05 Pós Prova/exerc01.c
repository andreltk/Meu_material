#include<stdio.h>
#include<stdlib.h>

int partition(int *vetor, int inicio, int final){
    
//     printf("Iniciando partição...\nInício -> %d\tFinal -> %d\n",inicio,final);
    
    int pivo, contador, indice_ordenado, auxiliar;
    
    
    pivo = vetor[final];
    indice_ordenado = inicio - 1;
    
    
    for(contador = inicio; contador <= final; contador++
    ){
        if(vetor[contador] < pivo){
            
            indice_ordenado++;
            
            auxiliar = vetor[contador];
            vetor[contador] = vetor[indice_ordenado];
            vetor[indice_ordenado] = auxiliar;
        }
    }
    
    auxiliar = vetor[final];
    vetor[final] = vetor[indice_ordenado + 1];
    vetor[indice_ordenado + 1] = auxiliar;
    
    return indice_ordenado + 1;
    
}

void quicksort(int * v, int p, int r) {
//      printf("Iniciando quicksort...\nInício -> %d\tFinal -> %d\n",p,r);
    
    int q;
    if (p < r) {
        q = partition (v, p, r);
        quicksort (v, p, q-1);
        quicksort (v, q+1, r);
    }
}

int main(){
    
    int * vetor;
    int n, contador;
    
    scanf("%d",&n);
    
    vetor = (int *)malloc(sizeof(int) * n + 1);
    
    for(contador = 1; contador <= n; contador++){
        
        scanf("%d",&vetor[contador]);
    }
    
    quicksort(vetor, 1, n);
    
    
    for(contador = 1; contador <= n; contador++){
        
        if(contador > 1){
            printf(" ");            
        }
        printf("%d",vetor[contador]);
    }
    
    printf("\n");
    
    free(vetor);
    
}

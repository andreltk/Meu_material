#include <stdio.h>
#include <stdlib.h>

/*
 * Não consegui entender essa super amável função
 * chamada merge
 * Mas antes de zerar a questão, adoraria que me dissese onde errei.
 * Obrigado!
 *
 */


void merge(int * vetor, int p, int q, int r){
    
    int * vetor_auxiliar, contador_1, contador_2, contador_3;
    
    vetor_auxiliar = (int *)malloc(sizeof(int) * (r - p));
    
    contador_1 = p;
    contador_2 = q;
    contador_3 = 0;
    
    while(contador_1 < q && contador_2 < r){
        
        if(vetor[contador_1] <= vetor[contador_2]){
            
            vetor_auxiliar[contador_3] = vetor[contador_1];
            contador_3++;
            contador_1++;
        }
        
        else{
            
            vetor_auxiliar[contador_3] = vetor[contador_2];
            contador_2++;
            contador_1++;
        }
    }
    while(contador_1 < q){
        
        vetor_auxiliar[contador_3] = vetor[contador_1];
        
        contador_1++;
        contador_3++;
    }
    
    while(contador_2 < r){
        
        vetor_auxiliar[contador_3] = vetor[contador_2];
        
        contador_2++;
        contador_3++;
    }
    
    for(contador_1 = p; contador_1 < r; contador_1++){
        
        vetor[contador_1] = vetor_auxiliar[contador_1 - p];
        
    }
    
    free(vetor_auxiliar);
    
    return;
}

void mergesort(int *v, int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mergesort(v, p, q);
        mergesort(v, q + 1, r);
        merge(v, p, q, r);
    }
}


int main()
{
    
    int *vetor;
    int n, contador;
    
    scanf("%d", &n);
    
    vetor = (int *)malloc(sizeof(int) * n);
    
    for (contador = 0; contador < n; contador++)    {
        scanf("%d", &vetor[contador]);
    }
    
    mergesort(vetor, 1, n);
    
    for (contador = 0; contador < n; contador++)    {
        if(contador > 0){
            printf(" ");
        }
        
        printf("%d",vetor[contador]);        
    }
    printf("\n");
    
}

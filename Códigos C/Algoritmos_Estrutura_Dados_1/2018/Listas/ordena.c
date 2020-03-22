#include<stdio.h>

void selection(int *v,int limite);
void insertion(int *v,int limite);
void bubble(int *v,int limite);
void selection(int *v,int limite);
void selection(int *v,int limite);
void selection(int *v,int limite);


int main(){
    
    int *vetor;
    int opcao,limite,contador;
 
    scanf("%d",&limite);
    
    for(contador=0;contador<limite;contador++){
        
        scanf("%d",&vetor[contador]);
    
    }
    
    
    printf("\n1-\tSelection\n");
    printf("\n2-\tInsertion\n");
    printf("\n3-\tBubble\n");
    printf("\n4-\tQuick\n");
    printf("\n5-\tRadix\n");
    printf("\n6-\tCounting\n");
    
    scanf("%d",&opcao);
    

    if(opcao== 1){
        selection(v,limite);
    }
    if(opcao== 2){
        
    }
    if(opcao== 3){
        
    }
    if(opcao== 4){
        
    }
    if(opcao== 5){
        
    }
    if(opcao== 6){
        
    }
    
    
    printf ("\n");
    
    for(contador=0;contador<limite;contador++){
        
    printf(" %d",vetor[contador]);
    
    }
    
    printf ("\n");
    
}

void selection(int *v,int limite){
    
    int contador,contador1,auxiliar,menor;
    
    for(contador=0;contador<limite;contador++){
        
        menor=contador;
        
        for(contador1=contador+1;contador1<limite;contador1++){
            
            if(v[menor]>v[contador1]]){
                
                menor=contador1;
            }
        }
        
        if(menor != contador){
            
            auxiliar=v[menor];
            
            v[menor]=v[contador];
            v[contador]=auxiliar;
        }
    }
}
/////////////////////////////////////

Ordenação-Por-Inserção (A, n)
1  para  j crescendo de 2  até  n  faça
2  x ← A[j]
3  i ← j−1
4  enquanto  i > 0  e  A[i] > x  faça
5  A[i+1] ← A[i]
6  i ← i−1
7  A[i+1] ← x
//////////////////////////////////////
Bubble

 var x,y,aux : INTEIRO   
02. PARA x=0 ATE vet.tamanho PASSO 1
03.     PARA y=x+1 ATE vet.tamanho PASSO 1
04.      SE(vet[x] > vet[y]) ENTAO
05.       var aux = vet[x]
06.       vet[x] = vet[y]
07.       vet[y] = aux
08.      FIMSE
09.     FIMPARA
10.    FIMPARA
//////////////////////////////////////

/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
////////////////////////////////////

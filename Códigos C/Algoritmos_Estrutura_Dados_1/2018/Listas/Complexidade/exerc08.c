#include <stdio.h>
#include<math.h>

long int main(){
    
    long int vetor[1000];
    long int contador, limite, produto1,min;
    
    scanf("%d",&limite);
    
    for(contador=0;contador<limite;contador++){
        
        scanf("%d",&vetor[contador]);
        
    }
    
    produto1=1;
    
    for(contador=0;contador<limite;contador++){
        
        produto1*=vetor[contador];   
        
    }
    printf("%d\n",produto1);
    
    produto1/=limite;
    
    min=pow(produto1,1/limite*1.0);
    
    for(contador=0;contador<limite;contador++){
        
        vetor[contador]=min;   
        
    }
    
    for(contador=0;contador<limite;contador++){
        
        if(contador>0)
            printf(" ");
        
        printf("%d",vetor[contador]);
        
        
    }
    
    printf("\n");
    
}

#include <stdio.h>

/**
 * Funcao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat(unsigned int n);


int main(){
    
    unsigned int n;
    
    scanf("%d",&n);
    printf("%d! = %u\n",n,fat(n));
    
    
    return 0;
}

unsigned long int fat( unsigned int nl){
   
   unsigned long int c,nc;
    
    if(nl==0) return 1;
    nc=nl;
    for(c=1;c<nl;c++){
        nc*=(nl-c);
    }
        return nc;
    
    
}


//Feito por André Luiz

#include<stdio.h>

int multiplos(int base, int vezes);

int main(){
    
    int base, vezes, resultado;
    
    scanf("%d",&vezes);
    scanf("%d",&base);
    
    resultado = multiplos(base,vezes);
    
    printf("\n%d\n",resultado);
}


int multiplos(int base, int vezes){
    
    int resultado;
    
    if(vezes == 0){
        
        return 0;
    }
    
    
    resultado = (base * vezes) + multiplos(base, vezes - 1);
    
    if(vezes  > 1)
        printf(" ");
    
    printf("%d",base * vezes);
    
    
    return resultado;
    
} 

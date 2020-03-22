//Feito por André Luiz Teixeira Kohlrausch

#include<stdio.h>

int fibonacci(int numero);

int main(){
    
    int numero;
    
    scanf("%d",&numero);
    
    numero = fibonacci(numero);
    
    printf("%d\n",numero);
}


int fibonacci(int numero){
    
    if(numero == 0 || numero == 1)
        return numero;
    
    return fibonacci(numero -1) + fibonacci(numero - 2);
    
}

/*
 * Observação
 *
 *Pode ser interessante colocar printf na função pra entender como funciona
 */ 

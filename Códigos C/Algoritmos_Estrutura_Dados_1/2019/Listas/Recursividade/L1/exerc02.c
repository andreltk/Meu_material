//Feito por André Luiz Teixeira Kohlrausch

/*Fibonacci
 * 
 * Encontrar n-ésimo termo da série de Fibonacci usando recursão
 * 
 * Dado um número n, n ∈ N∗ , usando recursão, imprimir o n-ésimo termo da série de Fibonacci.]
 * Observação: Considere que os dois primeiros termos da série são 1 e 1, sendo que a contagem foi iniciada em 1.
 */

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

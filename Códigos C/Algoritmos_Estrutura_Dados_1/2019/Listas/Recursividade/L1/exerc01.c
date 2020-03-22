//Feito por André Luiz Teixeira Kohlrausch

/*
 *Números Naturais 
 * 
 *Imprimir números naturais usando Recursão
 *Escreva um programa, em C, para imprimir os n primeiros números naturais usando recursão.
*/

#include<stdio.h>

void prox_natural (int numero);

int main(){
    
    int numero;
    
    scanf("%d",&numero);
    
    prox_natural(numero);
    
    printf("\n");
}

void prox_natural (int numero){
    
    if(numero == 0)
        return;
    
    
    prox_natural(numero-1);
    
    printf(" ");
    printf("%d",numero);
    
}

/*OBS:
 *Na linha 27 se colocar prox_natural(numero--), acontece segmentation fault
*/

//Feito por André Luiz Teixeira Kohlrausch

////Erro no caso de teste do numero 5

/*
 * Escreva um programa em C para transformar um número em decimal para binário.

 */
#include<stdio.h>
#include<stdlib.h>

void conversor_binario(int inteiro);

int main(){
        
    int numero;
    
    scanf("%d",&numero);
    
    conversor_binario(numero);
    
    printf("\n");
   
}

void conversor_binario(int inteiro){
    
    if (inteiro == 2){
        
        printf("1");
        return;
    }
    
    conversor_binario(inteiro / 2);
    
    printf("%d",inteiro % 2);
}

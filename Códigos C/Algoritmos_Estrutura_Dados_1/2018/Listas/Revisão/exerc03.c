#include<stdio.h>

int main(){
    
    int maximo,inteiro1,inteiro2,resultado;
    char operacao;
    
    scanf("%d",&maximo);
    scanf("%d",&inteiro1);
    scanf(" %c",&operacao);
    scanf("%d",&inteiro2);
    
    
    if(operacao=='+'){
    
    resultado=inteiro1+inteiro2;
        
    }
        
    else if(operacao=='*'){
        
    resultado=inteiro1*inteiro2;
        
    }

    
    if(resultado>maximo)
        printf("OVERFLOW\n");
    
    else
        printf("OK\n");
    
}

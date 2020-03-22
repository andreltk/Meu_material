//Feito por André Luiz Teixeira Kohlrausch

//Execício já feito na aula


/*
 * Função Ackermann
 * 
 * Na teoria da computabilidade, a Função de Ackermann ( fack ), nomeada por Wilhelm Friedrich Ackermann (1896-1962),
 * é um dos mais simples exemplos de uma função computável que não é função recursiva
 * primitiva. Todas as funções recursivas primitivas são totais e computáveis, mas a Função de Ackermann
 * mostra que nem toda função total-computável é recursiva primitiva.
 * 
 */

#include<stdio.h>

unsigned int ack(int m,int n);

int main(){
    
    int m,n;
    
    scanf("%d""%d",&m,&n);
    
    printf("%d\n",ack(m,n));
    
    
}

unsigned int ack(int m , int n){
    
    if(m==0){
        
        return n+1;
        
    }
    
    else if(n==0 && m>0){
        
        return ack(m-1,1);
    }
    
    else if(n>0 && m>0){
        
        return ack(m-1,ack(m,n-1));
    }
}

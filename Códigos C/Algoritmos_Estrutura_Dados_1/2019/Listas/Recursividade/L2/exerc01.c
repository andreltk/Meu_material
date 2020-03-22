//Feito por André Luiz Teixeira Kohlrausch


/*
 * ESYRCRTN - Por que sempre recursão
 * 
 * F(1)=1
 * F(2)=3
 * F(N)=F(N-1)-F(N-2)
 * Agora dado um N, Você terá que encontrar F(1)+F(2)+..+F(N).
 * 
 */
#include<stdio.h>

int funcao(int inteiro);
long int resultado(int inteiro);

int main(){
    
    int contador,numero_testes;
    long int soma,valor;
    
    scanf("%d",&numero_testes);
    
    for(contador = 0; contador < numero_testes; contador++){
        
        scanf("%ld",&valor);
        
        soma = resultado(valor);
        
        printf("%ld\n",soma);
        
    }
}
int funcao(int inteiro){
    
    if(inteiro == 1)
        return 1;
    
    if(inteiro == 2)
        return 3;
    
    if(inteiro > 2){
        
        return (funcao(inteiro-1)) - (funcao(inteiro-2));   
        
    }
}

long int resultado(int inteiro){
    
    long int soma;
    
    
    for(soma = 0; inteiro > 0; inteiro --){
        
        soma+= funcao(inteiro);
    }
    
    return soma;
    
}

//Feito por André Luiz Teixeira Kohlrausch


/*
 * As férias terminaram. Graças à ajuda do hacker Leha, Noora
 * conseguiu entrar na universidade de seus
 * sonhos, que está localizada em uma cidade
 * chamada Pavlopolis. 
 * 
 */
#include<stdio.h>

unsigned int fatorial(int numero);

int MDC_2_inteiros (unsigned int inteiro_x, unsigned int inteiro_y );

int main(){
    
    int numero_1, numero_2;
    unsigned int resultado;
    
    scanf("%d",&numero_1);
    scanf("%d",&numero_2);
    //Tentar com e sem espaços
    resultado = MDC_2_inteiros(fatorial(numero_1),fatorial(numero_2));
    
    printf("%d\n",resultado);
    
    return 0;
    
}



unsigned int fatorial(int numero){
    
    if(numero == 1 || numero == 0)
        return 1;
    else
        return numero * fatorial(numero-1);
    
}

int MDC_2_inteiros (unsigned int inteiro_x, unsigned int inteiro_y ){
    
    unsigned int divisor;
    
    printf("%ld\n",inteiro_x);
    printf("%ld\n",inteiro_y);
    
    if(inteiro_x > inteiro_y)
        divisor = inteiro_x;
    
    else
        divisor = inteiro_y;
    
    while(1){
        
        if(inteiro_x % divisor == 0){
            
            if(inteiro_y % divisor == 0)
                return divisor;
            
        }
        
        divisor --;
        
    }
}

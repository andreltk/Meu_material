//Feito por André Luiz

#include<stdio.h>

int primo(long int atual);

int main(){
    
    int testes, contador, resultado;
    
    long int numero;
    
    
    scanf("%d",&testes);
    
//     printf("Teste 1\n");
    
    for(contador = 0; contador < testes; contador++){
//         printf("Teste 1.1\n");
        scanf("%ld",&numero);
//         printf("Teste 1.2\n");
        printf("%ld ",numero);
        
        if(primo(numero) == 1){
            
            printf("S ");
//             printf("Teste 2\n");
            
        }
        
        else
            printf("N ");
        
        numero++;
        
        while(1){
            
            resultado = primo(numero);
            
//             printf("\n\n\n\n\n\n\n\n\n\n\tResul %d\n",resultado);
            if(resultado == 1){
//                 printf("\tResultado %d\n",resultado);
                break;
            }
            else
                numero++;
            
//             printf("Teste laço\n");
            
        }
        
        printf("%ld\n",numero);
        
        
    }
    
}

int primo(long int atual){
    
    long int auxiliar;
    
    
    auxiliar = 2;
    
    while(1){
        
        if(atual == auxiliar){
//             printf("Retornou\n");
            return 1;
        }
        
        if(atual%auxiliar == 0)
            return 0;
//         printf("Função\t%ld\tAtual = %ld\tA = %ld\n",auxiliar,atual,atual%auxiliar);
        
        
        auxiliar++;
    }
    
}

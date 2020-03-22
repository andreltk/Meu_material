//Feito por André Luiz

#define A 65
#define MAX 11

#include<stdio.h>

int verifica_capicuia(char* palavra, int tamanho);

int main(){
    
    int contador, posicao, testes, numero;
    char palavra[MAX];
    
    scanf("%d",&testes);
    
    for(contador = 0; contador < testes; contador++){
        
        scanf("%d",&numero);
        
        posicao = 0;
        
        while(numero > 0){
            
            palavra[posicao] = (numero % 10) + A;
            
            posicao++;
            
            numero /= 10;
            
        }
        
        if(verifica_capicuia(palavra,posicao) == 1)
            printf("S ");
        
        else
            printf("N ");
        
        while(posicao != 0){
             posicao--;
            printf("%c",palavra[posicao]);
           
        }
        
        printf("\n");
        
    }
}

int verifica_capicuia(char* palavra, int tamanho){
    
    int inicio,final;
    
    inicio = 0;
    final = tamanho - 1;
    /*
     *    printf("Erro 1\n");
     */
    
    while(inicio != final){
        /*
         *        printf("Erro 2\n");
         */       // printf("%d\t%d\n",inicio,final);
                printf("%c\t%c\n",palavra[inicio],palavra[final]);
               
        // */
        
        if(palavra[inicio] != palavra[final]){
            
            //             printf("-> %d\t%d\n",inicio,final);
            //             printf("-> %c\t%c\n",palavra[inicio],palavra[final]);
            
            return 0;	
        }
        
        inicio++;
        final--;
    }	
    return 1;	
}



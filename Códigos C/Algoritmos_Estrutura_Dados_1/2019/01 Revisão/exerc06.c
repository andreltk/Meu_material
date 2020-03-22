//Feito por André Luiz

#define MAX 50
#define MIN 2
#include<stdio.h>

//Observar se é necessário inicializar com zero o vetor de quantidade


int main(){
    
    int leituras, tipos, contador, posicao, auxiliar,auxiliar_2, auxiliar_3;
    int rotulos[MAX];
    int quantidade[MAX];
    
    scanf("%d""%d",&leituras, &tipos);
    
    for(contador = 0; contador < tipos; contador++){
        
        scanf("%d",&rotulos[contador]);
        
        printf("\tF-1\n");
        
        
        auxiliar_2 = 0;
        
        for(contador = 0; contador < leituras; contador++){
            
            scanf("%d",&auxiliar);
            
            printf("\nContado = %d\tLeituras = %d\tLido = %d\n\n",contador,leituras,auxiliar);
            printf("\tF-2\n");
            posicao = 0;
            auxiliar_3 = 0;
            
            while(posicao < tipos){
                printf("\tF-3\n");
                if(auxiliar == rotulos[posicao]){
                    
                    auxiliar_3 = 1;
                    
                }
                
                posicao++;
            }
            if(auxiliar_3 == 0){
                rotulos[auxiliar_2] = auxiliar;
                
                quantidade[auxiliar_2]++;
                
                auxiliar_2++;
            }
            
            posicao = 0;
            
            while(posicao < tipos){
                printf("\tF-4\n");
                if(auxiliar == rotulos[posicao]){
                    printf("\tF-4.1\n");
                    quantidade[posicao]++;
                }
                posicao++;
                printf("\tF-4.2\n");
            }
            printf("\tF-4.3\n");
        }
    }
    
    contador = 0;
    
    while(1){
        printf("\tF-5\n");
        posicao = 0;
        
        while(posicao < tipos){
            quantidade[posicao] -= MIN;
            
        }
        
        posicao = 0;
        
        while(posicao < tipos){
            printf("\tF-6\n");
            if(quantidade[posicao] < MIN){
                
                printf("%d\n",contador);
                return 0;
                
            }
            posicao++; 
        }
        contador++;
    }
}


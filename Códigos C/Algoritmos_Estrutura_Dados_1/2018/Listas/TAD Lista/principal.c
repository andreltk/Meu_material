//Feito por André Luiz

#define MAX 50
#define MIN 2
#include<stdio.h>

//Observar se é necessário inicializar com zero o vetor de quantidade


int main(){
    
    int leituras, tipos, contador, posicao, auxiliar,auxiliar_2;
    int rotulos[MAX];
    int quantidade[MAX];
    
    scanf("%d""%d",&leituras, &tipos);
    
    for(contador = 0; contador < tipos; contador++){
        
        scanf("%d",&rotulos[contador]);
    }
    
    for(contador = 0; contador < leituras; contador++){
        
        scanf("%d",&auxiliar);
        
        posicao = 0;
        auxiliar_2 = 0;
        
        while(posicao < tipos){
            
            if(auxiliar == rotulos[posicao]){
                
                continue;
            }
            
            rotulos[auxiliar_2] = auxiliar;
            
            quantidade[auxiliar_2]++;
            
            auxiliar_2++;
        }
        
        posicao = 0;
        
        while(posicao < tipos){
            
            if(auxiliar == rotulos[posicao]){
                
                quantidade[posicao]++;
            }
            posicao++;
        }

    }
    
    contador = 0;
    
    while(1){
        
        posicao = 0;
        
        while(posicao < tipos){
            quantidade[posicao] -= MIN;
            
        }
        
        posicao = 0;
        
        while(posicao < tipos){
            
            if(quantidade[posicao] < MIN){
                
                printf("%d\n",contador);
                return 0;
                
            }
            posicao++; 
        }
        contador++;
    }
}


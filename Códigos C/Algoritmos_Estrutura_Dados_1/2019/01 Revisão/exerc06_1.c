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
    
    
    auxiliar_3 = 0;
    
    for(contador = 0; contador < leituras; contador++){
        
        scanf("%d",&auxiliar);
        
      
        
        
        auxiliar_2 = 0;
        
        for(posicao = 0; posicao < auxiliar_3; posicao++){
            
            if(auxiliar == rotulos[posicao]){
      
                auxiliar_2 = 1;
                quantidade[posicao]++;
                continue;
            }
        }
        
        
        if(auxiliar_2 == 0){

            rotulos[auxiliar_3] = auxiliar;
            quantidade[auxiliar_3] = 1;

            auxiliar_3++;
        }
        
    }
    
    auxiliar_2 = 0;
    auxiliar_3 = 0;
    
    while(1){
        
        posicao = 0;
        
        while(posicao < tipos){
            
            if(quantidade[posicao] < 2){
                
                printf("%d\n",auxiliar_2);
                return 0;
            }
            
            posicao++;
        }
        
        posicao = 0;
        
        while(posicao < tipos){
            
            quantidade[posicao] -= 2; 
            posicao++;
        }
        
        auxiliar_2++;
    }
}

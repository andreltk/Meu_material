//Feito por André Luiz T. Kohlrausch

#include<stdio.h>
#include<stdlib.h>

int verifica_primo(int atual,int buscado);

void intervalo_primos(int inicio, int fim);

int main(){
    
    int inicio, fim;
    
    scanf("%d",&inicio);
    scanf("%d",&fim);
    
    intervalo_primos(inicio, fim);
    
}


int verifica_primo(int atual,int buscado){
    
//     printf("loop aqui\n");
    
    if(atual == buscado)
        return 1;
    
    if(buscado % atual == 0){
        return 0;
    }
    
    verifica_primo(atual + 1, buscado);
    
}

void intervalo_primos(int inicio, int fim){
    
    int resultado, contador, encontrados;
    
    resultado = 0;
    encontrados = 0;
    
    for(contador = inicio; contador <= fim; contador++){
        
        resultado = verifica_primo(2, contador);
        
        if(resultado == 1){
            
            if(contador > inicio)
                printf(" ");
            
            encontrados++;
            
            printf("%d",contador);
        }
        
    }
    
    if(encontrados == 0){
        
        printf("0\n");
        return;
        
    }
    
    printf("\n");
}

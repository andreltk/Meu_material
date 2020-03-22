//Feito por André Luiz

#include<stdio.h>
#include<stdlib.h>

void preenche(int * numeros,int quantidade);

int maior_numero(int * numeros, int quantidade);

int max_div_com(int * numeros,int quantidade, int valor);

int main(){
    
    int quantidade, mdc, maior;
    int *numeros;
    
    scanf("%d",&quantidade);
    
    
    numeros = (int*)malloc(sizeof(int) * quantidade);
    
    preenche(numeros, quantidade);
    
    maior = maior_numero(numeros, quantidade);
    
    mdc = max_div_com(numeros, quantidade, maior);

    printf("%d\n",mdc);
    
    free(numeros);
}

void preenche(int * numeros,int quantidade){
    
    int contador;
    
    for(contador = 0; contador < quantidade; contador++){
        
        scanf("%d",&numeros[contador]);
        
    }
}

int maior_numero(int * numeros, int quantidade){
    
    int contador, maior;

    maior = 0;
    
    for(contador = 0; contador < quantidade; contador++){
        
        if(numeros[contador] > maior)
            maior = numeros[contador];
    }
    
    return maior;

}

int max_div_com(int * numeros,int quantidade,int valor){
    
    int contador, resto;

    resto = 0;
    
    for(contador = 0; contador < quantidade; contador++){
        
        resto = numeros[contador] % valor;
    
        if(resto != 0)
            return max_div_com(numeros, quantidade, valor - 1);
    }
    
    return valor;
}

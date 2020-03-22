#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

int main(){
    ArvAVL* avl;
    int * lim_inf, * lim_sup;
    int res, i, valor, resultado;
    int N = 4, dados[4] = {2,300,-5,3};
    
    avl = cria_ArvAVL();
    
    for(i=0;i<N;i++){
        res = insere_ArvAVL(avl,dados[i]);
        
    }  
    
    lim_inf = (int *)malloc(sizeof(int));
    lim_sup = (int *)malloc(sizeof(int));
    
    scanf("%d",&valor);
    
    resultado = consultaIntervalarAVL(avl,valor,lim_inf, lim_sup); 

    if(resultado == 1){
        printf("O valor de %d encontra-se na AVL.\n",valor);
    }
    else if(resultado == 2){
        printf("Limite superior de %d encontrado na AVL: %d.\n",valor,*lim_sup);
    }
    else if(resultado == 3){
        printf("Limite inferior de %d encontrado na AVL: %d.\n",valor,*lim_inf);
    }
    else if(resultado == 5){
        printf("Limite superior de %d encontrado na AVL: %d.\n",valor,*lim_sup);
        printf("Limite inferior de %d encontrado na AVL: %d.\n",valor,*lim_inf);        
    }
    
    libera_ArvAVL(avl);
    free(lim_inf);
    lim_inf = NULL;
    free(lim_sup);
    lim_sup = NULL;
    
    return 0;
}

//Código da função

int consultaIntervalarAVL(ArvAVL *raiz, int x, int *limInf, int *limSup){
    
    int resultado, contador;
    
    resultado = consulta_ArvAVL(raiz, x);
    
    if(resultado == 1){
        return resultado;
    }
    else{
        
        *limInf = *limSup = 0;
        
        for(contador = x + 1;contador < x * 100; contador++){
            //busca o limite superior
            if(consulta_ArvAVL(raiz,contador) == 1){
                *limSup = contador;
                resultado += 2;
                break;
            }
        }
        
        for(contador = x - 1;contador > x * (-100); contador--){
            //busca o limite superior
            if(consulta_ArvAVL(raiz,contador) == 1){
                *limInf = contador;
                resultado += 3;
                break;
            }
        }
    }
    return resultado;
}

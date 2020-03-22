#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

int main(){
    ArvAVL* avl;
    int res,i;
    //int N = 10, dados[10] = {50,25,10,5,7,3,30,20,8,15};
    //int N = 11, dados[11] = {50,25,10,5,5,7,3,30,20,8,15};
    int N = 10, dados[10] = {1,2,3,4,5,6,7,8,9,10};
    
    avl = cria_ArvAVL();
    
    for(i=0;i<N;i++){
        //printf("========================\n");
        //printf("Inserindo: %d\n",dados[i]);
        res = insere_ArvAVL(avl,dados[i]);
        //printf("\n\nres = %d\n",res);
        //preOrdem_ArvAVL(avl);
        //printf("\n\n");
    }
    //
    printf("\nAVL tree:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");

    imprime(avl);
    
    libera_ArvAVL(avl);
    
    
    return 0;
}

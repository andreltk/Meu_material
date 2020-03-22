#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"
#include "Lista.h"

int main(){
    ArvAVL* avl;
    Lista* emOrdem;
    int res,i;
    int N = 10, dados[10] = {50,25,10,5,7,3,30,20,8,15};
    
    avl = cria_ArvAVL();
    emOrdem = lista_cria();
    
    
    for(i=0;i<N;i++){
        res = insere_ArvAVL(avl,dados[i]);
    }
    
    printf("\nAVL em ordem:\n");
    emOrdem_ArvAVL(avl);
    printf("\n\n");
    
    printf("\nLista em ordem:\n");
    emOrdem_Lista(avl, emOrdem);
    
    printf("%s",imprime_lista(emOrdem));
    printf("\n\n");
    
    libera_ArvAVL(avl);
    lista_libera(emOrdem);
    
    return 0;
}


//Função que gera a lista

void emOrdem_Lista(ArvAVL *raiz, Lista* q){
    
    static int contador = 0;
    
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdem_Lista(&((*raiz)->esq), q);
        lista_insere_posicao(q,(*raiz)->info,contador);
        contador++;
        emOrdem_Lista(&((*raiz)->dir), q);
    }
}

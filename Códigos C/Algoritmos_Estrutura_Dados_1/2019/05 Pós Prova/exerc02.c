#include<stdio.h>
#include<stdlib.h>

typedef struct lista Lista;
typedef struct elemento Elemento;

struct elemento {
    int elemento;
    Elemento * proximo;
};
struct lista {
    Elemento * cabeca;
    int tamanho;
};

Lista * lista_cria ();

void lista_libera (Lista * p);

int lista_insere_posicao (Lista * p, int elemento, int posicao);

int lista_obtem_elemento (Lista * p, int posicao);

int lista_obtem_tamanho (Lista * p);
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
int main(){
    
    Lista * lista_1;
    
    int contador, quantidade, insercao, posicao;
    
    lista_1 = lista_cria();
    
    scanf("%d",&quantidade);
    
    for(contador = 0; contador < quantidade; contador++){
        
        scanf("%d",&insercao);
        posicao = lista_obtem_tamanho(lista_1);

  
            lista_insere_posicao(lista_1, insercao, (posicao / 2));
    }
    
    
    for(contador = 0; contador < quantidade; contador++){
        
        if(contador > 0)
            printf(" ");
        
        printf("%d",lista_obtem_elemento(lista_1,contador + 1));
        
    }
    
    printf("\n");
    
    lista_libera(lista_1);
    
}

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

Lista * lista_cria (){
    
    Lista * auxiliar;
    
    auxiliar = (Lista *)malloc(sizeof(Lista));
    
    auxiliar->cabeca = NULL;
    auxiliar->tamanho = 0;
    
    return auxiliar;
    
}

void lista_libera (Lista * p){
    
    Elemento * auxiliar_1, * auxiliar_2;
    
    auxiliar_1 = p->cabeca;
    
    while(auxiliar_1 != NULL){
        
        auxiliar_2 = auxiliar_1->proximo;
        free(auxiliar_1);
        auxiliar_1 = auxiliar_2;
    }
    
    free(p);
    
    p = NULL;
    
    return;
}

int lista_insere_posicao (Lista * p, int elemento, int posicao){
    
    Elemento * auxiliar, * auxiliar_2;
    int contador;
    
    auxiliar_2 = p->cabeca;

   

    if(posicao == 0 && p->cabeca == NULL){
        

        auxiliar = (Elemento *)malloc(sizeof(Elemento));   
        
        auxiliar->elemento = elemento;
        auxiliar->proximo = NULL;
        
        p->cabeca = auxiliar;
        p->tamanho++;
    
        return 1;
    }
    
    else if(posicao == 0){
        


        auxiliar = (Elemento *)malloc(sizeof(Elemento));   
        
        auxiliar->elemento = elemento;
        auxiliar->proximo = auxiliar_2;
        
        p->cabeca = auxiliar;
        p->tamanho++;
    
        return 1;
    }
    else{

        for(contador = 1; contador < posicao; contador++){
            
            auxiliar_2 = auxiliar_2->proximo;


        }
        
        auxiliar = (Elemento *)malloc(sizeof(Elemento));   
        auxiliar->elemento = elemento;
        auxiliar->proximo = auxiliar_2->proximo;
        p->tamanho++;
        auxiliar_2->proximo = auxiliar;

        return 1;


        
    }
}

int lista_obtem_elemento (Lista * p, int posicao){

    Elemento * auxiliar;
    int contador;

    auxiliar = p->cabeca;

    for(contador = 1; contador < posicao; contador++){
        auxiliar = auxiliar->proximo;
    }

    return auxiliar->elemento;
}

int lista_obtem_tamanho (Lista * p){

    return p->tamanho;


}

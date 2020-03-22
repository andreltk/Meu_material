#include"BLista.h"

Lista* criaLista(){
    
    Lista* L;
    
    L=(Lista*)malloc(sizeof(Lista));
    
    if(L == NULL)
        return NULL;
    
    L->inicio = NULL;
    L->quantidade = 0;
    
    return L;
    
}

int insereItem(Lista * L){
    
    Item* auxiliar, *auxiliar2;
    
    
    if(L->inicio == NULL){
        
        auxiliar = (Item *)malloc(sizeof(Item));
        
        if(auxiliar == NULL)
            return -1;
        
        auxiliar->proximo = (struct Item*)auxiliar;
        L->inicio =(struct Item*) auxiliar;
        L->quantidade = 1;
        
        return 1;
    }
    
    else{
        
        auxiliar =(Item*) L->inicio;
        
        while(1){
            
            if(auxiliar->proximo == L->inicio){
                
                
                
                auxiliar2 = (Item*)malloc(sizeof(Item));
                
                if(auxiliar == NULL)
                    return -1;
                
                auxiliar2->proximo =(struct Item*) L->inicio;
                auxiliar->proximo =(struct Item*) auxiliar2;
                
                L->quantidade++;
                
                return 1;
            }
            
            auxiliar=(Item*)auxiliar->proximo;
            
        }
        
        
    }
    
}

int removeItem(Lista * L,int id){
    
    Item *auxiliar,*auxiliar2;
    int contador;
    auxiliar =(Item*) L->inicio;
    
    for(contador=0;contador<L->quantidade;contador++){
        
        if(auxiliar->identidade == id && auxiliar == (Item *)L->inicio){
            
            L->inicio = auxiliar->proximo;
            free(auxiliar);
            L->quantidade--;
            
            return 1;
            
        }
        
        
        
        
        if(auxiliar->proximo != L->inicio){
            
            auxiliar2 = (Item*)auxiliar->proximo;
            
            if(auxiliar2->identidade == id){
                
                auxiliar->proximo = auxiliar2->proximo;
                free(auxiliar2);
                L->quantidade--;
                return 1;
                
            }
        }
        
        //         auxiliar=(Item*)auxiliar->proximo;
        
    }
    return 2;
}

Item* Busca(Lista* L,int id){
    
    Item *auxiliar,*auxiliar2;
    int contador;
    auxiliar =(Item*) L->inicio;
    
    for(contador=0;contador<L->quantidade;contador++){
        
        if(auxiliar->identidade == id){
            
            return auxiliar;
            
        }
        
        auxiliar=(Item*)auxiliar->proximo;
        
    }
    
    return NULL;
}


int apagaLista(Lista * L){
    
    Item *auxiliar,*auxiliar2;
    int contador;
    
    
    auxiliar =(Item*) L->inicio;
    
    for(contador=0;contador < L->quantidade;contador++){
        
        auxiliar2 = (Item *)auxiliar->proximo;
        free(auxiliar);
        auxiliar=(Item *)auxiliar2;
        
        }
        
        L->inicio=NULL;
        
    return 1;
}    

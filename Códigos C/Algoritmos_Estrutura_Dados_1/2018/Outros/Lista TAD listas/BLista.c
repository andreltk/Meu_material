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

/*   
 * int removeItem(Cafeteira * lista,int id);
 * 
 * int buscaItem(Cafeteira * lista,int id);
 * 
 * int apagaLista(Cafeteira * lista);
 * 
 * void imprimeLista(Cafeteira * lista);
 */

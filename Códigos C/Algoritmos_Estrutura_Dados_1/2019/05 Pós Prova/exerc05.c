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
    
    int lista_insere_inicio (Lista * p, int elemento);
    
    int lista_remove_posicao (Lista * p, int posicao);
    
    int lista_obtem_elemento (Lista * p, int posicao);
    
    int lista_obtem_tamanho (Lista * p);
    
    
    //////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////
    int main(){
        
        Lista * lista_1;
        
        
        
        int contador, quantidade, insercao, tamanho, tamanho_max;
        
        lista_1 = lista_cria();
        
        scanf("%d",&quantidade);
        scanf("%d",&tamanho_max);
        
        for(contador = 0; contador < quantidade; contador++){
            
            scanf("%d",&insercao);
            
            lista_insere_inicio(lista_1, insercao);
            tamanho = lista_obtem_tamanho(lista_1);
            
            
            
            if(tamanho > tamanho_max){
                
                
                if(tamanho % 2 != 0){
                    lista_remove_posicao(lista_1, (tamanho / 2 )+ 1);
                }
                
                else{
                    lista_remove_posicao(lista_1, tamanho / 2 );
                } 
                
            }
            
        }
        ///////////////////////////////////////////////////////// 
        for(contador = 1; contador <= tamanho_max; contador++){
            
            if(contador > 1)
                printf(" ");
            
            printf("%d",lista_obtem_elemento(lista_1,contador));
            
        }
        
        printf("\n");
        //////////////////////////////////////////////////////////  
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
    
    int lista_insere_inicio (Lista * p, int elemento){
        
        Elemento * auxiliar, * auxiliar_2;
        
        
        auxiliar_2 = p->cabeca;
        
        auxiliar = (Elemento *)malloc(sizeof(Elemento));   
        
        auxiliar->elemento = elemento;
        auxiliar->proximo = auxiliar_2;
        
        p->cabeca = auxiliar;
        p->tamanho++;
        
        return 1;
        
    }
    
    int lista_remove_posicao (Lista * p, int posicao){
        
        Elemento * auxiliar, * auxiliar_2;
        int contador;
        
        auxiliar = p->cabeca;
        
        
        
        if(posicao <= 1){
            
            p->cabeca = auxiliar->proximo;
            p->tamanho--;
            
            free(auxiliar);
            
            return 1;
            
        }
        
        
        for(contador = 1; contador < posicao; contador++){
            
            auxiliar_2 = auxiliar;
            auxiliar = auxiliar->proximo;
            
        }
        
        
        auxiliar_2->proximo = auxiliar->proximo;
        
        free(auxiliar);    
        p->tamanho--;
        
        return 1;
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

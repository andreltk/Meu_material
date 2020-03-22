//Feito por André Luiz Teixeira Kohlrausch

//Arquivo fonte da biblioteca Lista de Arya

/*
 * Observação:
 * 
 * Caso apareça aviso na compilação, mudar tipos das funções e tipos de variáveis adicionando 'struct' antes
 * 
 */

#include"arya.h"


void menu(inimigo* lista){
    
    
    printf("\n\t Iniciando função -> Menu\n");    
    char escolha;
    int auxiliar_1,auxiliar_2,auxiliar_3;
    //////////
  printf("\n\tIMPRIMINDO LISTA\n");
    
  printf("========================================\n");
    inimigo* auxiliar;
    
    auxiliar = lista;
    
    printf("\nPOMTEIRU = %p\n",auxiliar);
    
   do{
        
        printf("\nPessoa:\t%d\nAtual:\t%p\nPróximo:\t%p\n",auxiliar->pessoa,auxiliar,auxiliar->proximo);
        
        auxiliar = auxiliar->proximo;
    } while(auxiliar != NULL);
    
  printf("========================================\n");
   
    /////////
    while(1){ 
        
         //////////
  printf("\n\tIMPRIMINDO LISTA\n");
    
  printf("========================================\n");
    inimigo* auxiliar;
    
    auxiliar = lista;
    
    printf("\nPOMTEIRU = %p\n",auxiliar);
    
   do{
        
        printf("\nPessoa:\t%d\nAtual:\t%p\nPróximo:\t%p\n",auxiliar->pessoa,auxiliar,auxiliar->proximo);
        
        auxiliar = auxiliar->proximo;
    } while(auxiliar != NULL);
    
  printf("========================================\n");
   
    /////////
        
        scanf(" \n%c",&escolha);
        printf("\nOpção lida\n");
        if(escolha == 'I'){
            
            scanf("%d",&auxiliar_1);
            scanf("%d",&auxiliar_2);
            
            adiciona_inimigo(lista,auxiliar_1,auxiliar_2);
            
        }
        
        
        if(escolha == 'R'){
            
            scanf("%d",&auxiliar_1);
            
            remove_inimigo(lista,auxiliar_1);
            
        }
        
        if(escolha == 'Q'){
            
            scanf("%d",&auxiliar_1);
            scanf("%d",&auxiliar_2);
            
            auxiliar_3 = inimigos_restantes(lista,auxiliar_1,auxiliar_2);
            
            printf("Restantes %d\n",auxiliar_3);
        }
        if(escolha == 'F'){
            
            return;
        }
    }
}

///////////////////////////////////////////////////////////
inimigo* aloca_inimigo(){
    
    printf("\n\t Iniciando função -> aloca_inimigo\n");
    
    inimigo* auxiliar_1;
    
    auxiliar_1 = (struct inimigo*)malloc(sizeof(inimigo));
    printf("\nAlocado = %p\n",auxiliar_1);
    if(auxiliar_1 == NULL){
        printf("\nErro na alocação!\n");
        exit(0);
    }
    
    auxiliar_1->proximo = NULL;
    
    return auxiliar_1;
}

///////////////////////////////////////////////////////////
inimigo* cria_lista(){
    
    printf("\n\t Iniciando função -> cria_lista\n");
    
    int contador,inimigos,pessoa;
    inimigo* auxiliar_1;
    inimigo* auxiliar_2;
    inimigo* auxiliar_3;
    
    scanf("%d",&inimigos);
    
    auxiliar_1 = aloca_inimigo();
    auxiliar_3 = auxiliar_1;
    
    for(contador = 0; contador < inimigos; contador++){
        
               printf("\nComeçou de novo\n");
         
        
        scanf("%d",&pessoa);
        
        if(contador == 0){
                   printf("\nVeio pro if\n");
            auxiliar_1->pessoa = pessoa;
            printf("\nPessoa = %d\n",auxiliar_1->pessoa);
        }
        
        else{
                printf("\nVeio pro else\n");
            auxiliar_2 = aloca_inimigo();
            auxiliar_2->pessoa = pessoa;
            
            printf("\nPessoa = %d\n",auxiliar_2->pessoa);
            auxiliar_1->proximo = auxiliar_2;
            auxiliar_1 = auxiliar_2;
            
        }        
    }
    
    return auxiliar_3;
    
}

///////////////////////////////////////////////////////////
void adiciona_inimigo(inimigo* lista,int pessoa,int anterior){
    
    printf("\n\t Iniciando função -> adiciona_inimigo\n");
    inimigo* auxiliar_1;
    inimigo* auxiliar_2;
    
    auxiliar_1 = lista;
    

    
    while(auxiliar_1 != NULL){
         printf("\n\t BERSEK\n");
            printf("\n\tAnt %d\n",auxiliar_1->pessoa); 
            if(auxiliar_1->pessoa == anterior){
             printf("\n\t IFOU\n");
            auxiliar_2 = aloca_inimigo();
            
            auxiliar_2->pessoa = pessoa;
            auxiliar_2->proximo = auxiliar_1->proximo;
            
            auxiliar_1->proximo = auxiliar_2;
            
            
            
            
        }
      auxiliar_1 = auxiliar_1->proximo;  
    }
     printf("\n\t Terminando função -> adiciona_inimigo\n");
}

///////////////////////////////////////////////////////////
void remove_inimigo(inimigo* lista,int pessoa){
    
    printf("\n\t Iniciando função -> remove_inimigo\n");
    
    inimigo* auxiliar_1;
    inimigo* auxiliar_2;
    
    auxiliar_1 = lista;
    
    if(auxiliar_1->pessoa == pessoa){
        
        lista = auxiliar_1->proximo;
        
        free(auxiliar_1);
        auxiliar_1 = NULL;
        
        return;
    }
    
    auxiliar_2 = auxiliar_1->proximo;
    
    while(auxiliar_2->proximo != NULL){
        
        if(auxiliar_2->pessoa == pessoa){
            
            auxiliar_1->proximo = auxiliar_2->proximo;
            
            free(auxiliar_2);
            auxiliar_2 = NULL;
            
            return;
        }
        
        auxiliar_1 = auxiliar_2;
        auxiliar_2 = auxiliar_1->proximo;
        
    }
}


///////////////////////////////////////////////////////////
void libera_lista(inimigo* lista){
    
    printf("\n\t Iniciando função -> libera_lista\n");
    inimigo* auxiliar_1;
    inimigo* auxiliar_2;   
    
    auxiliar_1 = lista;
    
    
    while(auxiliar_1->proximo != NULL){
        
        auxiliar_2 = auxiliar_1->proximo;
        
        free(auxiliar_1);
        
        auxiliar_1 = auxiliar_2;
        auxiliar_2 = NULL;
        
    }
}

///////////////////////////////////////////////////////////
int inimigos_restantes(inimigo* lista,int inicio,int fim){
    
    printf("\n\t Iniciando função -> inimigos_restantes\n");
    inimigo* auxiliar_1;
    int contador;
    
    printf("\nInicio = %d\n",inicio); 
    printf("\nFim = %d\n",fim);
    auxiliar_1 = lista;
    contador = 0;
    
    while(1){
        
        if(auxiliar_1->pessoa == inicio){
            
            while(1){
                
                auxiliar_1 = auxiliar_1->proximo;
                
                if(auxiliar_1->pessoa == fim)
                    return contador;
                
                contador++;
            }
        }
    }
     
        return contador;
   
}

#include"BLista.h"

int main(){
    
    int escolha,verifica;
    char confirma;
    Lista * l1;
    Item * auxiliar;
    l1=NULL;
    
    
    system("clear");
    
    printf("\n\nBem vindo\n\n");
    
    if(l1==NULL){
        
        printf("\nNão há nenhuma lista!\n");
        printf("Deseja criar uma nova?\n");
        printf("S/N (Sim ou Não)\n");
        printf("------->");
        
        scanf("\n%c",&confirma);
        
        if(confirma=='s' || confirma == 'S'){
            
            l1=criaLista();
            
            if(l1 != NULL){
                system("clear");
                
                printf("\nSucesso\n");  
                
                //                 printf("\n------>  %p\n",l1->proximo);
            }
            else{
                printf("\nNão foi possível criar a lista\n");
                printf("\nTente novamente\n");                
            }
            
        }
        
        else
            return 0;
    }
    
    escolha = -1;
    
    
    while(escolha != 0){
        //  
        printf("\n========================\n");
        printf("\nEscolha uma opção:\n");
        
        printf("\n\t1-Inserir item");
        printf("\n\t2-Alterar item");
        printf("\n\t3-Remover item");
        printf("\n\t4-Buscar  item");
        printf("\n\t5-Imprimir lista");
        printf("\n\t0-Sair");
        
        printf("\n========================\n");
        
        printf("------->");
        
        scanf("%d",&escolha);
        
        switch(escolha){
            
            case 1:
                
                verifica=insereItem(l1);
                
                if(verifica == -1){
                    printf("ERRO!\n");
                    return 0;
                }
                else
                    printf("Item criado\n");
                
                
                /////////////////////////////////
                
                auxiliar = (Item*) l1->inicio;
                
                while(1){
                    
                    if(auxiliar->proximo == l1->inicio){
                        
                        printf("\nInsira informações:\n");
                        
                        printf("ID --> ");
                        
                        scanf("%d",&auxiliar->identidade);
                        
                        printf("\nConsumo em Watts--> ");
                        
                        scanf("%d",&auxiliar->consumo);
                        
                        printf("\nAno de fabricação--> ");
                        
                        scanf("%d",&auxiliar->ano);
                        
                        printf("\nCor do item--> ");
                        
                        scanf("\n%[^\n]s",auxiliar->cor);
                        
                        printf("\nFabricante--> ");
                        
                        scanf("\n%[^\n]s",auxiliar->marca);
                        
                        printf("\n========================\n");
                        
                        printf("\nAdicionado com sucesso!\n\n");
                        
                        break;
                    }
                    
                    else{
                          auxiliar=(Item*)auxiliar->proximo;
                    }
                }
                break;
                
                case 5:
                    
                    auxiliar=(Item*) l1->inicio;
                    
                    if(auxiliar == NULL){
                        system("clear");
                        printf("\nLista Vazia\n\n");
                        break;
                    }
                    
                    printf("\n========================\n");
                    
                    while(1){
                        
                        printf("\n----------------------\t%p\n",auxiliar->proximo);
                        
                        printf("ID = %d\n",auxiliar->identidade);
                        
                        printf("Consumo = %d\n",auxiliar->consumo);
                        
                        printf("Ano = %d\n",auxiliar->ano);
                        
                        printf("Cor = %s\n",auxiliar->cor);
                        
                        printf("Marca = %s\n",auxiliar->marca);
                        
                        
                        printf("\n----------------------\n");
                        
                        auxiliar=(Item*) auxiliar->proximo;
                        if(auxiliar->proximo != l1->inicio){
                            break;
                        }
                        
                    }
                    
                    break;
                    
                case 0:
                    return 0;
                    
        }
    }
}



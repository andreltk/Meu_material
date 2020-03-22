#include<stdio.h>

int main(){
    
    int nmrteste,contador,dimensao,limite,contadorc,contadorl,contador2,preso;
    char tabuleiro[1000][1000];
    
    scanf("%d",&nmrteste);
    
    for(contador=0;contador<nmrteste;contador++){
        
        scanf("%d",&dimensao);
        scanf("%d",&limite);
        
        for(contadorl=0;contadorl<dimensao;contadorl++){
            
            for(contadorc=0;contadorc<dimensao;contadorc++){
                
                scanf("\n %c",&tabuleiro[contadorl][contadorc]);
                
            }
        }
        
        /////////Verifica
        
        preso = 0;
        for(contadorl=0;contadorl<dimensao;contadorl++){
            
            
            
            for(contadorc=0;contadorc<dimensao;contadorc++){
                
                if(tabuleiro[contadorl][contadorc] == 'P'){
                    
                    //Caso coluna inicial
                    
                    if( contadorc == 0){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='X';
                                
                                preso++;
                                
                                break;
                            }
                        }
                        
                    }
                    
                    //Caso coluna limite
                    
                    else if( contadorc == dimensao-1){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='X';
                                
                                preso++;
                                break;
                            }
                        }
                        
                    }
                    //Demais casos
                    
                    else 
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            //procura a frente
                            
                            if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='X';
                                
                                preso++;
                                break;
                            }
                            //Procura para trás
                            
                            else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='X';
                                
                                preso++;
                                break;
                            }
                        }
                }                
            }
        }
        
        //imprime
        /*  
         *        printf("\n===================================\n");
         *        
         *        for(contadorl=0;contadorl<dimensao;contadorl++){
         *            
         *            for(contadorc=0;contadorc<dimensao;contadorc++){
         *                
         *                printf(" %c",tabuleiro[contadorl][contadorc]);
    }
    
    printf("\n");
    }
    
    
    printf("\n===================================\n");
    
    */
        printf("%d\n",preso);
    } 
    
}




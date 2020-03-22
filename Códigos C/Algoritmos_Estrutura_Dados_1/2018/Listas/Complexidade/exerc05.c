/*
 * As partes que mudam a matriz
 * que imprimem foi usado somente 
 * para me auxiliar a resolver um bug
 * por favor desconsidere
 */
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
                
                if(tabuleiro[contadorl][contadorc] == 'D'){
                    ///Cantos
                    
                    //Canto 0:0
                    if( contadorc == 0 && contadorl == 0){
                        
                        //Procura a frente
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='1';
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
                                
                                tabuleiro[contadorl][contadorc]='2';
                                
                                preso++;
                                break;
                            }
                        }
                    }  
                    
                    //Canto 0:limite
                    else if( contadorc == dimensao-1 && contadorl == 0){
                        
                        //Procura atrás
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='<';
                                tabuleiro[contadorl][contadorc]='3';
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
                                tabuleiro[contadorl][contadorc]='4';
                                preso++;
                                break;
                            }
                        }
                    }  
                    
                    //Canto limite:0
                    else if( contadorc == 0 && contadorl == dimensao-1){
                        
                        //Procura a frente
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='5';
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='V';
                                tabuleiro[contadorl][contadorc]='6';
                                preso++;
                                break;
                            }
                        }
                    }  
                    
                    //Canto limite:limite
                    else if( contadorc == dimensao-1 && contadorl == dimensao-1){
                        
                        //Procura atrás
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='>';
                                tabuleiro[contadorl][contadorc]='7';
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='V';
                                tabuleiro[contadorl][contadorc]='8';
                                preso++;
                                break;
                            }
                        }
                        
                    }
                    
                    //Caso coluna inicial   
                    else if( contadorc == 0 ){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            
                            
                            if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='9';
                                preso++;
                                
                                break;
                            }
                        }
                    }
                    
                    //Caso coluna limite
                    else if( contadorc == dimensao-1){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='>';
                                tabuleiro[contadorl][contadorc]='a';
                                preso++;
                                break;
                            }
                            
                        }
                    }
                    
                    //Linha 0
                    else if( contadorl == 0){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
                                tabuleiro[contadorl][contadorc]='b';
                                preso++;
                                break;
                            }
                            
                            
                            else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='d';
                                preso++;
                                break;
                            }
                            //Procura para trás
                            
                            else if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='X';
                                tabuleiro[contadorl][contadorc]='e';
                                preso++;
                                break;
                            }
                            
                            
                        }
                    }
                    //linha limite
                    else if( contadorl == dimensao-1){
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='X';
                                tabuleiro[contadorl][contadorc]='c';
                                preso++;
                                break;
                            }
                            
                            else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='d';
                                preso++;
                                break;
                            }
                            //Procura para trás
                            
                            else if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='X';
                                tabuleiro[contadorl][contadorc]='e';
                                preso++;
                                break;
                            }
                        }
                    }
                    
                    //Demais casos
                    
                    else{ 
                        
                        for(contador2 = 1;contador2 <= limite; contador2++){
                            
                            //procura a frente
                            
                            if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc + contador2]='<';
                                tabuleiro[contadorl][contadorc]='d';
                                preso++;
                                break;
                            }
                            //Procura para trás
                            
                            else if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                
                                tabuleiro[contadorl][contadorc - contador2]='X';
                                tabuleiro[contadorl][contadorc]='e';
                                preso++;
                                break;
                            }
                            //Procura abaixo
                            
                            else if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl  + contador2][contadorc]='X';
                                tabuleiro[contadorl][contadorc]='f';
                                preso++;
                                break;
                            }
                            //Procura acima
                            
                            else if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl  - contador2][contadorc]='V';
                                tabuleiro[contadorl][contadorc]='g';
                                preso++;
                                break;
                            }
                            
                        }
                    }                
                }
            }
        }
        
        
        //imprime
        
        /* printf("\n===================================\n");
         *        
         *        for(contadorl=0;contadorl<dimensao;contadorl++){
         *            
         *            for(contadorc=0;contadorc<dimensao;contadorc++){
         *                
         *                printf(" %c",tabuleiro[contadorl][contadorc]);
    }
    
    printf("\n");
    
    }
    */
        printf("%d\n",preso);
    }
}


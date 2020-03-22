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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                tabuleiro[contadorl][contadorc - contador2]='<';
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                preso++;
                                
                                break;
                            }
                            //Caso coluna limite
                            
                            else if( contadorc == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
                                    
                                    if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='>';
                                        
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
                                        preso++;
                                        break;
                                    }
                                }
                                
                            }
                            //linha limite
                            else if( contadorl == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                tabuleiro[contadorl][contadorc - contador2]='<';
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                preso++;
                                
                                break;
                            }
                            //Caso coluna limite
                            
                            else if( contadorc == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
                                    
                                    if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='>';
                                        
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
                                        preso++;
                                        break;
                                    }
                                }
                                
                            }
                            //linha limite
                            else if( contadorl == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
                                    
                                    if(tabuleiro[contadorl - contador2][contadorc] == 'V'){
                                        
                                        tabuleiro[contadorl - contador2][contadorc]='X';
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
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='<';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura para trás
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == '>'){
                                        
                                        tabuleiro[contadorl][contadorc + contador2]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura acima
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'V'){
                                        
                                        tabuleiro[contadorl  + contador2][contadorc]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura abaixo
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                        
                                        tabuleiro[contadorl  - contador2][contadorc]='^';
                                        
                                        preso++;
                                        break;
                                    }
                                    
                                }
                        }                
                    }
                }
                
                //imprime
                
                printf("\n===================================\n");
                
                for(contadorl=0;contadorl<dimensao;contadorl++){
                    
                    for(contadorc=0;contadorc<dimensao;contadorc++){
                        
                        printf(" %c",tabuleiro[contadorl][contadorc]);
                    }
                    
                    printf("\n");#include<stdio.h>

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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura abaixo
                            if(tabuleiro[contadorl + contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl + contador2][contadorc]='^';
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
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                tabuleiro[contadorl][contadorc - contador2]='<';
                                
                                preso++;
                                break;
                            }
                            
                            //Procura acima
                            if(tabuleiro[contadorl - contador2][contadorc] == 'L'){
                                
                                tabuleiro[contadorl - contador2][contadorc]='^';
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
                                
                                preso++;
                                
                                break;
                            }
                            //Caso coluna limite
                            
                            else if( contadorc == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
                                    
                                    if(tabuleiro[contadorl][contadorc - contador2] == 'L'){
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='>';
                                        
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
                                        preso++;
                                        break;
                                    }
                                }
                                
                            }
                            //linha limite
                            else if( contadorl == dimensao-1){
                                
                                for(contador2 = 1;contador2 <= limite; contador2++){
                                    
                                    if(tabuleiro[contadorl - contador2][contadorc] == 'V'){
                                        
                                        tabuleiro[contadorl - contador2][contadorc]='X';
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
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='<';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura para trás
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == '>'){
                                        
                                        tabuleiro[contadorl][contadorc + contador2]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura acima
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'V'){
                                        
                                        tabuleiro[contadorl  + contador2][contadorc]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura abaixo
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                        
                                        tabuleiro[contadorl  - contador2][contadorc]='^';
                                        
                                        preso++;
                                        break;
                                    }
                                    
                                }
                        }                
                    }
                }
                
                //imprime
                
                printf("\n===================================\n");
                
                for(contadorl=0;contadorl<dimensao;contadorl++){
                    
                    for(contadorc=0;contadorc<dimensao;contadorc++){
                        
                        printf(" %c",tabuleiro[contadorl][contadorc]);
                    }
                    
                    printf("\n");
                }
                
                
                printf("\n===================================\n");
                
                
                printf("%d\n",preso);
            } 
            
        }
        
    }
}



                }
                
                
                printf("\n===================================\n");
                
                
                printf("%d\n",preso);
            } 
            
        }
        
    }
}



                                    if(tabuleiro[contadorl - contador2][contadorc] == 'V'){
                                        
                                        tabuleiro[contadorl - contador2][contadorc]='X';
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
                                        
                                        tabuleiro[contadorl][contadorc - contador2]='<';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura para trás
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == '>'){
                                        
                                        tabuleiro[contadorl][contadorc + contador2]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura acima
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'V'){
                                        
                                        tabuleiro[contadorl  + contador2][contadorc]='X';
                                        
                                        preso++;
                                        break;
                                    }
                                    //Procura abaixo
                                    
                                    else if(tabuleiro[contadorl][contadorc + contador2] == 'L'){
                                        
                                        tabuleiro[contadorl  - contador2][contadorc]='^';
                                        
                                        preso++;
                                        break;
                                    }
                                    
                                }
                        }                
                    }
                }
                
                //imprime
                
                printf("\n===================================\n");
                
                for(contadorl=0;contadorl<dimensao;contadorl++){
                    
                    for(contadorc=0;contadorc<dimensao;contadorc++){
                        
                        printf(" %c",tabuleiro[contadorl][contadorc]);
                    }
                    
                    printf("\n");
                }
                
                
                printf("\n===================================\n");
                
                
                printf("%d\n",preso);
            } 
            
        }
        
    }
}



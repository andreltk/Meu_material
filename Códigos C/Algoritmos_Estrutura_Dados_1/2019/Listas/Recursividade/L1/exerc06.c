//Feito por André Luiz Teixeira Kohlrausch

//Execício já feito na aula

/*
 * Setas
 * 
 * Gabriel é um garoto que gosta muito de um jogo onde há várias letras em um tabuleiro e o jogador
 * precisa rapidamente pisar nas letras corretas, de acordo com as instruções que aparecem na tela, seguindo
 * uma música ao fundo.
 */

#include<stdio.h>

int verifica(int tabuleiro[][500],int linic,int cinic,int cl,int cc,int dimensao,int vez);

int main(){
    
    int dimensao,ccoluna,clinha,seguranca;
    int tabuleiro[500][500];
    
    scanf("%d",&dimensao);
    
    seguranca=0;
    
    for(clinha=0;clinha<dimensao;clinha++){
        
        for(ccoluna=0;ccoluna<dimensao;ccoluna++){
            
            scanf("\n %c",&tabuleiro[clinha][ccoluna]);  
            //             printf("-> %c \n ",tabuleiro[clinha][ccoluna]);
        }
        
    }
    
    for(clinha=0;clinha<dimensao;clinha++){
        
        for(ccoluna=0;ccoluna<dimensao;ccoluna++){
            
            //             printf("\n\n\nComeçou\n");              printf("\n-linic =%d cinic = %d --------------------------\n\n\n",clinha,ccoluna);
            
            
            seguranca+=verifica(tabuleiro,clinha,ccoluna,clinha,ccoluna,dimensao,0);
            
            //             printf("\nTerminou com seguranca = %d\n",seguranca);
            
        }
    }
    printf ("%d\n", seguranca);
    
}


int verifica(int tabuleiro[][500],int linic,int cinic,int cl,int cc,int dimensao,int vez){
    
    char seta;
    
    //    a printf("\n_________________________________________________________\n");    
    //     printf("\n\nTeste 1\t CL = %d / CC = %d\n",cl,cc,linic,cinic);
    
    
    //     printf("\n\n\t 1 - Linic = %d Cinic = %d \n",linic,cinic);
    
    if(cl == linic && cc == cinic && vez > 0)
        return 1;
    
    if(vez>dimensao)
        return 1;
    
    
    //    
    seta=tabuleiro[cl][cc];
    
    //     printf("Comando \t%c\n",seta);
    //     printf("\n_________________________________________________________\n");    
    
    //Verificação limites
    
    //     printf("\n\t 2 - Linic = %d Cinic = %d \n",linic,cinic);
    //         printf("\nLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL\n");
    
    if(seta == 'A' && cl == 0){
        
        //         printf("Erro 1\n");
        return 0;
        
    }
    else if(seta == 'V' && cl == dimensao-1){
        
        //         printf("Erro 2\n");
        return 0;
        
    }
    else if(seta == '>' && cc == dimensao-1){
        
        //         printf("Erro 3\n");
        return 0;
        
    }
    else if(seta == '<' && cc == 0){
        
        //         printf("Erro 4\n");
        return 0;
        
    }
    
    //     printf("\n\n\t 3 - Linic = %d Cinic = %d \n",linic,cinic); 
    //Nova chamada
    if(seta == 'A')
        return verifica(tabuleiro,linic,cinic,cl-1,cc,dimensao,vez+1);
    
    else if(seta == 'V')
        return verifica(tabuleiro,linic,cinic,cl+1,cc,dimensao,vez+1);
    
    else if(seta == '<')
        return verifica(tabuleiro,linic,cinic,cl,cc-1,dimensao,vez+1);
    
    else if(seta == '>')
        return verifica(tabuleiro,linic,cinic,cl,cc+1,dimensao,vez+1);
    
}



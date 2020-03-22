#include<stdio.h>

int verifica(int tabuleiro[][500],int cinic,int linic,int cl,int cc,int dimensao);

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
            
            printf("\nComeçou\n");
            
            seguranca+=verifica(tabuleiro,clinha,ccoluna,clinha,ccoluna,dimensao);
            
            printf("\nTerminou com seguranca = %d\n",seguranca);
            
        }
    }
    printf ("%d\n", seguranca);
    
}


int verifica(int tabuleiro[][500],int cinic,int linic,int cl,int cc,int dimensao){
    
    char seta;
    
    if(cl == linic && cc == cinic)
        return 1;
    
    seta=tabuleiro[cl][cc];
    
    printf("[%d/%d]\tLinha %d Coluna %d \t -> %c\n",linic,cinic,cl,cc,seta);
    
    //Verificação limites
    
    if(seta == 'A' && cl == 0){
        
        printf("Erro 1\n");
        return 0;
        
    }
    else if(seta == 'V' && cl == dimensao-1){
        
        printf("Erro 2\n");
        return 0;
        
    }
    else if(seta == '>' && cc == dimensao-1){
        
        printf("Erro 3\n");
        return 0;
        
    }
    else if(seta == '<' && cl == 0){
        
        printf("Erro 4\n");
        return 0;
        
    }
    //Nova chamada
    if(seta == 'A')
        return verifica(tabuleiro,linic,cinic,cl-1,cc,dimensao);
    
    else if(seta == 'V')
        return verifica(tabuleiro,linic,cinic,cl+1,cc,dimensao);
    
    else if(seta == '<')
        return verifica(tabuleiro,linic,cinic,cl,cc-1,dimensao);
    
    else if(seta == '>')
        return verifica(tabuleiro,linic,cinic,cl,cc+1,dimensao);
    
}



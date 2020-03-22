#include<stdio.h>

void marcador(int tabuleiro[][100],int *tentativas,int ntentativas);

int main(){
    
    int llimite,climite,ccoluna,clinha,contador,ntentativas;
    int tabuleiro[100][100],tentativas[1000];
    
    scanf("%d""%d",&llimite,&climite);
    
    
    //Preenche tabuleiro
    for(clinha=0;clinha<llimite;clinha++){
        
        for(ccoluna=0;ccoluna<climite;ccoluna++){
            
            scanf("\n %c",&tabuleiro[clinha][ccoluna]);  
            printf("\n===> %c ",tabuleiro[clinha][ccoluna]);
        }
    }
    
    //Preenche tentativas
    
    scanf("%d",&ntentativas);
    
    for(contador=0;contador<(ntentativas*2);contador++){
        scanf("%d",&tentativas[contador]);  
    }
    
    marcador(tabuleiro,tentativas,ntentativas);
    
    printf("========================================================\n");
    //Preenche tabuleiro
    for(clinha=0;clinha<llimite;clinha++){
        
        printf("\n");
        for(ccoluna=0;ccoluna<climite;ccoluna++){
            
            printf(" %c ",tabuleiro[clinha][ccoluna]);  
        }
    }
    
    //Preenche tentativas
    printf("\n");
    for(contador=0;contador<ntentativas*2;contador++){
        
        printf("(%d,%d)\n",tentativas[contador],tentativas[contador+1]); 
        contador++;
    }
}

void marcador(int tabuleiro[][100],int *tentativas,int ntentativas){
    
    int cl,cc,contador;
    
    for(contador=0;contador<(ntentativas*2);contador++){
        
        cl=tentativas[contador]-1;

        cc=tentativas[contador+1]-1;
        
        contador++;
        
        if(tabuleiro[cl][cc] =='#'){
            
            tabuleiro[cl][cc]= '1';
        }

        else
            continue;
    }
    
}


//////////////////////////////////////




// int verifica(int tabuleiro[][100]){

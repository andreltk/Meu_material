#include <stdio.h>

int sorteio (int nl);

int main(){
    
    int nl,nf;
    
        nf=1;
        
        do{
        scanf("%d",&nl);
        if(nl!=0){
            printf("Teste %d\n%d\n\n",nf,sorteio(nl));
            nf++;
        }
        }while(nl!=0);
        return 0;
    }

    int sorteio (int nl){
        
        int c,no[nl],c1,aux;
        
        
        for(c=0;c<nl;c++){
            scanf("%d",&no[c]);
                
        }    
        for(c=0;c<nl;c++){
            
            if(no[c]==(c+1)) {
                return (c+1);
            }
        }
        
        
    }
    

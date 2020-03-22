#include <stdio.h>

int somaDivisores(int n);


int main(){
    
    int n,x;
    
    scanf("%d",&n);
    printf("%d = ",n);
    
    x = somaDivisores(n);
    
    printf("= %d ",x);
    
    if(x==n) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    
    return 0;
}

int somaDivisores(int n){
    
    int nc,n1,aux;
    n1=0;
    for(nc=1;nc<n;nc++){
        
        if ((n%nc)==0){
            if(nc>1) printf("+ "); 
            printf("%d ",nc);
            aux=nc;
            n1+=aux;
        }
        
    }
//     printf("%d ",n1);
    return n1;
}    
    
    
    
    
    

#include <stdio.h>

int somaDivisores(int n);


int main(){
    
    int n,x;
    
    scanf("%d",&n);
    printf("%d = ",n);
    
    x=somaDivisores(int n);
    
    printf(" = %d ",x);
    
    if(x==n) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    
    return 0;
}

int somaDivisores(int n){
    
    int nc,aux;
    
    for(nc=1;nc<n;nc++){
        
        if ((n%nc)==0){
            printf("%d + ",nc);
            
        }
    }
//     printf("\b \b");
    return nc;
}    
    
    
    
    
    

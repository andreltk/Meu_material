#include <stdio.h>

int main() {
    
    int N,n[5000],y,x,i,in,ci,c,c2,c3;
    
    
    scanf("%d",&N);
        
        for(c=0; c<N;c++)
            scanf("%d",&n[c]);
    
        y=0;
        for(c=0; c<N;c++){
            
            x=n[c];
            y+=x;
        }
        printf("%d\n",y);
            
     return 0;
        }
        
        

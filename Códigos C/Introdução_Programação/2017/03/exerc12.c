#include <stdio.h>

#define u N-1
#define lim 1000
int main() {
    
    
    int N,V[lim],y,x,i,c,c1,c2;
    
    scanf("%d",&N);
    for(c=0;c<N;c++)    
    	scanf("%d",&V[c]);
        
        //Parte maior
        for(c2=N;c2>0;c2--){
           
           c1=1;
           
        for(c=0; c1<c2;c++){
            
            x=V[c];
            y=V[c1];
            
            if(x>y){
                
                i=x;
                x=y;
                y=i;
                
                V[c]=x;
                V[c1]=y;
                
               
            }
              c1++;
        }
        } 
        for(c=0;c<N;c++){
        printf("%d\n",V[c]);
    }
    return 0;
}




#include <stdio.h>

#define u N-1
#define lim 1000000
int main() {
    
    
    int N,c,c1,c2,V[lim],i,x,y,z,a;
    
    scanf("%d",&N);
    
    for(c=0;c<N;c++)    
        scanf("%d",&V[c]);
//ordenação
    
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
    //decisão         
        c1=0;
        
        for(c=1; c<(u);c++){
            
            x=V[c-1];
            y=V[c];
            z=V[c+1];
            
          // printf("x= %d y=%d z=%d\n",x,y,z);
           
            if(y!=x && y!=z)
            c1++;
           	//printf("Sim\n");
            }
            //Primeiro elemento
            c=1;
            x=V[c-1];
            y=V[c];
            if(x!=y)
            c1++;
            
            //Ultimo elemento
            
            c=u;
            x=V[c-1];
            y=V[c];
            if(y!=x)
            c1++;
            
            printf("%d\n",c1);


        return 0;
}



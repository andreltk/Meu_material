#include <stdio.h>

#define u N-1
#define lim 1000000
int main() {
    
    
    int N,V[lim],v[lim],y,x,i,c,c1,c2,c3;
    
    scanf("%d",&N);
    for(c=0;c<N;c++)    
        scanf("%d",&V[c]);
    
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
    
    
    
    //
    c1=1;
    c2=1;
    for(c=0;c1<N;c++){    
            
            x=V[c];
            y=V[c1];
            
            if(y==x)
              c2++;
            
            else{
            v[c3]=V[c-1];
	    	c3++;
           	v[c3]=c2;
           	c3++;
           	c2=1;
           	}
           	}
           	
        c2=1;
        for(c=0;c1<(N*2);c+=2){
            
            x=v[c];
            y=v[c1];
            
            if(x>y){
                
                i=x;
                x=y;
                y=i;
                                
                
            }
            c1+=2;
           	 }
           	 
       for(c=1;c<(N*2);c+=2){
       		x=v[c];    
       		printf("%d\n",x);
        	if(x==y)
        	printf("%d\n%d\n",v[c-1],y);   	 
        }
        
        return 0;
}



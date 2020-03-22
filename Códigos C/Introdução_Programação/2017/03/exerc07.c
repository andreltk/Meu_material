#include <stdio.h>

int main()
{
    
    int N,n[5000],n1[5000],n2[5000],y,x,i,in=0,c,c1=1,c2,c3,c4,c5=0;
    
    
    do{
        scanf("%d",&N);
        
        printf("N = %d",N);
        
        if(N>0){
        
        for(c=0;c<N;c++)
        scanf("%d",&n[c+in]);
        
        
        for(c=0; c1<N;c++){
            
            x=n[c+in];
            y=n[c1+in];
            
            if(x>y){
                
                i=x;
                x=y;
                y=i;
                
                n[c+in]=x;
                n[c1+in]=y;
                
                c1++;
            }
        }
        for(c2=0;c2<=y;c2++){
            
            for(c3=0;c3<N;c++){
                
                x=n[c3+in];
            
                if(x<=c2)
            	c4++;
            }
            n1[c5]=c2;
            n2[c5]=c4;
            c5++;
            }
            
        }
        in+=N;
        else break;

    }while(N>0);
     
printf("(%d) %d\n",c,c4);
     
    return 0;
}

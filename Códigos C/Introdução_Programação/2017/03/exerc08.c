#include <stdio.h>

int main() {
    
    int N,n[5000],y,x,i[64],in,ci,c,c1,c2,c3;
    
    c=0;
    while(scanf("%d",&n[c])!=EOF)
        c++;
   
    
       for(c1=0;c1<c;c1++){
        
        y=n[c1];
        if(y>0){
        for(c2=0;y>0;c2++){
            
            i[c2]=y%2;
            y/=2;
      
        }
          
        for(c3=c2-1;c3>=0;c3--){
                     
         printf("%d",i[c3]);
                     
    }
        }
       else printf("0");
        printf("\n");
    }
    return 0;
}



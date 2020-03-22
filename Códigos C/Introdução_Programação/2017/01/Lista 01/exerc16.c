#include <stdio.h>
#include <math.h>
int main(){

    
    int nl,n1,n2,n3,n4,n5,n6,n7,n8,c1,c2,c3,c4,c5,c6,c7,c8;
    
        
    scanf("%d",&nl);
    if (nl>255||nl<0) { 
        printf ("Numero invalido!\n");
        return 0;
    }
    else {
        
        c8=nl%2;
            
        n7=nl/2;
        c7=n7%2;
        
        n6=n7/2;
        c6=n6%2;
        
        n5=n6/2;
        c5=n5%2;
        
        n4=n5/2;
        c4=n4%2;
        
        n3=n4/2;
        c3=n3%2;
        
        n2=n3/2;
        c2=n2%2;
        
        n1=n2/2;
        c1=n1%2;
        
        
        printf("%d%d%d%d%d%d%d%d\n",c1,c2,c3,c4,c5,c6,c7,c8);
    }
    

    
 return 0;
    }

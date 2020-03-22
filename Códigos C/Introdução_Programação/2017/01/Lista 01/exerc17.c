#include <stdio.h>
#include <math.h>
int main(){

    float nl,n1,n2,n3;
    int c1 ,c2 ,c3;
        
    scanf("%f",&nl);
        
    c3=(nl/10.0)*10;
    n3=nl-c3;
    
    c2=(nl/100.0)*100;
    n2=(nl-c2)/10;
    
    c1=(nl/100);
    
    
    
    printf("%d %d %d\n",n1,n2,c3);
    
 return 0;
    }

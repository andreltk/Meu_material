#include <stdio.h>
#include <math.h>
int main(){

    float nlc;
    int nl ,n1 ,n2 ,n3 ,nc ,nf;
        
    scanf("%d",&nl);
        
    n1=(nl/100);
    n2=((nl/10)-(n1*10));
    n3=nl-((n1*100)+(n2*10));
    nc=n1+(n2*3)+(n3*5);
    nf=(nl*10)+(nc%7);
    
    printf("O NOVO NUMERO E = %d\n",nf);
    
 return 0;
    }

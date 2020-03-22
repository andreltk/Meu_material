#include <stdio.h>

int main(){
    
    float vl1,vl2;
    int nl,hr,tr;
    
    scanf("%d",&nl);
 
    tr= nl/3;
    hr= nl%3;
    
    vl1=(nl*5.00);
    vl2=((tr*10.00)+(hr*5.00));
    
    if ( nl <= 3){
        
        printf ("O VALOR A PAGAR E = %.2f\n",vl1);
}
    
    else {
        printf ("O VALOR A PAGAR E = %.2f\n",vl2);
    }

    return 0;
}
    

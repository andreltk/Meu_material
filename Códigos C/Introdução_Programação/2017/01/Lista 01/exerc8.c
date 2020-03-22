#include <stdio.h>

int main(){
    float h;
    float ah;
    float ap;
    float ab;
    float v;
    
    scanf("%f",& h);
    scanf("%f",& ah);
    
    ab= (3*(ah*ah)*1.73)/2;
    v= (1/3)*ab*h;
    
    
    printf ("O VOLUME DA PIRAMIDE E = %f METROS CUBICOS\n",v);
    }


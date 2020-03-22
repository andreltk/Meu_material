#include <stdio.h>
#include <math.h>
int main(){

    float prf;
    float pd;
    float pi;
    float pdc;
    float pic;
    float z;
        
    scanf("%f",&prf);
    scanf("%f",&pd);
    scanf("%f",&pi);
    
    pdc=prf*(pd*100);
    pic=prf*(pi*100);
    z=prf+pdc+pic;
    
    printf("O VALOR DO CARRO E = %.2f\n",pdc);
    
 return 0;
    }

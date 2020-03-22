#include <stdio.h>
#include <math.h>
int main(){

    float l1;
    float l2;
    float l3;
    float t;
    float a;
    
    scanf("%f",&l1);
    
    scanf("%f",&l2);
    
    scanf("%f",&l3);
    
    t=(l1+l2+l3)/2;
    a=sqrt(t*((t-l1)*(t-l2)*(t-l3)));
    
    printf("AREA DO TRIANGULO E = %.2f\n",a);
    
 return 0;
    }

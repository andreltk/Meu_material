#include <stdio.h>
#include <math.h>

int main(){
    
    float a,b,c,delta,x1,x2;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    
    delta = ((b*b)-(4*a*c));
    
    if (delta < 0){
        printf("RAIZES IMAGINARIAS\n");
    }
    else if (delta == 0){
        
        x1=((b-(b+b))+(sqrt(delta)))/(a*2);
        
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f\n",x1);
    }
    else{
        
        x1=((b-(b+b))+(sqrt(delta)))/(a*2);
        
        x2=((b-(b+b))-(sqrt(delta)))/(a*2);

        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2f\n",x1);
        printf("X2 = %.2f\n",x2);
    }

    return 0;
}
    

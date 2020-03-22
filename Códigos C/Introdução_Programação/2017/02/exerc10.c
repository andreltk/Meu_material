#include <stdio.h>
#include <math.h>

int raizesEq2Grau(int a,int b,int c);


int main(){
    
    int a,b,c;
    float delta,n,x1,x2;
    
    scanf("%d%d%d",&a,&b,&c);
    
    delta=(b*b)-(4*a*c);
    
    n=raizesEq2Grau(a,b,c);
    
    
    if(n==0) printf("RAIZES IMAGINARIAS\n");
    else if(n==1){
        
        printf("RAIZ UNICA\n");
        
        x1=((-b)+sqrt(delta))/(2*a);
        
        printf("X1 = %.2f\n",x1);
    }
    else if(n==2){
        printf("RAIZES DISTINTAS\n");
        
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);
        
        printf("X1 = %.2f\n",x1);
        printf("X2 = %.2f\n",x2);
        

    }
}
    
    int raizesEq2Grau(int a,int b,int c){
        
        int delta,x1,x2;
        
        delta=(b*b)-4*a*c;
        
        if(delta<0) return 0;
        else if(delta==0) return 1;
        else if(delta>0) return 2;
        
    }    
    
    
    
    
    

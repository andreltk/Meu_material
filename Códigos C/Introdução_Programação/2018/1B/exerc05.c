#include<stdio.h>
#include<math.h>


int main(){
    
    float a,a1,a2,a3,t,vf;
   
    
    scanf("%f""%f""%f",&a1,&a2,&a3);
    
    t=(a1+a2+a3)/2;
    a=t*(t-a1)*(t-a2)*(t-a3);
    vf=sqrt(a);
    
    printf("AREA DO TRIANGULO E = %.2f\n",vf);
}

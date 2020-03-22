#include<stdio.h>

int main(){
    
    float sal,reaj;
    
    scanf("%f",&sal);
    
    if(sal<301){
        
        reaj=sal+(sal*0.5);
    }
    else
        reaj=sal+(sal*0.3);
    
    printf("SALARIO COM REAJUSTE = %.2f\n",reaj);
}

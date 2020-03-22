#include<stdio.h>

int main(){
    
    float x;
    
    scanf("%d",&x);
    
    if(x<1)
        y=x;
    if(x==1)
        y=0;
    if(x>1)
        y=x*x;
    
    printf("Y = %d\n",y);
}

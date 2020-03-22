#include<stdio.h>
#include<math.h>


int main(){
    
    long int x,f;
    
    scanf("%ld",&x);
    
    printf("%d! = ",x);
    
    for(f=1;x>1;x=x-1)
        f=f*x;

    
    printf("%d\n",f);
    
    
}

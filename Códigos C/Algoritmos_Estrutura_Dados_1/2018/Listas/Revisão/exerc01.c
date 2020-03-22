#include<stdio.h>

#define primeira 1986


int atual,proximo;

int main(){
    
    scanf("%d",&atual);
    
    for(proximo=primeira;proximo<=atual;proximo+=76){
        

        if(proximo==atual){
            
            printf("%d\n",proximo+76);
            
            return 0;
            
        }
        
    }
    
    printf("%d\n",proximo);
    
    
    
}

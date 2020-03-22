#include<stdio.h>

int main(){
    
    int contador,max,inteiro,inteiro1;
    
    scanf("%d",&max);

    for(contador=0;contador<max;contador++){
        
        scanf("%d",&inteiro);
        
        inteiro1=(inteiro/1000)+(((inteiro%1000)/100)*10)+((inteiro%100)/10)*100+(inteiro%10)*1000;
        
       
        if(inteiro==inteiro1)
            printf("S\n");
        
        else
            printf("N\n");
    }
    

    
}

//Feito por André Luiz

#include<stdio.h>

int main(){
    
    int ano, proxima;
    
    scanf("%d",&ano);
    
    proxima = 10;
    
    while(proxima <= ano){
        
        proxima += 76;
        //printf("\t%d\n",proxima);

    }    

    printf("%d\n",proxima);

}

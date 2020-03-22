#include<stdio.h>

int main(){
    
    int x,y,nr,c;
    
    scanf("%d" "%d",&x,&y);
    
    if(x%2==0){
        
        nr=x;
        
        for(c=0;c<y;c++){
            if(c>0)
                printf(" ");
            
            printf("%d",nr);
            nr=nr+2;
            
        }
            printf("\n");
    }

    else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
}

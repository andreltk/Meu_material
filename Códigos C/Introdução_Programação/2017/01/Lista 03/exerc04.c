#include<stdio.h>
#include<math.h>
int main(){
 
    int X,Y,np,nr;
    float templ,tempc;
    
    scanf("%d %d",&X,&Y);
    
    if (X%2==0){
        np=Y;
        nr=1;
        printf("%d ",X);
        
        while(nr<Y){
           
            X=X+2;
                   
            printf("%d ",X);
            
            nr++;
        }
        printf("\n");
    }
    else printf("O PRIMEIRO NUMERO NAO E PAR\n");
        
  
    return 0;
  }

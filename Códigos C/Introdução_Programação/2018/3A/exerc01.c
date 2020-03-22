#include<stdio.h>

int main(){
    
    int n,c,c1,c2;
    char x[52],y[52];
    
    scanf("%d",&n);
    
    
    for(c=0;c<n;c++){
        
        for(c1=0;c1<51;c1++){
            
            x[c1]=y[c1]='\0';
            
        }
        
        
        
        scanf("%s""%s",x,y); 
        
        
        for(c1=0;x[c1]!='\0' || y[c1]!='\0';c1++){
            
            if(x[c1]!='\0');{
                printf("%c",x[c1]);
            }
            
            if(y[c1]!='\0'){
                printf("%c",y[c1]);
            }
        }
        printf("\n");
        
    }
    
    
    
}

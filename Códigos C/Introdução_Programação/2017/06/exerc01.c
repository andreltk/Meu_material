#include <stdio.h>
#include <stdlib.h>

int conv(char* A);

int main(int argc,char *argv[]){
    
    int a,b,c,nf;
    
    if(argc==3){
        
        a=conv(argv[1]);
        b=conv(argv[2]);
        
        if(a<b){
            
            for(c=0;nf<=b;c++){
                
                if(c>0) printf(", ");
                nf=a+c;
                printf("%d",nf);
            }
        }    
        else{
            
            for(c=0;nf>b;c++){
                if(c>0) printf(", ");
                nf=a-c;
                printf("%d",nf);
            }
            printf("\n");
        }
        printf("\n");
    }
    else printf("seq [número inteiro] [número inteiro]\n");
    
    
    return 0;
}

int conv(char* A){
    
    int ts,c,nf,cd,nc;
    
    cd=1;
    nf=0;
    
    for(ts=0;A[ts]!='\0';ts++);
    
    if(ts>1){
        
        for(c=ts;c>=0;c--){
            
            nc=(int)A[c-1]-48;
            nf=nf+(nc*cd);
            cd*=10;
            printf("FM() %d\n",nc);
            printf("Loop %d\n",c);
            
            return nf;
            
        }
    }
    else{
        
        nc=(int)A[0]-48;
        printf("F() %d\n",nc);
        
        return nc;
    }   
    
}

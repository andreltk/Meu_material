#include<stdio.h>

int main(){
    
    int c,cc,cl,lmtc,lmtl,lg,vb;
    int m[100][100];
    
    
    
    scanf("%d""%d""%d""%d",&lmtc,&lmtl,&lg,&vb);
    

    
    for(cl=0;cl<lmtc;cl++){
        for(cc=0;cc<lmtc;cc++){
            m[cl][cc]=0;
        }
        
    }
    
    
//////////////////////////////////////Faz colunas
    for(cl=0;cl<lmtl;cl++){
        
        for(cc=0;cc<lg;cc++){
            m[cl][cc]=vb;
        }
        for(cc=(lmtc-1);cc>(lmtc-lg-1);cc--){
            m[cl][cc]=vb;
            
        }
    }
//////////////////////////////////////Faz linhas    
   for(cc=0;cc<lmtc;cc++){
        for(cl=0;cl<lg;cl++){
            
            m[cl][cc]=vb;
        }
        for(cl=(lmtl-1);cl>lmtl-lg-1;cl--){
            
            m[cl][cc]=vb;
            
        }
    }
    

    printf("P2\n%d %d\n255\n",lmtc,lmtl);
    
    for(cl=0;cl<lmtl;cl++){
        for(cc=0;cc<lmtc;cc++){
            
            if(c>1)
                printf(" ");
            
            printf("%d",m[cl][cc]);
            
        }
    
        printf("\n");
    }
    
    
}

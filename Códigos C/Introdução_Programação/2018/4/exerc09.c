    #include<stdio.h>
    
    int main(){
        
        int c,cc,cl,lmtl,lmtc;
        float m[1000][1000],d;
        
        do{
            scanf("%d",&lmtl);
        }while(lmtl<1);
        
        
        do{
            scanf("%d",&lmtc);
        }while(lmtc<1);
        
        c=1;
        
        for(cl=0;cl<lmtl;cl++){
            
            for(cc=0;cc<lmtc;cc++){
                
                if((cl+cc)%2==0)
                    m[cl][cc]=0;
                
                else{
                    m[cl][cc]=c;
                    c++;
                    
                }
            }
        }
        
        for(cl=0;cl<lmtl;cl++){
            
            for(cc=0;cc<lmtc;cc++){
                if(cc>0)
                    printf(" ");
                printf("%.0f",m[cl][cc]);
            }
            printf("\n");
        }
    }
    

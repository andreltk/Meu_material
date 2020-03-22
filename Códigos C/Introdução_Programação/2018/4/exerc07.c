#include<stdio.h>

int main(){
    
    int c,cc,cl,lmtl,lmtc;
    float m[6][6],md[16],sm;
    
    lmtl=lmtc=6;
    
    for(cl=0;cl<lmtl;cl++){
        for(cc=0;cc<lmtc;cc++){
            scanf("%f",&m[cl][cc]);
        }
    } 
    
    for(c=0;c<16;c++){
        md[c]=0;
    }
    
    c=sm=0;
    
    for(cl=0;cl<4;cl++){
        for(cc=0;cc<4;cc++){
            
            md[c]=m[cl][cc]+m[cl][cc+1]+m[cl][cc+2]+m[cl+1][cc+1]+m[cl+2][cc]+m[cl+2][cc+1]+m[cl+2][cc+2];  
            
//             printf("C = %d MD = %f\n",c,md[c]);
            
            c++;
        }
    }
    
    sm=md[0];
    
    for(c=0;c<16;c++){
        
        if(md[c]>sm)
            sm=md[c];
    }
    
    printf("%.0f\n",sm);
    
}

#include<stdio.h>

double le_numero();

int main(){
    
    int c,nt;
    double nl,nf;
    
    scanf("%d",&nt);
    
    nl=0;
    
    for(c=0;c<nt;c++){
        
        nl+=le_numero();
//         printf("%lf\n",nl);
    }

    nf=nl/(double)nt;
    
    printf("%.2lf\n",nf);
        
    
    
}

double le_numero(){
    
    
    double x;
    
    scanf("%lf",&x);
    
    return x;
    
}

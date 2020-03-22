#include <stdio.h>

int main(){
    
    int hr,pc,hc;
    float vt;

    scanf("%d",&hr);
    
    //pc=hr/3
    if (hr%3 == 0){
        
        vt=hr*10.00;
        
        printf("O VALOR A PAGAR E = %.2f\n",vt);
        
    }
    else{
        pc=hr/3;
        hc=hr%3;
        //tentar com 10.0
        vt=(pc*10)+(hc*5.0);
        printf("O VALOR A PAGAR E = %.2f\n",vt);
            
    }
    return 0;
}
    

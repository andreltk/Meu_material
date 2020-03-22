#include <stdio.h>

int main(){
    
    float sl,sr;
    
    
    scanf("%f",&sl);
 
    if ( sl<=300){
        
        sr=sl+(sl/2);
        
        printf ("SALARIO COM REAJUSTE = %.2f\n",sr);
    }
    else{
        
        sr=sl+(sl*0.30);
        printf ("SALARIO COM REAJUSTE = %.2f\n",sr);
    }
    return 0;
}
    

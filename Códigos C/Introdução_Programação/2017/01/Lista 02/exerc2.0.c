#include <stdio.h>

int main(){
    
    char t;
    float cont, cons, valor;
    
    scanf("%f",&cont);
    scanf("%f",&cons);
    scanf("%c",&t);
    
    if (t=='R'||t=='r'){
        
        valor= (5.0+(cons*0.05));
        
        printf("CONTA = %f",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
    }
    //
    else if (t=='C'||t=='c'){
        
        if (cons>80){
            
        valor=500.0;
        
        printf("CONTA = %f",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
        else{
            valor=500.0+(cons*0.25);
            
            printf("CONTA = %f",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
    
    }
    else if (t=='I'||t=='i'){
        
        if (cons>100){
            
        valor=800.0;
        
        printf("CONTA = %f",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
        
        else{
            valor=000.0+(cons*0.04);
            
            printf("CONTA = %f",cont);
            printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
                }
            }
        }

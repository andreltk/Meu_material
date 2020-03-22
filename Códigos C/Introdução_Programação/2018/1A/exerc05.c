#include <stdio.h>

int main(){
    
    char t;
    float cons, valor;
    int cont;
    
    scanf("%d",&cont);
    scanf("%f",&cons);
    scanf("\n%c",&t);
    
    if (t=='R'||t=='r'){
        
        valor= (5.0+(cons*0.05));
        
        printf("CONTA = %d\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
    }
    //
    else if (t=='C'||t=='c'){
        
        if (cons<81){
            
        valor=500.0;
        
        printf("CONTA = %d\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
        else{
            valor=500.0+((cons-80)*0.25);
            
            printf("CONTA = %d\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
    
    }
    else if (t=='I'||t=='i'){
        
        if (cons<101){
            
        valor=800.0;
        
        printf("CONTA = %d\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
        }
        
        else{
            valor=800.0+((cons-100)*0.04);
            
            printf("CONTA = %d\n",cont);
            printf("VALOR DA CONTA = %.2f\n",valor);
        
        return 0;
                }
            }
        }

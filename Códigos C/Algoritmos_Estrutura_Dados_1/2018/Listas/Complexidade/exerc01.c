
#include <stdio.h>

long int mdc(long int x, long int y);

int main(){
    
    long int numero,k,contador;
    
    while(1>0){
        
        scanf("%ld",&numero);
        
        if(numero == 0)
            return 0;
        
        for(contador=1;;contador++){
            
            for(k=0;k<contador;k++){
                
                if(mdc(k,contador) == 1) 
                    numero--;
                
                if(numero <= 0)
                    break;
            }
            
            if(k==1 && contador ==1) 
                numero--;
            if(numero <= 0)
                break;
        }
        
        printf("%ld/%ld\n",k,contador);
        
    }
}

long int mdc(long int x, long int y){
    
    if (x%y == 0)
        return y;
    
    else
        return mdc(y,x%y);
    
}

#include<stdio.h>

#define MAX 1000

int main(){
    
    char mina[MAX];
    int testes,contador,contador2,resultados,auxiliar;
    
    scanf("%d",&testes);
    
    
    for(contador=0;contador<testes;contador++){
        
        scanf("\n%[^\n]s",mina);
        
        resultados=0;
        
        for(contador2=0;mina[contador2] != '\0';contador2++){
            
            
            if(mina[contador2] == '<'){
                
                auxiliar=contador2;
                
                while(1){
                    
                    auxiliar++;
                    
                    if(mina[auxiliar] == '\0')
                        break;
                    
                    if(mina[auxiliar] == '>'){
                        
                        mina[contador] = '$';
                        mina [auxiliar] = '$';
                        resultados++;
                        break;
                    }
                }
                
            }
        }
//         printf("%s\n",mina);
        printf("%d\n",resultados);
        
    }
}

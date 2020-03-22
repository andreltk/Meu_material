#include<stdio.h>

int main(){
    
    int contador,contador1,nmrteste,vogais;
    char frase[1000];
    
    scanf("%d",&nmrteste);
    
    for(contador=0;contador<nmrteste;contador++){
        
        scanf("\n%[^\n]s",frase);
        
        vogais=0;
        
        for(contador1=0; frase[contador1] !='\0';contador1++){
            
            if(frase[contador1] == 'A')
                vogais++;
            
            if(frase[contador1] == 'E')
                vogais++;
            
            if(frase[contador1] == 'I')
                vogais++;
            
            if(frase[contador1] == 'O')
                vogais++;
            
            if(frase[contador1] == 'U')
                vogais++;
            
            if(frase[contador1] == 'a')
                vogais++;
            
            if(frase[contador1] == 'e')
                vogais++;
            
            if(frase[contador1] == 'i')
                vogais++;
            
            if(frase[contador1] == 'o')
                vogais++;
            
            if(frase[contador1] == 'u')
                vogais++;
            
        }
        
        printf("%d\n",vogais);
    }
    
}

#include<stdio.h>
#include <stdlib.h>
int pc(char x, char *s);

int main(){
    
    int c,nt,x;
    char f[500],p; 
    
    scanf("%d",&nt);
    
    for(c=0;c<nt;c++){
        scanf("\n%c" "%[^\n]s",&p,f);
        
        x=pc(p,f);
        
        if(x!=-1)
            printf("Caractere %c encontrado no indice %d da string.\n",p,x);
        
        if(x==-1)
            printf("Caractere %c nao encontrado.\n",p);
        
    }
}


char * pc(char x, char *s){
    
    int c;
    
    for(c=0;*(s+c)!='\0';c++){
        
        if((s+c)==x)
            return x;
    }
    return -1;
    
}





}    



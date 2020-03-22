#include<stdio.h>
#include <stdlib.h>
char * crvt(int n, char *s);

int main(){
    
    int c,nt,p;
    char f[500],*fp; 
    
    scanf("%d",&nt);
    
    for(c=0;c<nt;c++){
        scanf("%d" "\n%[^\n]s",&p,f);
        
        fp=crvt(p,f);
        
        printf("%s\n",fp);
        
        free(fp);
        
    }
}


char * crvt(int n, char *s){
    
    int c;
    char* f;
    
    if(n)
    
    f=malloc(n*sizeof(char));
    
    for(c=0;c<n;c++){
        
        *(f+c)=*(s+c);
    }
    
    return f;
    
    
    
    
    
    
    
}    



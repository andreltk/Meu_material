#include<stdio.h>

int le_string(char *s);

int letras(char *f,int t);

int vogais(char *f,int t);

int main(){
    
    int c,nt,tt;
    char f[10000]; 
    
    scanf("%d",&nt);
    
    for(c=0;c<nt;c++){
        
        
//         printf("V\n");
        tt=le_string(f);    
        
//         printf("Vei\n");
//         
        printf("Letras = %d\n",letras(f,tt));
        
        printf("Vogais = %d\n",vogais(f,tt));
        
        printf("Consoantes = %d\n",letras(f,tt)-vogais(f,tt));
        
    }
    
    
    
}

int le_string(char *s){
    
    int c;
    
//     printf("Ve\n");
    
    scanf("\n%[^\n]s",s);
    
    for(c=0;*(s+c)!='\0';c++)
        
        return c;
    
}

int letras(char *f,int t){
    
    int x,c,l;
    
    
    for(l=c=0;*(f+c)!='\0';c++){
        
        x=*(f+c);
        
        if(x>64 && x<91)
            l++;
        if(x>96 && x<123)
            l++;
        
    }
    
    return l;
    
}

int vogais(char *f,int t){
    
    int c,l;
    char x;
    
    for(l=c=0;*(f+c)!='\0';c++){
        
        x=*(f+c);
        
        if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u' ||x=='A' ||x=='E' ||x=='I' ||x=='O' || x== 'U')
            l++;
        
    }
    
    return l;
    
}


#include <stdio.h>
#define N 100

void troca_string (char *S, char *A,char *B, char *F);

int main(){
    
    int c;		
    char s[N],a[N],b[N],f[N];
    
    scanf("%[^\n]",s);
    scanf("\n%[^\n]",a);
    scanf("\n%[^\n]",b);
    
    troca_string(s,a,b,f);
    
    printf("%s\n",f);
    
    return 0;
}

void troca_string (char *S, char *A,char *B, char *F){
    
    int c,c1,c2,nec;
    
    c1=0;
    
    for(c=0;S[c]!='\0';c++){
        
        
        if(S[c]!=A[0]){
            F[c1]=S[c];
            c1++;
        }
        
        else{
            
            nec=0;
            for(c2=0;S[c+c2]==A[c2] && A[c2]!='\0';c2++)
                nec++;
            
            if(
            
            
            
            

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
    
    int neb,cc,l,c,c1,c2,i;
    char x,y;	
    
    neb=0;
    cc=1;
    i=0;
    y=B[0];
    
    //Conta elementos de A   
    for(c=0;A[c]!='\0';c++) 
        neb++;
    
    
    //Passa por toda a String S    
    for(c=0;S[c]!='\0';c++){
        printf("%d\n",c);
        //Verifica se existe correspondência e pula o vetor
        if(S[c]==A[0]){
            
            //Vê se os elementos restante são iguais
            for(c1=c;c1<=neb+c;c1++){
                
                if(S[c1]==A[c1-c]){
                    cc++;
                }
                //Olha se todos são iguais
                
                if(cc==neb){
                    F[c+1]='\n';
                    c+=neb;
                    
                    
                }
                else{
                    
                    break;
                }
            }
        }
        else
            F[c]=A[c];                  
        
    }
}





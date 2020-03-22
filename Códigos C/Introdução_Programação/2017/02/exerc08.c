#include<stdio.h>

int separaDigitos(int nl);

int main(){
    
    int nl;
    
    scanf("%d",&nl);
    
    separaDigitos(nl);
    
    
    
    return 0;
    
}
int separaDigitos(int nl){
    
    int n1,n2,n3;
    
        n3=(nl/100);
        n2=(nl-(n3*100))/10;
        n1=(nl-((n3*100)+(n2*10)));
        
        printf("%d%d%d\n",n1,n2,n3);
}

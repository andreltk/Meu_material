#include<stdio.h>

int separaDigitos(int nl);
int inverte(int nl);

int main(){
    
    int c,nl,nl1,nl2,w,z;
    
    scanf("%d",&nl);
    
    int x[nl],y[nl];
    
    for(c=0;c<nl;c++)
    scanf("%d %d",&x[c],&y[c]);
    
    for(c=0;c<nl;c++){
    w=inverte(x[c]);
    z=inverte(y[c]);
    
    if(w>z) printf("%d\n",w);
    else printf("%d\n",z); 
    
    }
    return 0;
    
}
int separaDigitos(int nl){
    
    int nf,n1,n2,n3;
    
        n3=(nl/100);
        n2=(nl-(n3*100))/10;
        n1=(nl-((n3*100)+(n2*10)));
        
        return ((n1*100)+(n2*10)+n3);
        
}

int inverte(int n){
    
    return separaDigitos(n);
}

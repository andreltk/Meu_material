#include<stdio.h>

int fibo(int ini,int ini2,int ini3, int cont,int termo);

int main(){
    
    int n;
    
    scanf("%d",&n);
    
    printf("%d\n",fibo(1,1,2,1,n));
    
}

int fibo(int ini,int ini2,int ini3,int cont,int termo){
    
    if(cont==termo)
        return ini2;
    
    ini3=ini2+ini;
//     printf("\t->\t%d\n",ini3);
    
    fibo(ini3,ini,0,cont+1,termo);
}

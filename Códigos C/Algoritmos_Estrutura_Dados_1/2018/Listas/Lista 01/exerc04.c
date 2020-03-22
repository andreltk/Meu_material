#include<stdio.h>

int testa(int n,int k,int t,int ini,int fim);

int main(){
    
    int cap,bal;
    
    scanf("%d""%d",&cap,&bal);
    
    printf("%d\n",testa(cap,bal,1,1,cap));
    
    
    
}


int testa(int n,int k,int t,int ini,int fim){
    
    int tt;
    
    if(fim%2 == 0)
        fim-=1;
    
    tt=(ini+fim)/2;
    
    if(fim-ini == 1 || k == 0){
        
        if(n == 20)
            return 0;
        
        else
            return t;
    }
    
    
    else
        return testa(n,k-1,t+1,1,tt);
    
}

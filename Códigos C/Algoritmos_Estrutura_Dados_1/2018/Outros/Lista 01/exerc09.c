#include<stdio.h>

unsigned int ack(int m,int n);

int main(){
    
    int m,n;
    
    scanf("%d""%d",&m,&n);
    
    printf("%d\n",ack(m,n));

    
}

unsigned int ack(int m , int n){
    
    if(m==0){
        
        return n+1;
        
    }
    
    else if(n==0 && m>0){
        
        return ack(m-1,1);
    }

    else if(n>0 && m>0){
        
        return ack(m-1,ack(m,n-1));
    }
}

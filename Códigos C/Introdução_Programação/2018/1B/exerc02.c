#include<stdio.h>

int main(){
    
    int c;
    long int a,b,pa,pb;
    
    scanf("%ld""%ld",&a,&b);
    
    pa=a;
    pb=b;
    
    for(c=0;pa<=pb;c++){
        
        pa+=(pa*0.03);
        pb+=(pb*0.015);
        
        
    }
    
    printf("ANOS = %d\n",c);
    
    
    
}

#include <stdio.h>


/**
 * 2
 * Retorna o n-ésimo termo da sequência de Fibonacci
 * 3
 * @param t1 primeiro termo da sequência
 * 4
 * @param t2 segundo termo da sequência
 * 5
 * @param n a posição do termo desejado da sequência
 * 6
 * @return o valor do n-ésimo termo da sequência
 * 7
 */

int fibonacci( int t1, int t2, int n);



int main(){
    
    int n,t1,t2;
    
    scanf("%d %d %d",&t1,&t2,&n);
    printf("%d\n",fibonacci(t1,t2,n));
    
    
    return 0;
}

int fibonacci( int t1, int t2, int n){
    
    int c,n1,n2,n3,nc,aux;
    n1=t1;
    n2=t2;
    for(c=2;c<n;c++){
                
        n3=n1+n2;
        n1=n2;
        n2=n3;
    
    }
    
    return n3;
    
    
    
    
}


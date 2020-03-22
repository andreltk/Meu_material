#include <stdio.h>

/**
 * Função que calcula a raiz quadrada de n.
 * @param n um numero real qualquer
 * @return a raiz quadrada de n
 */

double raiz( double n );

/**
 * Valor absoluto de um numero qualquer
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */

double absoluto( double n );


int main(){
    
    double n,e,x;
    
    scanf("%f",&n);
    
    printf("%f\n",e);
    
}


double absoluto(double n){
    
    if(n>0) return n;
    if(n<0) {
        n=-n;
        return n;
    }
    
}




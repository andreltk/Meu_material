//Feito por André Luiz Teixeira Kohlrausch

//Execício já feito na aula


/*
 * Função Raiz Quadrada
 * 
 * Um interessante problema matemático é o da elaboração de um algoritmo para determinação da raiz
 * quadrada de um número real positivo.
 * O Método de Newton-Raphson é uma das mais conhecidas soluções. A seguir descrevemos, por meio da
 * definição de uma função recursiva f , a expressão capaz de gerar
 * a raiz quadrada de um número real x
 * √ positivo passado como parâmetro para a função, sabendo-se que x = f (x, x/2).
 * 
 */

#include<stdio.h>
#include<math.h>

double raiz(double x,double y,double erro);

double mod(double valor);

int main(){
    
    double x,y,erro;
    
    scanf("%lf""%lf",&x,&erro);
    
    printf("%.6lf\n",raiz(x,1,0.000001));
    
    
}

double raiz(double x,double y,double erro){
    
    if( erro > mod(pow(y,2)- x) ){
        
        return y;
    }
    else
        return raiz(x,((x/y)+y)/2.0,erro);
}

double mod(double valor) {
    if (valor < 0) {
        return -valor;
    }
    else {
        return valor;  
    }
}


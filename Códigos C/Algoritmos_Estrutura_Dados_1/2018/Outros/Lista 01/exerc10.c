#include<stdio.h>
#include<math.h>

double raiz(double x,double y,double erro);

double mod(double valor);

int main(){
    
    double x,y,erro;
    
    scanf("%lf""%lf",&x,&erro);
    
    printf("%.6lf\n",raiz(x,1,erro));
    
    
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

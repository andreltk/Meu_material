#include<stdio.h>
#include<math.h>


int main(){
    
    double ma,aa,te,ve,tr,s;
    
    scanf("%lf""%lf""%lf",&ma,&aa,&te);
    
    
    
    ve=(aa*te)*3.6;
    s=(aa*(te*te))/2.0;
    tr=((ma*1000)*((aa*te)*(aa*te)))/2;
    
    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n",ve,s,tr);
    
   
}

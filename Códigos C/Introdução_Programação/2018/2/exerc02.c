#include<stdio.h>

int class_aco(float cd,float dr,float rt);

int main(){
    
    double a,b,c;
    
    scanf("%lf""%lf""%lf",&a,&b,&c);
    
    
    printf("ACO DE GRAU = %d\n",class_aco(a,b,c));
    
}

int class_aco(float cd,float dr,float rt){
    
    int x1,x2,x3;
    
    if(cd<7)
        x1=1;
    
    if(dr>50)
        x2=1;
    
    if(rt>80000)
        x3=1;
    
    if(x1==1 && x2==1 && x3==1)
        return 10;
    
    if(x1==1 && x2==1)
        return 9;
    
    if(x1==1)
        return 8;

        return 7;
}

#include<stdio.h>

int E_Triangulo(float a, float b,float c);
float Perimetro(float a, float b,float c);
float areaTrapezio (float a, float b,float c);

int main(){
    
    float a,b,c,r1,r2;
    
    scanf("%f %f %f",&a,&b,&c);
    
    r1=E_Triangulo(a,b,c);
    
    if(r1==1)
        printf("Perimetro = %.1f\n",Perimetro(a,b,c));
    else printf("Area = %.1f\n",areaTrapezio(a,b,c));
    return 0;
    
}
int E_Triangulo(float a, float b,float c){
    
    int c1,c2,c3;
    
    if ((b-c)<a && a<(b+c)) c1=1;
    if ((a-c)<b && b<(a+c)) c2=1;
    if ((a-b)<c && c<(a+b)) c3=1;
    
    if (c1==1 && c2==1 && c3==1){
        
        return 1;
    }
    else {
        return 0;
    }
}
float Perimetro(float a, float b,float c){
    
    float x;
    x=a+b+c;
    return x;
}
float areaTrapezio (float a, float b,float c){
    float x;
    x=((a+b)*c)/2;
    return x;
}

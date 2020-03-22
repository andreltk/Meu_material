#include<stdio.h>

int E_Triangulo(float a, float b,float c);
float Perimetro(float a, float b,float c);
float areaTrapezio (float a, float b,float c);

int main(){
    
  float a,b,c;
  
  scanf("%f %f %f",&a,&b,&c);
  
    return 0;
    
}
int E_Triangulo(float a, float b,float c){

    if ((b-c)<a && a<(b+c)) c1=1;
   if ((a-c)<b && b<(a+c)) c2=1;
   if ((a-b)<c && c<(a+b)) c3=1;
   
   if (c1==1 && c2==1 && c3==1){
       
       x=a+b+c;
       
       printf("Perimetro = %.1f\n",x);
   }
   else {
       x=((a+b)*c)/2;
       
       printf("Area = %.1f\n",x);
}
float Perimetro(float a, float b,float c){

    
}
float areaTrapezio (float a, float b,float c){

    
}

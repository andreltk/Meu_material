#include <stdio.h>

int main(){
    
   float a,b,c,x;
   int c1,c2,c3;
   
   scanf("%f %f %f",&a,&b,&c);
   
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
       
    return 0;
}
    

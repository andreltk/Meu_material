#include<stdio.h>
#include<math.h>


int main(){
    
    float f,db,im,vf;
   
    scanf("%f""%f""%f",&f,&db,&im);
    
    vf=f+(f*(db/100.0))+(f*(im/100.0));
    
    printf("O VALOR DO CARRO E = %.2f\n",vf);
   
}

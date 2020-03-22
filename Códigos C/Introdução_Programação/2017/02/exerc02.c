#include <stdio.h>

float le_numero ();

int main(){
    
    
    
    printf("%.2f\n",le_numero ());
    
    return 0;
}

float le_numero (){
       
    float c1,no,aux,nf;
    int c,nl;
    
   scanf("%d",&nl);
   
   aux=0;
   for(c=0;c<nl;c++){
    scanf("%f",&no);
        
        c1=no+aux;
        aux=c1;
   }
    nf=(float)c1/nl;
    
    return nf;
    
}

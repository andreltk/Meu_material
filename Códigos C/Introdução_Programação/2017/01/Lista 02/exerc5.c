#include <stdio.h>

int main(){
    
    float nt;
    
    
    scanf("%f",&nt);
 
    if ( nt>=0&&nt < 6.0)
        printf ("NOTA = %.1f CONCEITO = D\n",nt);
    
    else if ( nt>=6&&nt < 7.5)
        printf ("NOTA = %.1f CONCEITO = C\n",nt);
    
    else if ( nt>=7.5&&nt < 9.0)
        printf ("NOTA = %.1f CONCEITO = B\n",nt);
    
    else if ( nt>=9&&nt <= 10.0)
        printf ("NOTA = %.1f CONCEITO = A\n",nt);
    
    return 0;
}
    

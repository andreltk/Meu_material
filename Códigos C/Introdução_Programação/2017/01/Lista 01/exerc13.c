#include <stdio.h>
int main(){

    double mass, acel, temp, massc, c, vel, epc, tra;
        
    scanf("%lf",&mass);
    scanf("%lf",&acel);
    scanf("%lf",&temp);
    
    massc=mass*1000;

    vel=(acel*temp);
    epc=(acel*(temp*temp)/2.0);
    tra=(massc*(vel*vel))/2.0;
    
    printf("VELOCIDADE = %.2lf\n",(vel*3.6));
    printf("ESPACO PERCORRIDO = %.2lf\n",epc);
    printf("TRABALHO REALIZADO = %.2lf\n",tra);
    
 return 0;
    }

#include "BCilindroR.h" 

int main(){
    
    float raio,altura,area,volume;
    CilindroR* a1;
    
    printf("\nDigite o raio do cilindro\n");
    scanf("%f",&raio);
    
    printf("\nDigite a altura do cilindro\n");
    scanf("%f",&altura);
  
    a1=novoCilindro();
    
    alteraRaio(a1,raio);
    alteraAltura(a1,altura);
    
    volume=volumeCilindro(a1);
    area=areaCilindro(a1);
    
    printf("\nA altura do cilindro é: %.2f\n",a1->altura);
    
    printf("\nO raio do cilindro é: %.2f\n",a1->raio);

    printf("\nA área do cilindro é: %.2f\n",area);
    
    printf("\nO volume do cilindro é: %.2f\n",volume);

    liberaCilindro(a1);
    
}

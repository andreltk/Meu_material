#include "BCubo.h" 

int main(){
    
    float aresta,area,volume;
    Cubo* a1;
    
    printf("\nDigite a aresta\n");
    
    scanf("%f",&aresta);
    
    a1=novoCubo();
    
    alteraAresta(a1,aresta);
    
    volume=volumeCubo(a1);
    area=areaCubo(a1);
    
    printf("\nA aresta do cubo é: %.2f\n",aresta);
    
    printf("\nA área do cubo é: %.2f\n",area);
    
    printf("\nO volume do cubo é: %.2f\n",volume);

    liberaCubo(a1);
    
}

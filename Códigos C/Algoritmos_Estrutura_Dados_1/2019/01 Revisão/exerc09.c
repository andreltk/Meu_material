//Feito por André Luiz

#define PI 3.1415

#include<stdio.h>

void area_circulo(float raio);

void area_elipse(float raio_maior, float raio_menor);

void area_retangulo(float largura, float comprimento);

void area_trapezio(float base_maior,float base_menor,float altura);

int main(){
    
    int testes, contador;
    char tipo;
    float auxiliar_1, auxiliar_2, auxiliar_3;
    
    scanf("%d",&testes);
    
    for(contador = 0; contador < testes; contador++){
        
        scanf("\n %c",&tipo);
        
        if(tipo == 'C'){
            
            scanf("%f",&auxiliar_1);
            
            area_circulo(auxiliar_1);
            
        }
        
        if(tipo == 'E'){
            
            scanf("%f",&auxiliar_1);
            scanf("%f",&auxiliar_2);
            
            area_elipse(auxiliar_1,auxiliar_2);
        }
        
        if(tipo == 'R'){
            
            scanf("%f",&auxiliar_1);
            scanf("%f",&auxiliar_2);
            
            area_retangulo(auxiliar_1,auxiliar_2);
        }
        
        if(tipo == 'T'){
            
            scanf("%f",&auxiliar_1);
            scanf("%f",&auxiliar_2);
            scanf("%f",&auxiliar_3);
            
            area_trapezio(auxiliar_1,auxiliar_2,auxiliar_3);
        }
    }
}

void area_circulo(float raio){
    
    float area;
    
    area = PI * (raio * raio);
    
    printf("CIRCULO %.3f\n",area);
    
}

void area_elipse(float raio_maior, float raio_menor){
    
    float area;
    
    area = raio_maior * raio_menor * PI;
    
    printf("ELIPSE %.3f\n",area);
    
    
}

void area_retangulo(float largura, float comprimento){
    
    float area;
    
    area = largura * comprimento;
    
    printf("RETANGULO %.3f\n",area);
    
}

void area_trapezio(float base_maior,float base_menor,float altura){
    
    
    float area;
    
    area = ((base_maior + base_menor) * altura) / 2.0;
    
    printf("TRAPEZIO %.3f\n",area);
    
}

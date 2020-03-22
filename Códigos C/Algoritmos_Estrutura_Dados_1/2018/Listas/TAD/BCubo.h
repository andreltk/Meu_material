#include<stdio.h>
#include<stdlib.h>

//Tipo cubo 
typedef struct{
    
    float aresta;
    
}Cubo;

//Função cria novo cubo
Cubo* novoCubo();

//Função libera cubo
void liberaCubo(Cubo* x);

//Função altera valor aresta
void alteraAresta(Cubo* x,float valor);

//Função calcula área
float areaCubo(Cubo* x);

//Função calcula volume
float volumeCubo(Cubo* x);






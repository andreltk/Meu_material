#include<stdio.h>
#include<stdlib.h>

#define PI 3.141592

//Tipo cubo 
typedef struct{
    
    float raio;
    float altura;
    
}CilindroR;

//Função cria novo cubo
CilindroR* novoCilindro();

//Função libera cubo
void liberaCilindro(CilindroR* x);

//Função altera valor raio
void alteraRaio(CilindroR* x,float valor);

//Função altera valor altura
void alteraAltura(CilindroR* x,float valor);

//Função calcula área
float areaCilindro(CilindroR* x);

//Função calcula volume
float volumeCilindro(CilindroR* x);






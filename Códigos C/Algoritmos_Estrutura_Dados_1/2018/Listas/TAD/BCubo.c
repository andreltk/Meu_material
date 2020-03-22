#include"BCubo.h"


Cubo* novoCubo(){
    
    return (Cubo*)malloc(sizeof(Cubo));
    
}

void liberaCubo(Cubo* x){
    
    free(x);
}

void alteraAresta(Cubo* x,float valor){
    
    x -> aresta = valor;
}

float valorAresta(Cubo* x){
    
    return x->aresta;

}

float areaCubo(Cubo* x){
    
    float aresta;
    
    aresta = x -> aresta;
    
    return 6*(aresta*aresta);
    }

float volumeCubo(Cubo* x){
    
    float aresta;
    
    aresta = x -> aresta;
    
   return aresta*aresta*aresta;

}



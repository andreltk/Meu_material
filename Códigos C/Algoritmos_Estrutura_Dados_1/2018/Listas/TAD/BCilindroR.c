#include"BCilindroR.h"


CilindroR* novoCilindro(){
    
    return (CilindroR*)malloc(sizeof(CilindroR));
    
}

void liberaCilindro(CilindroR* x){
    
    free(x);
}

void alteraRaio(CilindroR* x,float valor){
    
    x -> raio = valor;
}

void alteraAltura(CilindroR* x,float valor){
    
    x -> altura = valor;
}

float areaCilindro(CilindroR* x){
    
    float areatotal,arealateral,areacirculo,raio,altura;
    
    raio = x -> raio;
    altura = x -> altura;
    
    arealateral = 2*PI*raio*altura;
    
    areacirculo = PI*(raio*raio);
    
    return 2*areacirculo+arealateral;

    
}

float volumeCilindro(CilindroR* x){
    
    float raio,altura;
    
    raio = x -> raio;
    altura = x -> altura;
    
   return PI*altura*(raio*raio);

}



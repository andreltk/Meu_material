//Feito por André Luiz

#include<stdio.h>

#define MAX 100

#define OURO 0
#define PRATA 0
#define BRONZE 0
#define LATAO 0

typedef struct{
    
    int id;
    int ouro;
    int prata;
    int bronze;
    int latao;
    
}pais;

pais* inicializa_paises(int quantidade);

void preenche_medalhas(int * podio);

void organiza_medalhas(int * podio, pais * jogadores);

int main(){
    
    int podio[4];
    int quantidade, modalidades, contador;
    pais * jogadores;
    
    scanf("%d",&quantidade);
    scanf("%d",&modalidades);
    
    jogadores = inicializa_paises(quantidade);
    
    for(contador = 0; contador < modalidades; contador++){
        
        preenche_medalhas(podio);
        organiza_medalhas(podio, jogadores);
        
    }
    
}

pais* inicializa_paises(int quantidade){
    
    int contador;
    pais* auxiliar;
    
    auxiliar = (pais *)malloc(sizeof(pais) * quantidade);
    
    if(auxiliar == NULL)
        exit;
    
    for(contador = 0; contador < quantidade; contador++){
        
        auxiliar[contador]->id = contador + 1;
        
        auxiliar[contador]->ouro = 0;
        auxiliar[contador]->prata = 0;
        auxiliar[contador]->bronze = 0;
        auxiliar[contador]->latao = 0;
        
    }
    
    return auxiliar;
}

void preenche_medalhas(int * podio){
    
    int contador
    
    for(contador = 0; contador < 4; contador++){

        scanf("%d",&podio[])
        
        
    }
}

void organiza_medalhas(int * podio, pais * jogadores);

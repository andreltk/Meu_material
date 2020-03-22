#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_STRINGS 100
#define FALSO 0
#define VERDADEIRO 1

typedef struct{
    int cod;
    char nome[TAM_STRINGS];
    float pcomp;
    float pvenda;
    int avenc;
    int qtd;
    int id;
}Produto;

void Elemento();
void incelem();
void liselem();
void excelem();
void altelem();

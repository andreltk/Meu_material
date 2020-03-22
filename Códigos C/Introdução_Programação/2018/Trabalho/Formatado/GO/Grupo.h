#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Produto.h"

#define TAM_STRINGS 100
#define FALSO 0
#define VERDADEIRO 1

typedef struct{
    int id;
    char nome[TAM_STRINGS];
}Grupo;

void Categoria();
void inccat();
void liscat();
void exccat();



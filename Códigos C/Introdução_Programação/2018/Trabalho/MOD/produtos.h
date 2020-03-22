#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grupos.h"

#define TAM_STRINGS 100
#define FALSO 0
#define VERDADEIRO 1
#define ANO_ATUAL 2018

typedef struct{
	int cod;
	char nome[100];
	float pcomp;
	float pvenda;
	int avenc;
	int qtd;
	int id;
}Produto;

void Produtos();

void consprodutos();

void incprodutos();

void lisprodutos();

void excprodutos();

void altprodutos();

void ordenaNomeProd(Produto Produto[], int tam);

void ordenaIdProd(Produto Produto[], int tam);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"produtos.h"


#define TAM_STRINGS 100
#define FALSO 0
#define VERDADEIRO 1

typedef struct{
	int id;
	char nome[100];
}Grupo;


void Grupos();
void incgrupo();
void lisgrupo();
void excgrupo();
void ordenaNome(Grupo Grupo[], int tam);
void ordenaId(Grupo Grupo[], int tam);
int idexiste(int idprocurado,FILE *grupos);


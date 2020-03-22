#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"

/* IMPLEMENTACAO COM ELEMENTOS EM VETOR */
typedef struct no No;
struct fila {
	int tamanho;
	int maxTamanho;
	No * inicio;
	No * fim;
};
struct no {
	char * elemento;
	struct no * proximo;
};

Fila * fila_cria (int maxTamanho) {
	Fila * q = (Fila *) malloc(sizeof(Fila));
	if (q!=NULL) {
		q->tamanho = 0;
		q->maxTamanho = maxTamanho;
		q->inicio = NULL;
		q->fim    = NULL;
	}
	return q;
}
Fila * fila_copia (Fila * p) {
	return NULL;
}
void fila_libera (Fila * p) {
}
int fila_insere (Fila * p, char * elemento) {
	return 1; // insercao com sucesso	
}
char * fila_remove (Fila * p) {
	return NULL;
}
char * fila_obtem_topo  (Fila * p) {
	return NULL;
}
int fila_obtem_tamanho  (Fila * p) {
	return p->tamanho;
}
int fila_se_vazia (Fila * p) {
	return -1;
}
int fila_se_cheia (Fila * p) {
	return -1;
}
char * fila_imprime  (Fila * p) {
	char * retorno = (char *) malloc(sizeof(char)*10*p->maxTamanho);
	retorno [0] = '\0';
	int tam;
	for (tam = fila_obtem_tamanho(p); tam > 0; tam--) {
		char * aux = fila_remove(p);
		strcat(retorno, aux);
		strcat(retorno, " ");
		fila_insere(p, aux);
	}
	retorno = realloc(retorno, strlen(retorno)+1);
	return retorno;
}

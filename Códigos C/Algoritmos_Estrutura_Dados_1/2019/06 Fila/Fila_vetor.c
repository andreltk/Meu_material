#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"

/* IMPLEMENTACAO COM ELEMENTOS EM VETOR */
struct fila {
	int tamanho, inicio, final;
	int maxTamanho;
	char ** elementos;
};

Fila * fila_cria (int maxTamanho) {
	Fila * q = (Fila *) malloc(sizeof(Fila));
	if (q!=NULL) {
		q->tamanho = 0;
		q->inicio  = 0;
		q->final   = 0;
		q->maxTamanho = maxTamanho;
		q->elementos = (char **) malloc(sizeof(char *) * maxTamanho);
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
char * fila_obtem_primeiro  (Fila * p) {
	return NULL;
}
int fila_obtem_tamanho  (Fila * p) {
	return -1;
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
	int i;
	for (i = p->tamanho; i>0; i--) {
		char * aux = fila_remove(p);
		fila_insere(p, aux);
		strcat(retorno, aux);
		strcat(retorno, " ");
	}
	retorno = realloc(retorno, strlen(retorno)+1);
	return retorno;
}

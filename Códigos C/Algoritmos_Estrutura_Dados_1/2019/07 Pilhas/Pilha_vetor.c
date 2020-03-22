#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

/* IMPLEMENTACAO COM ELEMENTOS EM VETOR */
struct pilha {
	int tamanho;
	int maxTamanho;
	char ** elementos;
};

Pilha * pilha_cria (int maxTamanho) {
	Pilha * q = (Pilha *) malloc(sizeof(Pilha));
	if (q!=NULL) {
		q->tamanho = 0;
		q->maxTamanho = maxTamanho;
		q->elementos = (char **) malloc(sizeof(char *) * maxTamanho);
	}
	return q;
}
Pilha * pilha_copia (Pilha * p) {
	return NULL;
}
void pilha_libera (Pilha * p) {
}
int pilha_insere (Pilha * p, char * elemento) {
	return 1; // insercao com sucesso	
}
char * pilha_remove (Pilha * p) {
	return NULL;
}
char * pilha_obtem_topo  (Pilha * p) {
	return NULL;
}
int pilha_obtem_tamanho  (Pilha * p) {
	return -1;
}
int pilha_se_vazia (Pilha * p) {
	return -1;
}
int pilha_se_cheia (Pilha * p) {
	return -1;	
}
char * pilha_imprime  (Pilha * p) {
	char * aux = (char *) malloc(sizeof(char)*10*p->maxTamanho);
	aux [0] = '\0';
	int i;
	for (i=p->tamanho-1; i>=0; i--) {
		strcat(aux, p->elementos[i]);
		strcat(aux, " ");
	}
	aux = realloc(aux, strlen(aux)+1);
	return aux;
}

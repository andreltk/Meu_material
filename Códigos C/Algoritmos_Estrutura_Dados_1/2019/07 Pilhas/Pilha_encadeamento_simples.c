#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

/* IMPLEMENTACAO COM ELEMENTOS EM VETOR */
typedef struct no No;
struct pilha {
	int tamanho;
	int maxTamanho;
	No * topo;
};
struct no {
	char * elemento;
	struct no * proximo;
};

Pilha * pilha_cria (int maxTamanho) {
	Pilha * q = (Pilha *) malloc(sizeof(Pilha));
	if (q!=NULL) {
		q->tamanho = 0;
		q->maxTamanho = maxTamanho;
		q->topo = NULL;
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
	char * retorno = (char *) malloc(sizeof(char)*10*p->maxTamanho);
	retorno [0] = '\0';
	Pilha * q = pilha_cria(p->maxTamanho);
	while (!pilha_se_vazia(p)) {
		char * aux = pilha_remove(p);
		strcat(retorno, aux);
		strcat(retorno, " ");
		pilha_insere(q, aux);
	}
	while (!pilha_se_vazia(q))
		pilha_insere(p, pilha_remove(q));	
	retorno = realloc(retorno, strlen(retorno)+1);
	return retorno;
}

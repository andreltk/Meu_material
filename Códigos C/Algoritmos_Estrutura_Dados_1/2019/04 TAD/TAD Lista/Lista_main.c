#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main () {
	Lista * p = lista_cria ();
	lista_insere_inicio (p, 11);
	lista_insere_inicio (p, 10);
	lista_insere_inicio (p, 12);
	lista_insere_posicao(p, 22, 3);
	lista_insere_posicao(p, 0, 1);
	lista_insere_final  (p, 99);
	lista_insere_posicao(p, 0, 6);
	lista_insere_posicao(p, 9999, 8);
	int i;
	for (i=1; i<=lista_obtem_tamanho(p); i++)
		printf("[%d]=%d\n", i, lista_obtem_elemento(p, i));
	printf("[tamanho=%d]%s\n", lista_obtem_tamanho(p), lista_imprime(p));
	Lista * q = lista_copia (p);	
	printf("[tamanho=%d]%s\n", lista_obtem_tamanho(q), lista_imprime(q));
	lista_libera(p);
	lista_libera(q);
	return 0;
}

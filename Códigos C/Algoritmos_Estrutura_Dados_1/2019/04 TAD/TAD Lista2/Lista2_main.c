#include <stdio.h>
#include <stdlib.h>
#include "Lista2.h"

int main () {
	Lista * p = lista_cria ();
	lista_insere_inicio (p, elemento_cria("joao", "2222.2222", 2));
	lista_insere_inicio (p, elemento_cria("pedro", "1111.1111", 1));
	lista_insere_inicio (p, elemento_cria("ana", "6666.6666", 6));
	lista_insere_posicao(p, elemento_cria("maria", "4444.4444", 4), 3);
	lista_insere_posicao(p, elemento_cria("lia", "3333.33333", 3), 1);
	lista_insere_final  (p, elemento_cria("paulo", "9999.9999", 9));
	lista_insere_posicao(p, elemento_cria("junior", "7777.7777", 4), 6);
	int i;
	for (i=1; i<=lista_obtem_tamanho(p); i++)
		printf("[%d] %s\n", i, elemento_imprime(lista_obtem_elemento (p, i)));
	Lista * q = lista_copia (p);	
	printf("[tamanho=%d]\n%s\n", lista_obtem_tamanho(q), lista_imprime(q));
	lista_libera(p);
	lista_libera(q);
	return 0;
}
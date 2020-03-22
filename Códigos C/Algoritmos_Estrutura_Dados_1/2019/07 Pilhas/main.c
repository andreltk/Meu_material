#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string 32

typedef struct pilha Pilha;
typedef char Elemento;

struct pilha{
	int tamanho;
	Elemento ** elementos;	
};

Pilha * pilha_cria (int maxTamanho);
Pilha * pilha_copia (Pilha * p);
void pilha_libera (Pilha * p);
int pilha_insere (Pilha * p, char * e); // push
char * pilha_remove (Pilha * p); // pop
char * pilha_obtem_topo  (Pilha * p); // top
int pilha_obtem_tamanho  (Pilha * p);
int pilha_se_vazia (Pilha * p);
int pilha_se_cheia (Pilha * p);
char * pilha_imprime  (Pilha * p);

Elemento * elemento_cria (char * elemento);
Elemento * elemento_copia (Elemento * e);
void elemento_libera(Elemento * e);
char * elemento_imprime (Elemento * e);

Elemento * elemento_cria (char * elemento){
	char *arr = malloc(sizeof(char));
	scanf("%[^\n]", arr) ;
	//arr[strlen(arr) - 3] = '\0';
	return arr;
}
Elemento * elemento_copia (Elemento * e){
	Elemento * f = malloc(sizeof(char));
	strcpy(f,e);
	return f;
}
void elemento_libera(Elemento * e){

	free(e);
}
char * elemento_imprime (Elemento * e){

	return e;
}
Pilha * pilha_cria (int maxTamanho){
	int i;
	Pilha * q = (Pilha*)malloc(sizeof(Pilha));
	if ( q != NULL ){
		q->tamanho = 0;
		q->elementos = (char**)malloc(sizeof(char*)*64);
	}
}
Pilha * pilha_copia (Pilha * p){
	int i,count = pilha_obtem_tamanho(p);
	Pilha *q = pilha_cria(64);

	char **aux = (char**)malloc(count * sizeof(char*));
	for( i = 0; i < count; i++)
		aux[i] = (char*) malloc(sizeof(char));
	
	for( i = 0; i < count; i++){
		sprintf(aux[i],"%s",pilha_obtem_topo(p));
		pilha_remove(p);
	}
	for( i = 0; i < count; i++)
		pilha_insere(q,aux[i]);
		
	for( i = 0; i < count; i++)
		pilha_insere(p, aux[i]);

	return q;
}
void pilha_libera (Pilha * p){

	free(p);
}
int pilha_insere (Pilha * p, Elemento * e){
	char *aux = (char*)malloc(sizeof(char)*strlen(e));
	strcpy(aux,e);
	p->elementos[pilha_obtem_tamanho(p)] = aux;	
	p->tamanho++;
}
Elemento * pilha_remove (Pilha * p){

	p->tamanho--;
}
Elemento * pilha_obtem_topo  (Pilha * p){
	return p->elementos[p->tamanho-1];
}
int pilha_obtem_tamanho  (Pilha * p){

	return p->tamanho;
}
int pilha_se_vazia (Pilha * p){
	if ( p->tamanho == 0 )
		return 1;
	else
		return 0;
}
int pilha_se_cheia (Pilha * p){

	return 0;
}
char * pilha_imprime  (Pilha * p){
	Pilha *aux = pilha_copia(p);
	char *arr = malloc(sizeof(char)*string);
	int count = pilha_obtem_tamanho(p);
	while(count--){
		char temp[string];
		strcpy(temp, pilha_obtem_topo(aux));
		strcat(arr,temp);
		strcat(arr," ");
		pilha_remove(aux);
	}
	pilha_libera(aux);
	return arr;
}

int main(int argc, char const *argv[]){
	Pilha *p = pilha_cria(64);
	char * expressao = elemento_cria(expressao);
	pilha_insere(p,expressao);
	
	int i,chave,colchete,parenteses;
	i = chave = colchete = parenteses = 0;

	for( i = 0; i < strlen(pilha_obtem_topo(p)); i++){
		if (pilha_obtem_topo(p)[i] == '{')
			chave++;
		if (pilha_obtem_topo(p)[i] == '}')
			chave--;
		if (pilha_obtem_topo(p)[i] == '[')
			colchete++;
		if (pilha_obtem_topo(p)[i] == ']')
			colchete--;
		if (pilha_obtem_topo(p)[i] == '(')
			parenteses++;
		if (pilha_obtem_topo(p)[i] == ')')
			parenteses--;
		}

	if ( chave || colchete || parenteses)
		printf("nao\n");
	else
		printf("sim\n");

	return 0;
}

/*

( 11 + { 2 * -33 ] ) fim
( 11 + { 2 * -33 } ) fim
[ 11 + { 2 * -33 } [ fim
[ 11 + { 2 * -33 } fim

 
*/

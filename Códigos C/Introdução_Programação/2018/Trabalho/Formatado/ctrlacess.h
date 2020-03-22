#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM_STRINGS 100
#define FALSO 0
#define VERDADEIRO 1


typedef struct{
char nmusr[TAM_STRINGS];
char senha[TAM_STRINGS];
}usuario;

typedef struct{
char nomeusr[TAM_STRINGS];
}nomedeusuario;

void coletanomes(nomedeusuario * nomes);

void organizausuarios(nomedeusuario * nomes,int nt);

int conferesenha(char * nmusr,char * senha);

int localizausuario(char * nmusr);

int localizausuarioesenha(char * nmusr,char * senha);

int removeusuario(char * nmusr,char * senha);

int quantidadeusuarios();

int mudasenha(char * nmusr, char * senha);

char *criptografa(char * senha);

FILE * arquivousuariosleitura();

FILE * arquivousuariosadicionar();


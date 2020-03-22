#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
char nmusr[100];
char senha[100];
}usr;

typedef struct{
char nomeusr[100];
}nms;

// void nvusr(char * nmusr,char * senha);

void coletanomes(nms * nomes);

void organizausr(nms * nomes,int nt);

int confsenha(char * nmusr,char * senha);

int lczusr(char * nmusr);

int lczusresenha(char * nmusr,char * senha);

int removeusr(char * nmusr,char * senha);

int contausrs();

int mudasenha(char * nmusr, char * senha);

char *criptgrf(char * senha);

FILE * arqusrle();

FILE * arqusrad();


//Feito por André Luiz Teixeira Kohlrausch 

//Cabeçalho da biblioteca Lista de Arya

#include<stdio.h>
#include<stdlib.h>


typedef struct inimigo{
    
    int posicao;
    int pessoa;
    struct inimigo* proximo;
    
}inimigo;

//*/
void menu(inimigo* lista);

inimigo* cria_lista();

inimigo* aloca_inimigo();

void adiciona_inimigo(inimigo* lista,int pessoa,int anterior);

void remove_inimigo(inimigo* lista,int pessoa);

void libera_lista(inimigo* lista);

int inimigos_restantes(inimigo* lista,int inicio,int fim);




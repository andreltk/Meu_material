
typedef struct elemento Elemento;

Lista *lista_cria();
void lista_libera(Lista *p);
void lista_insere_posicao(Lista *p, int elemento, int posicao);
int lista_obtem_elemento(Lista *p, int posicao);
int lista_obtem_tamanho(Lista *p);
char *imprime(Lista *p);

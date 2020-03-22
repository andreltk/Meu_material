typedef struct elemento Elemento;
typedef struct NO* ArvAVL;

typedef struct lista{
    Elemento *cabeca;
    int tamanho;
}Lista;


ArvAVL* cria_ArvAVL();
void libera_ArvAVL(ArvAVL *raiz);
int insere_ArvAVL(ArvAVL *raiz, int data);
int remove_ArvAVL(ArvAVL *raiz, int valor);
int estaVazia_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int consulta_ArvAVL(ArvAVL *raiz, int valor);
void preOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_ArvAVL(ArvAVL *raiz);
void posOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_Lista(ArvAVL *raiz, Lista* q);

Lista *lista_cria();
void lista_libera(Lista *p);
void lista_insere_posicao(Lista *p, int elemento, int posicao);
int lista_obtem_elemento(Lista *p, int posicao);
int lista_obtem_tamanho(Lista *p);
char *imprime(Lista *p);

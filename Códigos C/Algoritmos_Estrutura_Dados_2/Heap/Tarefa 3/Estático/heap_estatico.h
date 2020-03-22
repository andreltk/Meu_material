#define MAX 5000

typedef struct fila_prioridade Fila_Priori;

Fila_Priori* cria_Fila_Priori();
void libera_Fila_Priori(Fila_Priori* fp);
int consulta_Fila_Priori(Fila_Priori* fp, int valor);
int insere_Fila_Priori(Fila_Priori* fp, int valor, int  prioridade);
int remove_Fila_Priori(Fila_Priori* fp);
int tamanho_Fila_Priori(Fila_Priori* fp);
int estaCheia_Fila_Priori(Fila_Priori* fp);
int estaVazia_Fila_Priori(Fila_Priori* fp);
void imprime_Fila_Priori(Fila_Priori* fp);

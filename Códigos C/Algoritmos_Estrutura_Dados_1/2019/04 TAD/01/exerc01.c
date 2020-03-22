#include <stdio.h>
#include <stdlib.h>


//Typedefs//////////////////////////////////////////////
struct elemento
{
    int elemento;
    struct elemento *proximo;
};
struct lista
{
    struct elemento *cabeca;
    int tamanho;
};

typedef struct lista Lista; //presente no Lista.h

////////////////////////////////////////////////////////

//Protótipos////////////////////////////////////////////

Lista * lista_cria ();
Lista * lista_copia (Lista * p);
void lista_libera (Lista * p);
int lista_insere_inicio (Lista * p, int elemento);
int lista_insere_final (Lista * p, int elemento);
int lista_insere_posicao (Lista * p, int elemento, int posicao);
int lista_remove_inicio (Lista * p);
int lista_remove_final  (Lista * p);
int lista_remove_posicao (Lista * p, int posicao);
int lista_obtem_elemento  (Lista * p, int posicao); /* retorna elemento em uma posicao */
int lista_se_presente  (Lista * p, int elemento); /* retorna posicao do elemento, ou zero se ausente */
int lista_obtem_tamanho  (Lista * p);
char * lista_imprime  (Lista * p);
int lista_compara_elemento (int elemento1, int elemento2);
void lista_ordena (Lista * p);

////////////////////////////////////////////////////////



int main(){
    
    Lista * inimigos;
    struct elemento * auxiliar, * auxiliar_2;
    
    int contador, quantidade, inimigo1, inimigo2, inteiro_aux;
    char * impressao, opcao;
    
    
    inimigos = lista_cria();
    
    
    
    //Preenche/////////////////////////////
    
    
    scanf("%d", &quantidade);
    
    for (contador = 1; contador <= quantidade; contador++){
        
        
        scanf("%d",&inimigo1);
        
        /*
         * Aparentemente a função lista_insere_posicao já
         *faz tal trabalho, portanto será desconsiderado
         * 
         *	//Inicializa///////////////////////////
         *	
         *	if(contador == 1){
         * 
         *		auxiliar = lista_insere_inicio(inimigos, contador);
         * 
         *		if(auxiliar == 0){
         * 
         *		printf("ERRO DE ALOCAÇÂO\n");
         *		return
    }
    
    }
    //Inicializa///////////////////////////
    *
    */
        
        lista_insere_posicao(inimigos, inimigo1, contador);
        
        
        
    }
    
    
    ///////////////////////////////////////
    
    
    //Operações////////////////////////////
    
    do{
        
        scanf("\n %c",&opcao);
        
        //INSERE/////////////////////////////////////
        
        if(opcao == 'I'){
            
            scanf("%d",&inimigo1);
            scanf("%d",&inimigo2);
            
            inteiro_aux = lista_se_presente(inimigos, inimigo1);
            
            
            
            
            auxiliar = inimigos->cabeca;
            
            for(contador = 1;contador < inteiro_aux; contador++){
                
                auxiliar = auxiliar->proximo;
            }
            
            auxiliar_2 = malloc(sizeof(struct elemento));
            
            auxiliar_2->elemento = inimigo2;
            auxiliar_2->proximo = auxiliar->proximo;
            
            auxiliar->proximo = auxiliar_2;
            
            inimigos->tamanho++;
            
        }
        
        //REMOVE/////////////////////////////////////
        
        if(opcao == 'R'){
            
            scanf("%d",&inimigo1);
            
            inteiro_aux = lista_se_presente(inimigos, inimigo1);
            
            lista_remove_posicao(inimigos, inteiro_aux);
            
            
        }
        //REMOVE/////////////////////////////////////
        
        
        //CONTABILIZA/////////////////////////////////////
        
        if(opcao == 'Q'){
            
            scanf("%d",&inimigo1);
            scanf("%d",&inimigo2);
            
            inteiro_aux =lista_se_presente(inimigos, inimigo2) - lista_se_presente(inimigos, inimigo1);
            
            printf("%d\n",inteiro_aux - 1);
            
            
        }
        //CONTABILIZA/////////////////////////////////////
        
        
        
        
    }while(opcao != 'F');
    ///////////////////////////////////////
    
    //Imprime////////////////////////////////////
    impressao =lista_imprime(inimigos);
    
    printf("%s\n",impressao);
    /////////////////////////////////////////////
    
    
    
}
//Implementações////////////////////////////////////////

Lista *lista_cria()
{
    Lista *q = (Lista *)malloc(sizeof(Lista));
    if(q != NULL)
    {
        q->cabeca = NULL;
        q->tamanho = 0;
    }
    return q;
}
Lista *lista_copia(Lista *p)
{
    Lista *q = (Lista *)malloc(sizeof(Lista));
    if(q != NULL)
    {
        if(p->tamanho == 0)
            q->cabeca = NULL;
        else
        {
            q->cabeca = (struct elemento *)malloc(sizeof(struct elemento));
            struct elemento *p_elem;
            struct elemento *q_elem;
            p_elem = p->cabeca;
            q_elem = q->cabeca;
            while (p_elem != NULL)
            {
                q_elem->elemento = p_elem->elemento;
                if(p_elem->proximo == NULL)
                    q_elem->proximo = NULL;
                else
                    q_elem->proximo = (struct elemento *)malloc(sizeof(struct elemento));
                q_elem = q_elem->proximo;
                p_elem = p_elem->proximo;
            }
        }
        q->tamanho = p->tamanho;
    }
    return q;
}
void lista_libera(Lista *p)
{
    struct elemento *q = p->cabeca;
    while (q != NULL)
    {
        struct elemento *aux = q->proximo;
        free(q);
        q = aux;
    }
    free(p);
}
int lista_insere_inicio(Lista *p, int elemento)
{
    struct elemento *q = malloc(sizeof(struct elemento));
    if(q != NULL)
    {
        q->elemento = elemento;
        q->proximo = p->cabeca;
        p->cabeca = q;
        p->tamanho = p->tamanho + 1;
        return 1; // insercao com sucesso
    }
    return 0; // erro na insercao
}
int lista_insere_final(Lista *p, int elemento)
{
    struct elemento *q = malloc(sizeof(elemento));
    q->elemento = elemento;
    q->proximo = NULL;
    if(p->tamanho == 0)
        p->cabeca = q;
    else
    {
        struct elemento *aux = p->cabeca;
        while (aux->proximo != NULL)
            aux = aux->proximo;
        aux->proximo = q;
    }
    p->tamanho = p->tamanho + 1;
    return 1; // insercao com sucesso
}
int lista_insere_posicao(Lista *p, int elemento, int posicao){
    
    if(posicao < 1){
        return 0;
        
    } // insercao sem sucesso, alem do inicio da lista
    if(posicao > p->tamanho + 1){
        return 0;} // insercao sem sucesso, alem do final da lista
        
        
        struct elemento * q = malloc(sizeof(struct elemento));
        q->elemento = elemento;
        
        if(posicao == 1)
        {
            if(p->tamanho == 0)
                q->proximo = NULL;
            else
                q->proximo = p->cabeca;
            p->cabeca = q;
        }
        else
        {
            struct elemento *aux = p->cabeca;
            while (posicao > 2)
            {
                aux = aux->proximo;
                posicao--;
            }
            q->proximo = aux->proximo;
            aux->proximo = q;
        }
        p->tamanho = p->tamanho + 1;
        return 1; // inserção com sucesso
}
int lista_remove_inicio(Lista *p)
{
    return 0;
}
int lista_remove_final(Lista *p)
{
    return 0;
}
int lista_remove_posicao(Lista *p, int posicao)
{
    struct elemento * auxiliar, *auxiliar_2;
    int contador;
    
    auxiliar = p->cabeca;
    
    if(posicao == 1){
        if(auxiliar->proximo == NULL){
            
            p->cabeca = NULL;
            free(auxiliar);
            p->tamanho--;
            return 1;
        }
        
        p->cabeca = auxiliar->proximo;
        free(auxiliar);
        p->tamanho--;
        return 1;
    }
    
    for(contador = 1; contador < posicao;contador++){
        
        auxiliar_2 = auxiliar;
        auxiliar = auxiliar->proximo;
        
    }
    
    
    
    
    
    auxiliar_2->proximo = auxiliar->proximo;
    
    free(auxiliar);
    p->tamanho--;
    
    return 1;
    
}
int lista_obtem_elemento(Lista *p, int posicao)
{
    if((posicao < 1) || (posicao > p->tamanho))
        return -1;
    struct elemento *q = p->cabeca;
    int i;
    for (i = 0; i < posicao - 1; i++)
        q = q->proximo;
    return q->elemento;
}
int lista_se_presente(Lista *p, int elemento)
{	
    struct elemento * auxiliar;
    int contador;
    
    contador = 1;
    auxiliar = p->cabeca;
    
    
    while(1){
        
        if(auxiliar->proximo == NULL){
            return contador;
        }
        
        else if(auxiliar->elemento == elemento){
            return contador; //retorna posicao do elemento
        }
        
        else{
            
            contador++;
            auxiliar = auxiliar->proximo;
        }
    }
    
    
    
    return 0; // elemento ausente
}
int lista_obtem_tamanho(Lista *p)
{
    return p->tamanho;
}
char *lista_imprime(Lista *p)
{
    char *imprime = (char *)malloc(1);
    imprime[0] = '\0';
    int tamanho = 1;
    struct elemento *q = p->cabeca;
    int i;
    for (i = 0; i < p->tamanho; i++)
    {
        char aux[10];
        int j, tam_aux;
        if(i == 0)
            sprintf(aux, "%d", q->elemento);
        else
            sprintf(aux, " %d", q->elemento);
        for (tam_aux = 0; aux[tam_aux] != '\0'; tam_aux++)
            ;
        imprime = realloc(imprime, tamanho + tam_aux);
        for (j = 0; j < tam_aux; j++)
            imprime[tamanho + j - 1] = aux[j];
        tamanho = tamanho + tam_aux;
        imprime[tamanho - 1] = '\0';
        q = q->proximo;
    }
    return imprime;
}
int lista_compara_elemento(int elemento1, int elemento2)
{
    return 0;
}
void lista_ordena(Lista *p)
{
    ;
}


////////////////////////////////////////////////////////
/*
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */

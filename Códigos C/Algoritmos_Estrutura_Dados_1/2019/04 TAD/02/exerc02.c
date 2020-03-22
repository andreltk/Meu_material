#include <stdio.h>
#include <stdlib.h>

struct lista {
    int * elementos;
    int tamanho;
};

typedef struct lista Lista;

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
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * */
int main(){
    Lista * inimigos;
    
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
         *    //Inicializa///////////////////////////
         *    
         *    if(contador == 1){
         * 
         *        auxiliar = lista_insere_inicio(inimigos, contador);
         * 
         *        if(auxiliar == 0){
         * 
         *        printf("ERRO DE ALOCAÇÂO\n");
         *        return
    }
    
    }
    //Inicializa///////////////////////////
    *
    */
        
        lista_insere_posicao(inimigos, inimigo1, contador);
        
        
        
    }
    
    
    ///////////////////////////////////////
      //Imprime////////////////////////////////////
    impressao =lista_imprime(inimigos);
    
    printf("%s\n",impressao);
    /////////////////////////////////////////////
    
    //Operações////////////////////////////
    
    do{
        
        scanf("\n %c",&opcao);
        
        //INSERE/////////////////////////////////////
        
        if(opcao == 'I'){
            
            scanf("%d",&inimigo1);
            scanf("%d",&inimigo2);
            
            inteiro_aux = lista_se_presente(inimigos, inimigo1);
            
            lista_insere_posicao(inimigos, inimigo2, inteiro_aux + 2);
            
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
     
    //Imprime////////////////////////////////////
    impressao =lista_imprime(inimigos);
    
    printf("=====================\n\t%s\n====================\n",impressao);
    /////////////////////////////////////////////
    
    
        
        
        
    }while(opcao != 'F');
    ///////////////////////////////////////
    
    //Imprime////////////////////////////////////
    impressao =lista_imprime(inimigos);
    
    printf("%s\n",impressao);
    /////////////////////////////////////////////
    
    
    
}
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
/* IMPLEMENTACAO COM ELEMENTOS EM VETOR */

Lista * lista_cria () {
    Lista * q = (Lista *) malloc(sizeof(Lista));
    if (q!=NULL) {
        q->elementos = NULL;
        q->tamanho = 0;
    }
    return q;
}
Lista * lista_copia (Lista * p) {
    Lista * q = (Lista *) malloc(sizeof(Lista));
    if (q!=NULL) {
 
        if (p->tamanho == 0) 
            q->elementos = NULL;
        else {
            int i;
            q->elementos = (int *) malloc(sizeof(int) * p->tamanho);
            for (i=0; i < p->tamanho; i++)
                q->elementos[i] = p->elementos[i];
        }
        q->tamanho = p->tamanho;	
    }
    return q;
}
void lista_libera (Lista * p) {
    if (p->tamanho > 0)
        free(p->elementos);
    free(p);
}
int lista_insere_inicio (Lista * p, int elemento) {
    p->tamanho = p->tamanho + 1;
    if (p->tamanho == 1)
        p->elementos = (int *) malloc(sizeof(int) * p->tamanho);
    else
        p->elementos = (int *) realloc(p->elementos, sizeof(int) * p->tamanho);
    int i;
    for (i = p->tamanho-1; i > 0; i--)
        p->elementos[i] = p->elementos[i-1];
    p->elementos[0] = elemento;
    return 1; // insercao com sucesso
}
int lista_insere_final (Lista * p, int elemento) {
    p->tamanho = p->tamanho + 1;	
    if (p->tamanho == 1)
        p->elementos = (int *) malloc(sizeof(int) * p->tamanho);
    else
        p->elementos = (int *) realloc(p->elementos, sizeof(int) * p->tamanho);
    p->elementos[p->tamanho-1] = elemento;
    return 1; // insercao com sucesso	
}
int lista_insere_posicao (Lista * p, int elemento, int posicao) {
    
    printf("\tInserindo após -> %d\n",posicao);
    
    if (posicao < 1){
        return 0;
    }// insercao sem sucesso, alem do inicio da lista
        if (posicao > p->tamanho+1){
            return 0;
        }// insercao sem sucesso, alem do final da lista
           
           p->tamanho = p->tamanho + 1;
        
        if (p->tamanho == 1)
            p->elementos = (int *) malloc(sizeof(int));
        
        else
            p->elementos = (int *) realloc(p->elementos, sizeof(int) * p->tamanho);
        
        int i;

    for (i = p->tamanho-1; i > posicao-1; i--)
        p->elementos[i] = p->elementos[i-1];
    
    p->elementos[posicao-1] = elemento;
    
    return 1; // inserção com sucesso
}
int lista_remove_inicio (Lista * p) {
    return 0;
}
int lista_remove_final  (Lista * p) {
    return 0;
}
int lista_remove_posicao (Lista * p, int posicao) {
    
    int * auxiliar;
    int contador;
    
    auxiliar = malloc(sizeof(int) * p->tamanho - 1);
    
    for(contador = 0; contador < p->tamanho; contador++){

        printf("\tReposicionando elemento %d\n",p->elementos[contador]);

        if(contador == posicao){

            printf("\tIgnorando elemento %d\n",p->elementos[contador]);
            
            continue;
            printf(".......\n");
        }
        else if(contador > posicao){
        auxiliar[contador - 1] = p->elementos[contador];
        }
        else{
        auxiliar[contador] = p->elementos[contador];
        }

   
    }

    p->tamanho--;

    free(p->elementos);
    
    p->elementos = auxiliar;
    
    return 0;
}
int lista_obtem_elemento  (Lista * p, int posicao) {
    
    
    if ((posicao<1)||(posicao>p->tamanho))
        return -1;
    

    
    return p->elementos[posicao-1];
}
int lista_se_presente  (Lista * p, int elemento){
    
    int contador;
    
    for(contador = 0; contador < p->tamanho; contador++){
        
        if(p->elementos[contador] == elemento){
            return contador;
        }
    }
    return 0;
}
int lista_obtem_tamanho  (Lista * p) {
    return p->tamanho;
}
char * lista_imprime  (Lista * p) {
    char * imprime = (char *) malloc(1);
    imprime[0] = '\0';
    int i;
    int tamanho = 1;
    for (i=0; i < p->tamanho; i++) {
        char aux[10];
        int j, tam_aux;
        if (i==0)
            sprintf(aux, "%d" , p->elementos[i]);
        else
            sprintf(aux, " %d", p->elementos[i]);
        for (tam_aux=0; aux[tam_aux] != '\0'; tam_aux++)
            ;
        imprime = realloc(imprime, tamanho + tam_aux);
        for (j=0; j<tam_aux; j++)
            imprime[tamanho+j-1] = aux[j];
        tamanho = tamanho + tam_aux;
        imprime[tamanho-1] = '\0';
    }
    return imprime;
}
int lista_compara_elemento (int elemento1, int elemento2) {
    return 0;
}
void lista_ordena (Lista * p) {
    ;
}

//Feito por André Luiz T. Kohlrausch

/*
 * Batalha Naval
 *
 *Pedro e Paulo gostam muito de jogar Batalha Naval. Apesar de serem grandes amigos, Pedro desconfia
 *que Paulo não esteja jogando honestamente e, para tirar essa dúvida, decidiu usar um programa de compu-
 *tador para verificar o resultado de cada jogo.Acontece que Pedro não sabe programar e, por isso, pediu a
 *sua ajuda para elaborar este programa.
 *
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

/*
 * Perguntar quanto a esse define, que não subistutui adequadamente
 * 
 * #define CONTEUDO "%c"
 * 
 */

#define AGUA '.'
#define NAVIO '#'
#define ACERTO_AGUA 'O'
#define ACERTO_NAVIO 'X'

void preenche(char matriz[][MAX],int max_linha,int max_coluna);
void imprime(char matriz[][MAX],int max_linha,int max_coluna);
void marca(char matriz[][MAX],int max_linha,int max_coluna);

//int conta_pontos(char  matriz[][MAX],int max_linha,int max_coluna);


int main(){
    
    char matriz[MAX][MAX];
    int linhas,colunas,pontos;
    
    scanf("%d""%d",&linhas,&colunas);
    
    preenche(matriz,linhas,colunas);
    imprime(matriz,linhas,colunas);
    
    marca(matriz,linhas,colunas);
    imprime(matriz,linhas,colunas);
    
    //pontos = conta_pontos(matriz);
    
    printf("%d\n",pontos);
    
    return 0; 
    
}


//tentar fazer de modo recursivo

void preenche(char  matriz[][MAX],int max_linha,int max_coluna){
    
    int contador_l,contador_c;
    
    for(contador_l = 0; contador_l < max_linha; contador_l++){
        
        for(contador_c = 0; contador_c < max_coluna; contador_c++){
            
             printf("\n==== A = %c ====\n",matriz[contador_l][contador_c]);
            scanf("\n%c",&matriz[contador_l][contador_c]);
             printf("\n==== D = %c ====\n",matriz[contador_l][contador_c]); 
        }
    }
    printf("saiu\n"); 
}

void marca(char  matriz[][MAX],int max_linha,int max_coluna){
    
    int contador,linha,coluna,limite;
    
     printf("marcando\n");
    scanf("%d",&limite);
    
    for(contador = 0; contador < limite; contador++){
        
        scanf("%d",&linha);
        scanf("%d",&coluna);
        
        if(matriz[linha][coluna] == AGUA){
            
            matriz[linha][coluna] = ACERTO_AGUA;
        }
        
        if(matriz[linha][coluna] == NAVIO){
            
            matriz[linha][coluna] = ACERTO_NAVIO;
        }
        
    }
     printf("marcado\n");
}
void imprime(char  matriz[][MAX],int max_linha,int max_coluna){
    
     printf("Imprimindo...\n");
    int contador_l,contador_c;
    
    printf("\n");
    
    for(contador_l = 0; contador_l < max_linha; contador_l++){
        
        printf("\n");
        
        for(contador_c = 0; contador_c < max_coluna; contador_c++){
            
            printf("%c",matriz[contador_l][contador_c]);
            
            if(contador_c < max_coluna-1)
                printf(" ");
        }
    } 
    printf("\n");
}

//int conta_pontos(char  matriz[][MAX]){
    /*
     *Houve dúvidas quanto a forma de fazer, pois o enunciado não é claro
     *Portanto será excluida
     *Foi feito verificações quanto ao funcionamento das demais funções
     *e está tudo dentro dos conformes!
     */


/*
 * Há varios detalhes sobre alocação dinâmica de matrizes:
 * http://www.ic.unicamp.br/~norton/disciplinas/mc1022s2005/03_11.html
 * Portanto não será usado 
 * 
 */

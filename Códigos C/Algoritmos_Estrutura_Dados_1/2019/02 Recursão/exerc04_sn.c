//Feito por André Luiz T. Kohlrausch

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
#define NAVIO 'N'
#define ACERTO_AGUA '.'
#define ACERTO_NAVIO 'X'
#define INICIO 0

void preenche(char  matriz[][MAX],int contador_l,int contador_c,int max_linha,int max_coluna);

void imprime(char matriz[][MAX],int max_linha,int max_coluna);

void marca(char matriz[][MAX],int max_linha,int max_coluna);

void afunda(char  matriz[][MAX],int max_linha,int max_coluna,int linha,int coluna);


int main(){
    
    char matriz[MAX][MAX];
    int linhas,colunas,pontos;
    
    scanf("%d""%d",&linhas,&colunas);
    
    preenche(matriz,INICIO,INICIO,linhas,colunas);
    
    marca(matriz,linhas,colunas);
    
    imprime(matriz,linhas,colunas);
    
    return 0; 
    
}


//tentar fazer de modo recursivo

void preenche(char  matriz[][MAX],int contador_l,int contador_c,int max_linha,int max_coluna){
    
    
    
    //     for(contador_l = 0; contador_l < max_linha; contador_l++){
    //         
    //         for(contador_c = 0; contador_c < max_coluna; contador_c++){
    
    //     printf("\n==== A = %c ====\n",matriz[contador_l][contador_c]);
    scanf("\n %c",&matriz[contador_l][contador_c]);
//     printf("\n==== L = %d\tC = %d = %c ====\n",contador_l,contador_c,matriz[contador_l][contador_c]); 
    //         }
    //     }
    
    if(contador_l + 1 == max_linha && contador_c + 1 == max_coluna){
        printf("saiu\n"); 
        return;
    }
    
    if(contador_c + 1 == max_coluna){
        
        preenche(matriz,contador_l + 1, INICIO, max_linha, max_coluna);
        
        return;
        
        
    }
    
    preenche(matriz,contador_l, contador_c + 1, max_linha, max_coluna);
    
    return;
    
}

void marca(char  matriz[][MAX],int max_linha,int max_coluna){
    
    int contador,linha,coluna,limite;
    
//     printf("marcando\n");
    scanf("%d",&limite);
    
    for(contador = 0; contador < limite; contador++){
        
        scanf("%d",&linha);
        scanf("%d",&coluna);
        
        
        if(matriz[linha - 1][coluna - 1] == NAVIO){
            
            afunda(matriz, max_linha, max_coluna, linha - 1, coluna - 1);
        }
        
    }
//     printf("marcado\n");
}

void afunda(char  matriz[][MAX],int max_linha,int max_coluna,int linha,int coluna){
    
//     printf("\tNavio encontrado na linha = %d / coluna = %d\n",linha,coluna);
    
    matriz[linha][coluna] = 'X';
    
    /////Verificação
    if(coluna - 1 < 0 )
        return;
    
    if(matriz[linha][coluna - 1] == 'N'){
        return afunda(matriz, max_linha, max_coluna, linha, coluna - 1);
        
    }
    
    /////Verificação
    if(coluna + 1 == max_coluna )
        return;
    
    
    if(matriz[linha][coluna + 1] == 'N'){
        return afunda(matriz, max_linha, max_coluna, linha, coluna + 1);
    }
    
    
    /////Verificação
    if(linha - 1 < 0 )
            return;
        
    if(matriz[linha-1][coluna] == 'N'){
        return afunda(matriz, max_linha, max_coluna, linha - 1, coluna);
     }
    
    /////Verificação
    if(linha + 1 == max_linha )
        return;

    
    if(matriz[linha+1][coluna] == 'N'){
        return afunda(matriz, max_linha, max_coluna, linha + 1, coluna);
    }
    
    
    
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



/*
 * Há varios detalhes sobre alocação dinâmica de matrizes:
 * http://www.ic.unicamp.br/~norton/disciplinas/mc1022s2005/03_11.html
 * Portanto não será usado 
 * 
 */


//Feito por André Luiz T. Kohlrausch

#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

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



void preenche(char  matriz[][MAX],int contador_l,int contador_c,int max_linha,int max_coluna){
    
    
    
    
    scanf("\n %c",&matriz[contador_l][contador_c]);
    
    if(contador_l + 1 == max_linha && contador_c + 1 == max_coluna){
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
    
    int contador,linha,coluna,limite, erros, acertos, estrago;
    
    erros = 0;
    acertos = 0;
    estrago = 0;
    
    
    scanf("%d",&limite);
    
    for(contador = 0; contador < limite; contador++){
        
        scanf("%d",&linha);
        scanf("%d",&coluna);
//         
//         printf("\n\nVerificando agora:\t %d X %d\n",linha,coluna);
        
        if(matriz[linha - 1][coluna - 1] == NAVIO){
            
            
//             printf("\tNavio!\t %d X %d\n",linha,coluna);
            
            acertos += 1;
            estrago += 1;
            
            
//             printf("Acerto e estrago aumentado:\t %d XXX %d\n",acertos,estrago);
            
//             printf("Afundando......................\n");
            afunda(matriz, max_linha, max_coluna, linha - 1, coluna - 1);
            
//             printf(".....................afundado\n");
        }
        
        
        else if(matriz[linha - 1][coluna - 1] == ACERTO_NAVIO){
            
//             printf("\tEscombro!\t %d X %d\n",linha-1,coluna-1);
            
            acertos += 1;
            
//             printf("Acerto aumentado: %d\n",acertos);
            
        }
        else if(matriz[linha - 1][coluna - 1] == AGUA){
            
//             printf("\tErrou!\t %d X %d\n",linha,coluna);
            erros += 1;
            
//             printf("Erro aumentado: %d\n",erros);
            
        }
    }
    
    printf("%d %d %d\n",erros,acertos,estrago);
}

void afunda(char  matriz[][MAX],int max_linha,int max_coluna,int linha,int coluna){
    
//     printf("\nNa linha e coluna %d X %d\n",linha,coluna);
    
    matriz[linha][coluna] = 'X';
    
    if(linha > 0){
        
        if(matriz[linha-1][coluna] == 'N'){
            
            afunda(matriz, max_linha, max_coluna, linha -1, coluna);
            
        }
        
    }
    
    if(linha < max_linha){
        
        if(matriz[linha + 1][coluna] == 'N'){
            
            afunda(matriz, max_linha, max_coluna, linha +1, coluna);
            
        }
    }
    
    if(coluna < max_coluna){
        
        if(matriz[linha][coluna +1] == 'N'){
            
            afunda(matriz, max_linha, max_coluna, linha, coluna +1);
            
        }
    }
    if(coluna > 0){
        
        if(matriz[linha][coluna -1] == 'N'){
            
            afunda(matriz, max_linha, max_coluna, linha, coluna -1);
            
        }
    }
}    

void imprime(char  matriz[][MAX],int max_linha,int max_coluna){
    
    int contador_l,contador_c;
    
    for(contador_l = 0; contador_l < max_linha; contador_l++){
        
        if(contador_l > 0)
            printf("\n");
        
        for(contador_c = 0; contador_c < max_coluna; contador_c++){
            
            printf("%c",matriz[contador_l][contador_c]);
            
        }
    } 
    printf("\n");
}

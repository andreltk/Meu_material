#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

typedef struct palavra Palavra;

struct palavra {
    char * nome;
    char * sinonimo;
};

Palavra * palavra_cria (char * nome, char * sinonimo);
void palavra_libera (Palavra * p);
char * palavra_obtem_nome (Palavra * p);
char * palavra_obtem_sinonimo (Palavra * p);
int palavra_compara (Palavra * p1, Palavra * p2);

//////////////////////////////////////////////////////////


int main(){
    
    int n, contador, contador2, resultado;
    char opcao, nome[MAX], sinonimo[MAX];
    char * auxiliar;
    Palavra * temporario;
    
    
    scanf("%d",&n);
    Palavra * vetor [n];
    
    for(contador = 0; contador < n; contador++){
        scanf(" \n%s%s",nome,sinonimo);
        vetor[contador] = palavra_cria(nome,sinonimo);
    }
    
    do{
        
        scanf("\n %c",&opcao);
        
        if(opcao == 'C'){
            
            
            scanf("\n %s",nome);
            printf("CONSULTA %s ",nome);
            
            resultado = 1;
            
            for(contador = 0; contador < n; contador++){
                
                auxiliar = palavra_obtem_nome(vetor[contador]);
                
                
                
                resultado = strcmp(auxiliar, nome);
                
                if(resultado == 0){
                    
                    auxiliar = palavra_obtem_sinonimo(vetor[contador]);
                    printf("%s\n",auxiliar);
                    
                    break;
                }
            }
            
            if(resultado != 0){
                printf("INEXISTENTE\n");
            }
        }
        
    } while(opcao != 'F');
    
    
    for(contador2 = n; contador2 > 0; contador2 --){
        
        for(contador = 0; contador < n - 1; contador++){
            
            resultado = palavra_compara(vetor[contador], vetor[contador + 1]);
            if(resultado > 0){
                
                temporario = vetor[contador];
                vetor[contador] = vetor[contador + 1];
                vetor[contador + 1] = temporario;
            }
        }
    }
    
    for(contador = 0; contador < n; contador++){
        
        printf("%s %s\n",palavra_obtem_nome(vetor[contador]),palavra_obtem_sinonimo(vetor[contador]));
        palavra_libera(vetor[contador]);
    }
}


//////////////////////////////////////////////////////////
Palavra * palavra_cria (char * nome, char * sinonimo){
    
    Palavra * auxiliar;
    char * temporario;
    
    
    auxiliar = (Palavra *)malloc(sizeof(Palavra));
    
    
    temporario =(char *)malloc(sizeof(char) * (strlen(nome) + 1));
    auxiliar->nome = temporario;
    strcpy(auxiliar->nome, nome);
    
    temporario =(char *) malloc(sizeof(char) * (strlen(sinonimo) + 1));
    auxiliar->sinonimo = temporario;
    strcpy(auxiliar->sinonimo,sinonimo);
    
    
    return auxiliar;
}
void palavra_libera (Palavra * p){
    
    Palavra * auxiliar;
    
    auxiliar = p;
    
    free(auxiliar->nome);
    free(auxiliar->sinonimo);
    free(auxiliar);
    
    auxiliar->nome = NULL;
    auxiliar->sinonimo = NULL;
    auxiliar = NULL;
    p = NULL;
    
    return;
}
char * palavra_obtem_nome (Palavra * p){
    
    
    char * auxiliar;
    
    auxiliar = malloc(sizeof(char) * (strlen(p->nome) + 1));
    
    strcpy(auxiliar, p->nome);
    
    return auxiliar;
    
    
}
char * palavra_obtem_sinonimo (Palavra * p){
    
    char * auxiliar;
    
    auxiliar = malloc(sizeof(char) * (strlen(p->sinonimo) + 1));
    
    strcpy(auxiliar, p->sinonimo);
    
    return auxiliar;
}
int palavra_compara (Palavra * p1, Palavra * p2){
    
    int resultado_1;
    
    char auxiliar_1[MAX], auxiliar_2[MAX];
    
    strcpy(auxiliar_1, p1->nome);
    strcpy(auxiliar_2, p2->nome);
    
    resultado_1 =  strcmp(auxiliar_1, auxiliar_2);
    
    return resultado_1;
    
}


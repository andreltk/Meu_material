//Feito por André Luiz

#include<stdio.h>
#include<stdlib.h>

#define OURO 0
#define PRATA 1
#define BRONZE 2
#define LATAO 3

typedef struct{
	
	int id;
	int ouro;
	int prata;
	int bronze;	
	int latao;

}selecao;

selecao* inicializa_paises(int participantes);

void libera_paises(selecao* paises,int participantes);
 
void recebe_medalhas(int *podio, selecao* paises);

void distribui_medalhas(int *podio, selecao* paises);

void busca_vencedor(selecao* paises, int participantes);


void imprime(selecao* paises, int quantidade){

	int contador;
	
	for(contador = 0;contador<quantidade;contador++){
		
		printf("=================\n");
		
		printf("ID = %d\n\n",paises[contador].id);
		
		printf("Ouro = %d\n",paises[contador].ouro);
		printf("Prata = %d\n",paises[contador].prata);
		printf("Bronze = %d\n",paises[contador].bronze);
		printf("Latão = %d\n",paises[contador].latao);		
	}

}

void troca_selecoes(selecao* paises, int indice_1, int indice_2);

int main(){

	selecao* paises;
	
	int *podio;
	int contador, participantes, modalidades;
	
	scanf("%d" "%d",&participantes,&modalidades);
	
	paises = inicializa_paises(participantes);
	
	for(contador = 0;contador < modalidades; contador++){
	
		recebe_medalhas(podio, paises);
		distribui_medalhas(podio, paises);
		
	}
	
	//imprime(paises,participantes);
	
//	libera_paises(paises, participantes);
}


selecao* inicializa_paises(int participantes){
	
	selecao* auxiliar;
	int contador;
	
	auxiliar =(selecao*) malloc(sizeof(selecao) * participantes);
	
	if(auxiliar == NULL){
		
		printf("ERRO\n");
		exit;
	}
	
	for(contador = 0;contador < participantes; contador++){
		S
		auxiliar[contador].id = contador + 1;
		
		auxiliar[contador].ouro = 0;
		auxiliar[contador].prata = 0;
		auxiliar[contador].bronze = 0;
		auxiliar[contador].latao = 0;
		
			
	}
	
	return auxiliar;
	
}

void libera_paises(selecao* paises,int participantes);

void recebe_medalhas(int *podio, selecao* paises){
	
	int contador;
	
	for(contador = 0;contador < 4; contador ++){
		
		scanf("%d",&podio[contador]);
	
	}
}

void distribui_medalhas(int *podio, selecao* paises){
	
	int contador,auxiliar;
	
	auxiliar = podio[OURO];
	paises[auxiliar - 1].ouro++;
	
	
	auxiliar = podio[PRATA];
	paises[auxiliar - 1].prata++;
	
	
	auxiliar = podio[BRONZE];
	paises[auxiliar - 1].bronze++;
	
	
	auxiliar = podio[LATAO];
	paises[auxiliar - 1].latao++;
	
}

void ordenacao_rapida(int *vetor, int inicio, int final){
    
    int pivo;
    
    if(inicio >= final)
        return;
    
    pivo = particionamento(vetor, inicio, final);
    
    
    ordenacao_rapida(vetor, inicio, pivo - 1);
    ordenacao_rapida(vetor, pivo + 1, final);
    
}
 
int particionamento(int * vetor,int inicio, int final){
    
    int pivo, indice_pivo, indice;
    
    pivo = vetor[final];
    
    indice_pivo = inicio - 1;
    
    for(indice = inicio; indice < final; indice++ ){
        
        if(vetor[indice] <= pivo){
            
            indice_pivo++;
            
            troca(vetor, indice_pivo, indice);
        }
    }
    
    troca(vetor , indice_pivo + 1, final);
    
    return indice_pivo + 1;
}
 

void busca_vencedor(selecao* paises, int participantes){




}


//void troca_selecoes(selecao* paises, int indice_1, int indice_2);
















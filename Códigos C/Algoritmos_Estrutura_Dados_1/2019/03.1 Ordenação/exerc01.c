#include<stdio.h>
#include<stdlib.h>

int * aloca_vetor(int tamanho);

void preenche_vetor(int * vetor, int tamanho);

void imprime_vetor(int * vetor, int tamanho);

void libera_vetor(int * vetor);

void ordenacao_contagem(int * valores, int * auxiliar, int * resultante, int quantidade, int alcance);



int main(){
	
	int quantidade, alcance;
	int * valores;
	int * auxiliar;
	int * resultante;
	
	
	scanf("%d",&quantidade);
	scanf("%d",&alcance);
	
	alcance++;

	valores = aloca_vetor(quantidade);
	resultante = aloca_vetor(quantidade);
	auxiliar = aloca_vetor(alcance);

	preenche_vetor(valores, quantidade);
	
	printf("\t");
	imprime_vetor(valores, quantidade);
	
	
	ordenacao_contagem(valores, auxiliar, resultante, quantidade, alcance);
	
	printf("B : ");
	imprime_vetor(resultante, quantidade);
	
	printf("C : ");
	imprime_vetor(auxiliar, alcance);
	
	/*
	libera_vetor(valores);
	libera_vetor(resultante);
	libera_vetor(auxiliar);
	*/
}


int * aloca_vetor(int tamanho){
	int * auxiliar;
	auxiliar = (int *)calloc(tamanho,sizeof(int));
	if(auxiliar == NULL){
		printf("Erro de alocação\n");
		return NULL;
	}
	return auxiliar;
}

void preenche_vetor(int * vetor,int tamanho){
	int contador;
	for(contador = 0; contador < tamanho; contador++){
		scanf("%d",&vetor[contador]);
	}
}

void imprime_vetor(int * vetor, int tamanho){
	
	int contador;
	
	for(contador = 0; contador < tamanho; contador++){
		
		if(contador > 0)
			printf(" ");
		
		printf("%d",vetor[contador]);
		
	}
	
	printf("\n");
}

void libera_vetor(int * vetor){

	free(vetor);
	vetor = NULL;
}

void ordenacao_contagem(int * valores, int * auxiliar, int * resultante, int quantidade, int alcance){
	
	int contador, elemento;
	
//Contagem////////////////////////////////////////////////////////////////
	
	for(contador = 0; contador < quantidade; contador++){
		
		elemento = valores[contador];
		
		auxiliar[elemento]++;
		
	}
	printf("\tAUX = ");
	imprime_vetor(auxiliar, alcance);
//////////////////////////////////////////////////////////////////////////
	
//Somas///////////////////////////////////////////////////////////////////
	
	for(contador = 1; contador < alcance; contador++){
		
		
		auxiliar[contador] += auxiliar[contador - 1];
		
	}
	
	
	printf("\tAUX = ");
	imprime_vetor(auxiliar, alcance);
//////////////////////////////////////////////////////////////////////////	
	
//Resultado////////////////////////////////////////////////////////////////
	
	for(contador = 0; contador < quantidade; contador++){
		
		elemento = valores[contador];
		
		resultante[auxiliar[elemento]] = elemento;
		
		auxiliar[elemento]--;
		
	}
	
	
//////////////////////////////////////////////////////////////////////////	
}
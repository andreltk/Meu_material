#include "disciplina.h"

void incluir(){
	char nome[21];
	int ch;
	float valor;

	//Entrada de dados
	fprintf(stdout, "Digite o nome da disciplina: ");
	fscanf(stdin, "%s", nome);
	printf("Digite o carga horaria: ");
	scanf("%d", &ch);
	printf("Digite o valor: ");
	scanf("%f", &valor);

	//Gravação no arquivo
	FILE *arq;
	arq = fopen("disciplina.txt", "a");
	
	fprintf(arq, "%s\t%d\t%.2f\n", nome, ch, valor);

	fclose(arq);

}

void mostrar(){
	FILE *arq;
	char disciplina[21];
	int horas;
	float preco;	

	arq = fopen("disciplina.txt", "r");
	if (arq == NULL){
		printf("\tERRO: Arquivo não encontrado!!!\n\n");
		return;
	}

	printf("\n\n");
	printf("Nome da disciplina     Carga horaria          Preço\n");
	printf("---------------------------------------------------\n");

	fscanf(arq, "%s %d %f", disciplina, &horas, &preco);
	while( !feof(arq) ){
		printf("%-20s   %13d     %10.2f\n", disciplina, horas, preco);

		fscanf(arq, "%s %d %f", disciplina, &horas, &preco);
	}
	printf("---------------------------------------------------\n\n");
	fclose(arq);

}



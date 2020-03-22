#include <stdio.h>
#include <stdlib.h>
#include "disciplina.h"

int main(){
	int opcao;

	do{
			printf("Escolha uma opção: \n");
			printf("\t 1 - Incluir disciplina\n");
			printf("\t 2 - Mostrar disciplinas\n");
			printf("\t 0 - Sair\n");
			scanf("%d", &opcao);
			switch(opcao){
				case 1:
					incluir();				
					break;
				
				case 2:
					mostrar();
					break;
			
				default:
					break;
			}
	}while(opcao != 0);

}


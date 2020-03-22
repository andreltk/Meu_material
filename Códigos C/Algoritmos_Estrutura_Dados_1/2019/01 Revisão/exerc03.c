//Feito por André Luiz

#include<stdio.h>

long int eleva(int expoente);

int main(){
	
	int expoente,minimo,maximo,resultado;
	int inteiro_1, inteiro_2, inteiro_3;
	char operacao_1,operacao_2;
	
	scanf("%d",&expoente);
	
	minimo = (-eleva(expoente));	
	maximo = (eleva(expoente) - 1);
	
	scanf("%d",&inteiro_1);
	
	scanf("\n %c",&operacao_1);
	
	scanf("%d",&inteiro_2);
	
	scanf("\n %c",&operacao_2);
	
	scanf("%d",&inteiro_3);
	

	if(operacao_1 == '+' && operacao_2 == '+')
		resultado = inteiro_1 + inteiro_2 + inteiro_3;
	
	if(operacao_1 == '+' && operacao_2 == '*')
		resultado = inteiro_1 + (inteiro_2 * inteiro_3);

	if(operacao_1 == '*' && operacao_2 == '+')
		resultado = (inteiro_1 * inteiro_2) + inteiro_3;

	if(operacao_1 == '*' && operacao_2 == '*')
		resultado = inteiro_1 * inteiro_2 * inteiro_3;
	
	printf("%d ",resultado);
	
	if(resultado < minimo || resultado > maximo)
		printf("OVERFLOW\n");
		
	else
		printf("OK\n");
		
		
}


long int eleva(int expoente){
	
	long int resultado;
	int contador;
	
	resultado =2;
	
	for(contador = 2; contador <= expoente; contador++)
		resultado *= 2;
		
	return resultado; 
}



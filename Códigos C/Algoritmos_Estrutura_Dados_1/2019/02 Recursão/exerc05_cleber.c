/* FEITO PELO CLEBER */

// O simbolo <%> Equivale a resto de divisão
// A expressão N(-1...) Equivale a Numeros menores que N

#include<stdio.h>

int count = 0; // *** Me desculpe professor *** //

int its_primo(int numero,int anterior){
	if (numero%anterior == 0 && anterior != 1)	return 0; // Se <%> de N por N(-1...) com excessão do <1> equivaler a 0 <N NAO é PRIMO> ;
	if (anterior == 1)	return 1;						  // Se N menores chegar em 1 <N é PRIMO> **pois só foi divisivel por 1** ; 
	else return its_primo(numero,anterior-1);			  // Testa N(-1...) ; 
}

int print_qtd(int num2, int num1){
	if(num2 > num1) print_qtd( num2 - 1,num1);				
	if(its_primo(num2,num2 - 1) == 1 ) {
		++count;		//incrementa no contador quantos numeros primos foram encontrados
	}return count;		//retorna o valor total do contador
}

int print_primo(int num2, int num1){
	if(num2 > num1) print_primo( num2 - 1,num1);				
	if(its_primo(num2,num2 - 1) == 1 ) {
		printf("%d ",num2 );	// imprime os numeros primos
	}
}

int main(void){

int num1; scanf("%d", &num1) ;
int num2; scanf("%d", &num2) ;
	if(num1 <= 1) num1 = 2;/*** Tratamento de erros ***/
	if(num2 <= 1) num2 = 2;/*** Tratamento de erros ***/
	printf("%d\n",print_qtd(num2,num1));
	print_primo(num2,num1);

}

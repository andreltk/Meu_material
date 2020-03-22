//Feito por André Luiz


/*
* Observação:
* Para fazer, basta pensar no modo inverso da seguinte imagem
* https://3.bp.blogspot.com/-cANHx4dx_LA/TdZsKqAUvqI/AAAAAAAAAV8/E5xQCFws5rY/s1600/decimal+para+bin%25C3%25A1rio.jpg
*
*/

#include<stdio.h>

void converte(int base,int numero);

int main(){
	
	int contador, testes, numero;
	
	scanf("%d",&testes);
	
	for(contador = 0; contador < testes; contador++){
		
		scanf("%d",&numero);
		
		converte(3,numero);
		printf(" ");
		converte(4,numero);
		printf(" ");
		converte(5,numero);
		printf("\n");
	}
}

void converte(int base,int numero){
	
	int dividendo;
	
	if(numero < base){
		printf("%d",numero);
		return;
	}
	for(dividendo = 0; dividendo < numero; dividendo *= base){
		
		printf("%d",dividendo % base);
		
		if (dividendo == 0)
			dividendo = 1; 
	}
}

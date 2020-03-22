#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *novo;

	novo = fopen("relatorio.html", "w");

	fprintf(novo, "<html>\n");
	fprintf(novo, "<head>\n");
	fprintf(novo, "<meta charset='UTF-8' />\n");
	fprintf(novo, "</head>\n");
	fprintf(novo, "<body>\n");
	fprintf(novo, "<h1>Análise de Dados</h1>\n");
	fprintf(novo, "<h2>Resumo por Categoria</h2>\n");
	fprintf(novo, "<ul>\n");
	fprintf(novo, "<li> descrição da categoria 1: qua </li>\n");
	fprintf(novo, "</ul>\n");
	fprintf(novo, "</body>\n");
	fprintf(novo, "</html>\n");

	fclose(novo);
}

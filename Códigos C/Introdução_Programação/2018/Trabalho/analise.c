#include"analise.h"

void criarelatorio(){
    
    int c,c1;
    FILE* relatorio;
    
    
    fprintf(relatorio,"<html>\n<head>\n\t<meta charset="UTF-8">\n</head>");
    fprintf(relatorio,"<body>\n\t<h1>Análise de Dados</h1>\n");
    
}
    fclose(relatorio);
    
FILE* abrehtml(){
    
    return fopen("relatorio.html","w");
    

        
}


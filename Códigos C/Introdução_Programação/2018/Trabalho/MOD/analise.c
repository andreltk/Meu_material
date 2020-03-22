#include "analise.h"

void gerahtml(){
    
    FILE *html;
    int qtgrupos,contador;
    int *lstgrupos;
    
    qtgrupos=contagrupos();
    listagrupos(qtgrupos,lstgrupos)
    
    html=fopen("relatorio.html""w");
    
    fprintf(html,"<html>\n");
    fprintf(html,"<head>\n");
    fprintf(html,"\t<meta charset="UTF-8">\n");
    fprintf(html,"</head>\n");
    fprintf(html,"<body>\n");
    fprintf(html,"\t<h1>Análise de Dados</h1>\n\n");
    fprintf(html,"\t<h2>Resumo por Grupo</h2>\n");
   
    fprintf(html,"\t\t<ul>\n");
    
    
    
    
    fprintf(html,"\t\t</ul>\n");
    
    
    
    
}
int contagrupos(){
    
    FILE *grupos
    int contador;
    
    grupos = fopen("grupos.txt", "r");
    
    contador=0;
    
    while(!eof(grupos)){
        contador++;
    }
    
    fclose(grupos);
    return contador;
    
}

void listagrupos(int *lista){
    
    FILE *grupos
    int contador,numerogrupo;
    char lixo[100];
    
    grupos = fopen("grupos.txt", "r");
    

    for(contador=0;!feof(grupos);contador++){
        
        fscanf(grupos,"%d",&numerogrupo);
        lista[contador]=numerogrupo;
        fgets(lixo,100,grupos);
    }
    
    fclose(lista);
}

int contaprodutos(int idgrupo){
    
    
    Produto auxiliar;
    FILE *arqprodutos;
    int contador,contador2;
    
    
    contador=0;
    arqprodutos = fopen("produtos.txt","r");
    
    
    while(!feof(arqprodutos)){
        
        fscanf(arqprodutos,"%d""\t""%s""\t""%f""\t""%f""\t""%d""\t""%d""\t""%d""\n",&auxiliar.cod,auxiliar.nome,&auxiliar.pcomp,&auxiliar.pvenda,&auxiliar.avenc,&auxiliar.qtd,&auxiliar.id);
        
        if(auxiliar.id==idgrupo){
        
            contador2++;
        }
    }
    
    fclose(arqprodutos);
    return contador2;
    
}

char * nomegrupo(int id){
    
    FILE *grupos
    int contador,numerogrupo;
    char lixo[100];
    
    grupos = fopen("grupos.txt", "r");
    

    for(contador=0;!feof(grupos);contador++){
        
        fscanf(grupos,"%d",&numerogrupo);
        
        if(numerogrupo==id){
        
        fgets(lixo,100,grupos);
        fclose(grupos);
        return lixo;
            
        }
        fgets(lixo,100,grupos);
        
    }
    
    fclose(lista);

    
    
}

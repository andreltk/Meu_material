/*
 * Alteações Principais:
 * 
 * Adicionei espaços e novas linha
 * Menus contém bordas
 * Usei a função clear para limpar a tela
 *
*/


#include "Produto.h"

Produto produto;
Produto aux;

void Elemento(){
  /*
    int opcao;	
    /*
     * Breaks trocados por continue para que seja possível 
     * selcionar outras opções
     * 
    
    do{
        system("clear");
        
        printf("====================== Módulo 1 - Produtos ======================\n");
        printf("Escolha uma opcao: \n");
        printf("\t1 - Incluir <item> \n");
        printf("\t2 - Consultar <item>\n");
        printf("\t3 - Listar <item>\n");
        printf("\t4 - Excluir <item> \n");
        printf("\t5 - Alterar <item> \n");
        printf("\t0 - Voltar ao menu principal\n");
        printf("============================================\n--->");
        scanf("%d", &opcao);
        
        switch(opcao){
            
            case 1:
                incelem();
                continue;
                
            case 2:
              //  conselem();
                continue;
                
            case 3:
                liselem();
                continue;
                
            case 4:
                excelem();
                continue;
                
            case 5:
                altelem();
                continue;
                
            case 0:
                return;
        }
        
    }
    */
}

void incelem(){
    /*
    FILE *elemento;
    FILE *categoria;
    int cod;
    char vet[TAM_STRINGS];
    
    elemento = fopen("produto.txt","a+");
    
    printf("Digite o código do produto: ");
    
    scanf("%d", &produto.cod);
    
    while(!feof(elemento)){
        
        fscanf(elemento," %[^\t]",cod);
        fscanf(elemento," %[^\n]",vet);
        
        if(cod == produto.cod){
            
            printf("\nElemento ja existente!\n");
            
            printf("\nDigite outro codigo");
            
            scanf("%d", &produto.cod);
            
            rewind(elemento);
        }
    }
    
    printf("\nDigite o nome do produto: ");
    scanf("%s", produto.nome);
    
    printf("\nDigite o preço de compra: ");
    scanf("%f", produto.pcomp);
    
    printf("\nDigite o preço de venda: ");
    scanf("%f", produto.pvenda);
    
    while(produto.pcomp > produto.pvenda){
        printf("Preços invalidos, digite um novo preço de venda:");
        scanf("%d", &produto.pvenda);
    }
    printf("\nDigite o ano de vencimento: ");
    scanf("%d",&produto.avenc);
    
    printf("\nDigite a quantidade em estoque: ");
    scanf("%d", &produto.qtd);
    
    if(produto.qtd<0){
        printf("Quantidade inváida, digite novamente: ");
        scanf("%d", &produto.qtd);
    }
    
    printf("\nDigite o id do grupo: ");
    
    scanf("%d", &produto.id);
    
    categoria = fopen("grupos.txt", "a+");
    
    while(!feof(categoria)){
        
        fscanf(categoria," %[^\t]",cod);
        fscanf(categoria," %[^\n]",vet);
        
        if(cod == produto.id){
            
            printf("\nGrupo encontrado!Elemento adicionado\n");
            
            rewind(categoria);
            break;
        }
        
        if(feof(categoria)){
            
            printf("\nGrupo não encontrado!Informe outro id ou 0 para voltar a tela inicial:\n");
            scanf("%d", &produto.id);
            
            if(produto.id == 0)
                
                return;
            rewind(categoria);
        }
    }
    
    /*
     * trocado de produto para elemento o primeiro argumento do fprintf
     * 
    
    
    fprintf(elemento,"%d\t%s\t%f\t%f\t%d\t%d\t%d\n", 
            produto.cod,produto.nome,produto.pcomp,
            produto.pvenda,produto.avenc,produto.qtd,produto.id);
    */
}

void conselem(){
    /*
    FILE *elemento;
    int cod;
    char vet[100];
    char str[500];
    
    elemento = fopen("produto.txt","a+");
    
    printf("Digite o codigo do elemento que queira procurar:");
    
    scanf("%d",&cod);
    
    while(!feof(elemento)){
        
        fscanf(elemento," %[^\t]",produto.cod);
        fscanf(elemento," %[^\n]",vet);
        
        if(cod == produto.cod){
            
            printf("\nProduto encontrado!\n");
            fscanf(elemento,"%d %[^\t] %f %f %d %d %d",&produto.cod,produto.nome,
                   &produto.pcomp,&produto.pvenda,&prod.qtd,&produto.id);
            
            fprintf(,"%d\t%s\t%f\t%f\t%d\t%d\t%d\t",produto.cod,produto.nome, 
                    produto.pcomp,produto.pvenda,prod.qtd,produto.id);
        }
*/	
}

void liselem(){
  /*  
    FILE *elemento;
    char x;
    int forma,i,j;
    char aux[30];
    int auxi;
    
    Produto vet[1000];
  
    elemento = fopen("produto.txt", "r");
    
    if(elemento== NULL){
        
        printf("Arquivo nao encontrado!\n");
        return;
    }
    
    while(1){
        
        x = fgetc(elemento);
    
        if(feof(elemento){
         
            break;
            printf("%c", x);
            
        }
    }
    
    printf("\n");
    
    printf("De qual forma deseja ordenar os elementos? Digite 1 para ordenar por nome e 2 para ordenar por código\n");
    scanf("%d",&forma);
    
    //1 -> por nome
    //2 -> por codigo
    
    if(forma == 1){
        
        printf("Ordenando por nome\n");
        
        for(i=1;i<100;i++){
            
            for(j=0;j<100;j++){
                
                if(strcmp(produto[j].nome,produto[j+1].nome)>0){
                    
                    strcpy(aux,produto[i].nome);
                    strcpy(produto[j].nome,produto[j+1].nome);
                    strcpy(produto[j+1].nome,aux);
                }
            }
        }
    }
    
    else if(forma == 2){
        
        printf("Ordenando por código\n");
        
        for(i=0;i!feof( );i++){
            
            for(j=0;j!feof( );j++){
                
                if(v[i]>v[i+1]){
                    
                    auxi = v[i];
                    v[i] = v[i+1];
                    v[i+1] = auxi;
                }
            }
        }
    }
    /*ADICIONAR OPÇÂO INValida
     *    else
     *        printf()
     */
}
    void excelem(){
        
    }
    
    void altelem(){
        
    }
    
    
    
    

#include "produtos.h"

Produto produto;
Produto aux;

FILE *produtos;
FILE *grupos;

void Produtos(){

    int opcao;
    
	system("clear");
    
    do{
		printf("\n\n================== Módulo 1 - Produtos =================\n");
		
        printf("Escolha uma opcao: \n");
		printf("\t1 - Incluir novo produto \n");
		printf("\t2 - Consultar produtos\n");
		printf("\t3 - Listar produtos\n");
		printf("\t4 - Excluir produtos\n");
		printf("\t5 - Alterar produto\n");
		printf("\t0 - Voltar ao menu principal\n");
		
		printf("========================================================\n---> ");
		
		scanf("%d", &opcao);
		switch(opcao){
			
			case 1:
				incprodutos();
				break;
			
			case 2:
				consprodutos();
				break;
			
			case 3:
				lisprodutos();
				break;
			
			case 4:
				excprodutos();
				break;
			
			case 5:
				altprodutos();
				break;
			
			case 0:
                system("clear");
                break;
			}
	}while(opcao != 0);

}

void incprodutos(){
	int cod;
	char vet[TAM_STRINGS];
	produtos = fopen("produtos.txt","a+");
	
	system("clear");
	
	printf("========================================================\n\n");
		
    	
	printf("Digite o código do produto: ");

	scanf("%d", &produto.cod);
	while(!feof(produtos)){
		fscanf(produtos," %d",&cod);
		fscanf(produtos," %[^\n]",vet);
		if(cod == produto.cod){
			printf("\nElemento ja existente!\n");
			printf("\nDigite outro codigo: ");
			scanf("%d", &produto.cod);
			rewind(produtos);
		}
	}
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite o nome do produto: ");
	
	scanf("%s", produto.nome);
	getchar();
	
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite o preço de compra: R$ ");
	scanf("%f", &produto.pcomp);
	
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite o valor de venda: R$ ");
	scanf("%f", &produto.pvenda);
	
	while(produto.pcomp > produto.pvenda){
	
		printf("\nPreço inválido! Digite um novo preço de venda: R$ ");
		scanf("%f", &produto.pvenda);
	
	}
	
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite o ano de vencimento: ");
	scanf("%d",&produto.avenc);
	
	while(produto.avenc < ANO_ATUAL){
	
		printf("\nData inválida! Tente de novo: ");
		scanf("%d", &produto.avenc);
	
	}
	
	
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite a quantidade em estoque: ");
	scanf("%d", &produto.qtd);
	
		
	if(produto.qtd<0){
	
		printf("Quantidade inváida, digite novamente: ");
		scanf("%d", &produto.qtd);
	}
	
	printf("--------------------------------------------------------");
		
	printf("\nDigite o id do grupo: ");

	
		
	scanf("%d", &produto.id);
	
	
	grupos = fopen("grupos.txt", "a+");
	
	
	//printf("\n------------------------------------------------------\n");
	
	/////////////////////////////////////
	
	while(!feof(grupos)){
	
		fscanf(grupos," %d",&cod);
		fscanf(grupos," %[^\n]",vet);
	
		if(cod == produto.id){
		
			printf("\n------------------------------------------------------\n");
	
		
		
			printf("===================================================\n");
	
			printf("\nProduto adicionado com sucesso!\n\n");
			rewind(grupos);
			break;
		}
	
		if(feof(grupos)){
	
			printf("\nGrupo não encontrado!\nInforme outro id ou digite 0 para voltar a tela inicial.");
			printf("\nDigite o id do grupo: ");

			scanf("%d", &produto.id);
	
			if(produto.id == 0) {
			
			return ;
			printf("\n------------------------------------------------------\n");
			
			}
			
			rewind(grupos);
		}
	}

	fprintf(produtos,"%d\t%s\t%.2f\t%.2f\t%d\t%d\t%d\n", produto.cod,produto.nome,produto.pcomp,
												produto.pvenda,produto.avenc,produto.qtd,produto.id);

	fclose(produtos);
	fclose(grupos);
}

void consprodutos(){
	
	int cod,ok;
	char lixo[TAM_STRINGS];
	char str[TAM_STRINGS];
	
	produtos = fopen("produtos.txt","r");
	
	printf("Consulta de produtos\n");
	
	printf("Digite o codigo do elemento que queira procurar: ");
	scanf("%d",&cod);
	
	ok=0;
	
	while(!feof(produtos)){
		
		fscanf(produtos,"%d",&produto.cod);
		//fscanf(produtos," %[^\n]",vet);
		
		if(cod == produto.cod){
		
			
				
			printf("\n\nProduto encontrado!\n");
			
			fscanf(produtos,"\t%[^\t]",produto.nome);
			fscanf(produtos,"\t%f\t%f",&produto.pcomp,&produto.pvenda);
			fscanf(produtos,"\t%d\t%d\t%d",&produto.avenc,&produto.qtd,&produto.id);
			
			printf("Dados do produto\n");
			printf("======================================================================================================\n");
    		printf("ID\tNOME\tVALOR DE COMPRA\tVALOR DE VENDA\tVENCIMENTO\tESTOQUE\tGRUPO\n");
    		printf("======================================================================================================\n");
			
			
		
			fprintf(stdout,"%d\t%s\tR$ %.2f\tR$ %.2f\t%d\t%d\t%d\n",produto.cod,produto.nome,produto.pcomp,produto.pvenda,produto.avenc,produto.qtd,produto.id);
			printf("======================================================================================================\n\n");
		
			printf("\n\n");
		
			ok = 1;
		
			break;
		}
		
		else{
				fgets(lixo,TAM_STRINGS,produtos);
				continue;					
		}
		
	}
	if(ok==0){
		printf("\nProduto não encontrado!\nTente novamente.\n");
		return;
		}
	fclose(produtos);
}

void lisprodutos(){
	int forma,i,j,tam=0;
	Produto Produto[100];
	char a,lixo[100];
	produtos = fopen("produtos.txt", "r");
	if(produtos == NULL){
		printf("Arquivo nao encontrado!\n");
		return;
	}
	i=0;
    //Le os dados do arquivo,guarda em um vetor e salva o numero de linhas atraves da variavel tam
    while(1){
        fscanf(produtos,"%d",&Produto[i].id);
        fscanf(produtos," %[^\t] %[^\n]",Produto[i].nome,lixo);
        if(feof(produtos)) break;
        tam++;
        i++;
    }
	printf("===================================================\n");
    printf("Listagem dos produtos\n");
    printf("===================================================\n\n");
    

    printf("\nDe qual forma deseja ordenar os elementos?\n\t1 - Por nome\n\t2 - Por id\n----> ");
    
    scanf("%d",&forma);
    if(forma == 1){
        
        
        system("clear");
        
        printf("Nomes em ordem alfabetica:\n");
        printf("===================================================\n");
        printf("ID\tNOME\tPREÇO DE VENDA\tQUANTIDADE\\n");
        printf("===================================================\n");
        
        ordenaNomeProd(Produto,tam);
        
        //Imprime os dados em ordem alfabetica
        for(i=0; i<tam; i++){
            printf("%d%s\n",Produto[i].id,Produto[i].nome);
        }
        
        printf("===================================================\n\n");
        
    }
    
    else if(forma == 2){
        
        system("clear");
        
        printf("Ordenado por ID\n");
        printf("===================================================\n");
        printf("ID\tNOME\n");
        printf("===================================================\n");
        
        ordenaIdProd(Produto,tam);
        
        //Imprime os dados de acordo com o id
        for(i=0; i<tam; i++){
            
            printf("%d %s\n",Produto[i].id,Produto[i].nome);
        }
        
        printf("===================================================\n");
        
    }
    getchar();
    a = fclose(produtos);
    if(a==EOF) printf("ERRO!\n");
    printf("\n");
    
		
}


void excprodutos(){
    FILE *produtosaida;
	int idprocurado;
	produtos = fopen("produtos.txt", "r");
	produtosaida = fopen("produtos_novos.txt","w");

	if(produtos == NULL || produtosaida == NULL){
		printf("Problema na abertura\n");
		return;
	}
	else{
		printf("Digite o id que você quer apagar:\n");
		scanf("%d", &idprocurado);
		//if(temproduto(idprocurado))return;
		while(1){
			//fscanf(elemento,"%d",&produto.cod);
			//fscanf(elemento,"%[^\n]s",grupo.nome);
			fscanf(produtos,"%d %[^\t] %f %f %d %d %d",&produto.cod,produto.nome,&produto.pcomp,&produto.pvenda,&produto.avenc,&produto.qtd,&produto.id);
			if(feof(produtos)) break;
			if(idprocurado != produto.cod){
				fprintf(produtosaida,"%d\t%s\t%.2f\t%.2f\t%d\t%d\t%d\t",produto.cod,produto.nome,produto.pcomp,produto.pvenda,produto.avenc,produto.qtd,produto.id);
			}

		}

	}
	fclose(produtos);
	fclose(produtosaida);
	remove("produtos.txt");
	rename("produtos_novos.txt","produtos.txt");
}


void altprodutos(){
   
    FILE *produtosaida;
   	int opcao1,cod,ok=0;
    int novocod,novoavenc,novaqtd,novoid;
    char novonome[100],lixo[300];
    float novopven,novopcomp;
	
	produtosaida=fopen("produtosaida.txt","w");


	system("clear");


	printf("========================================================\n");
			 
			 
		
        
   while(!feof(produtos)){
	
		printf("Digite o codigo do produto a ser alterado: ");
		
		
/////////////////////////////////////////////////////////////////////////////////

		while(!feof(produtos)){
		
		fscanf(produtos,"%d",&produto.cod);
		//fscanf(produtos," %[^\n]",vet);
		
		if(cod == produto.cod){
		
		
			ok = 1;
		
			break;
		}
		
		else{
				fgets(lixo,TAM_STRINGS,produtos);
				continue;					
		}
		
	}
	if(ok==0){
		printf("\nProduto não encontrado!\nTente novamente.\n");
		return;
		}
/////////////////////////////////////////////////////////////////////////////////
	
			printf("Digite o novo ID: ");
            scanf("%d",&novocod);
             
	        printf("Digite o novo nome:");
            scanf("%[^\n]",novonome);
            
            printf("Digite o novo preco de venda:");
            scanf("%f",&novopven);
            
            printf("Digite o novo preco de compra:");
            scanf("%f",&novopcomp);
        
            printf("Digite o novo ano de vencimento:");
            scanf("%d",&novoavenc);
        
            printf("Digite a nova quantidade:");
            scanf("%d",&novaqtd);
        
			printf("Digite o novo ID:");
            scanf("%d",&novoid);
            		 
	
	while(!feof(produtos)){
		
		fscanf(produtos,"%d",&produto.cod);
		
		
		if(cod == produto.cod)
			
			fprintf(produtosaida,"%d\t%s\t%.2f\t%.2f\t%d\t%d\t%d\n",novocod,novonome,novopcomp,novopven,novoavenc,novaqtd,novoid);
		
		
		else{
				fgets(lixo,TAM_STRINGS,produtos);
				fprintf(produtosaida,"%d\t%s",produto.cod,lixo);
				continue;					
		}
		
			
			
			
		
		
	}
	

	
	fclose(produtos);
	fclose(produtosaida);
	remove("produtos.txt");
	rename("produtos_novos.txt","produtos.txt");		

}   
}
   


void ordenaNomeProd(Produto Produto[], int tam){
  int i,j;
  for(j=0;j<tam;j++){
  	for(i=j+1;i<tam;i++){
          if(strcmp(Produto[j].nome,Produto[i].nome)>0){
              aux = Produto[j];
              Produto[j] = Produto[i];
              Produto[i] = aux;
          }
      }
  }
}

void ordenaIdProd(Produto Produto[],int tam){
  int i,j;
  for(j=0;j<tam;j++){
        for(i=j+1;i<tam;i++){
            if(Produto[j].id > Produto[i].id){
                aux = Produto[j];
                Produto[j] = Produto[i];
                Produto[i] = aux;
            }
        }
    }
}



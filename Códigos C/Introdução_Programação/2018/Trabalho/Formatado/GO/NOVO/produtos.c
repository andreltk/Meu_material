#include "produtos.h"

Produto produto;
Produto aux;

FILE *produtos;
FILE *grupos;

void Produtos(){

    int opcao;
	
    do{
	
        printf("Escolha uma opcao: \n");
		printf("\t1 - Incluir <item> \n");
		printf("\t2 - Consultar <item>\n");
		printf("\t3 - Listar <item>\n");
		printf("\t4 - Excluir <item> \n");
		printf("\t5 - Alterar <item> \n");
		printf("\t0 - Voltar ao menu principal\n");
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
			//case 5:
				//altprodutos();
				//break;
			case 0:
				return;
			}
	}while(opcao != 0);

}

void incprodutos(){
	int cod;
	char vet[100];
	produtos = fopen("produtos.txt","a+");
	
	printf("Digite o código do produto: ");

	scanf("%d", &produto.cod);
	while(!feof(produtos)){
		fscanf(produtos," %d",&cod);
		fscanf(produtos," %[^\n]",vet);
		if(cod == produto.cod){
			printf("\nElemento ja existente!\n");
			printf("\nDigite outro codigo");
			scanf("%d", &produto.cod);
			rewind(produtos);
		}
	}
	printf("\nDigite o nome do produto: ");
	scanf("%s", produto.nome);
	getchar();
	printf("\nDigite o preco de compra: ");
	scanf("%f", &produto.pcomp);
	printf("\nDigite o preco de venda: ");
	scanf("%f", &produto.pvenda);
	while(produto.pcomp > produto.pvenda){
		printf("Preços invalidos, digite um novo preço de venda:");
		scanf("%f", &produto.pvenda);
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
	grupos = fopen("grupos.txt", "a+");
	while(!feof(grupos)){
		fscanf(grupos," %d",&cod);
		fscanf(grupos," %[^\n]",vet);
		if(cod == produto.id){
			printf("\nGrupo encontrado!Elemento adicionado\n\n");
			rewind(grupos);
			break;
		}
		if(feof(grupos)){
			printf("\nGrupo não encontrado!Informe outro id ou 0 para voltar a tela inicial:\n");
			scanf("%d", &produto.id);
			if(produto.id == 0) return ;
			rewind(grupos);
		}
	}

	fprintf(produtos,"%d\t%s\t%.2f\t%.2f\t%d\t%d\t%d\n", produto.cod,produto.nome,produto.pcomp,
												produto.pvenda,produto.avenc,produto.qtd,produto.id);

	fclose(produtos);
	fclose(grupos);
}

void consprodutos(){
	int cod,ok=0;
	char vet[100];
	char str[500];
	char lixo;
	produtos = fopen("produtos.txt","a+");
	printf("Consulta de produtos\n");
	printf("Digite o codigo do elemento que queira procurar: ");
	scanf("%d",&cod);
	while(!feof(produtos)){
		fscanf(produtos,"%d",&produto.cod);
		//fscanf(produtos," %[^\n]",vet);
		if(cod == produto.cod){
			printf("\nProduto encontrado!\n");
			fscanf(produtos,"%s %f %f %d %d %d",produto.nome,&produto.pcomp,&produto.pvenda,&produto.avenc,&produto.qtd,&produto.id);
			lixo = fgetc(produtos);
			printf("Dados do produto:\t");
			fprintf(stdout,"%d\t%s\t%.2f\t%.2f\t%d\t%d\t%d\t",produto.cod,produto.nome,produto.pcomp,produto.pvenda,produto.avenc,produto.qtd,produto.id);
			printf("\n\n");
			ok = 1;
			break;
		}
	}
	if(ok=0) printf("Produto nao encontrado!\n");
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
	/*while(1){
		x = fgetc(produtos);
		if(feof(produtos)) break;
		printf("%c", x);
	} */
	i=0;
    while(1){
        fscanf(produtos,"%d",&Produto[i].id);
        fscanf(produtos," %[^\t] %[^\n]",Produto[i].nome,lixo);
        if(feof(produtos)) break;
        printf("Id: %d\t",Produto[i].id);
        printf("Nome: %s\n",Produto[i].nome);
        tam++;
        i++;
    }
	printf("\n");
	printf("Listagem dos grupos\n");
	printf("\nDe qual forma deseja ordenar os elementos? Digite 1 para ordenar por nome e 2 para ordenar por id\n");
	scanf("%d",&forma);
	if(forma == 1){
		printf("Ordenando por nome\n");
		ordenaNomeProd(Produto,tam);
        printf("Nomes em ordem alfabetica:\n");
        for(i=0; i<tam; i++){
            printf("%d %s\n",Produto[i].id,Produto[i].nome);
        }
	}
	else if(forma == 2){
		printf("Ordenando por código\n");
		ordenaIdProd(Produto,tam);
        printf("\n\nId's ordenados: \n");
        for(i=0; i<tam; i++){
            printf("%d %s\n",Produto[i].id,Produto[i].nome);
        }
	}
    getchar();

		
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

/*
void altprodutos(){
    int opcao1;
    int novocod,novoavenc,novaqtd,novoid;
    char novonome[100];
    float novopven,ovopcomp;

    printf("Altera elemento!\n");
    printf("Escolha uma opcao para ser alterada: \n");
	printf("\t1 - Codigo \n");
	printf("\t2 - Nome\n");
	printf("\t3 - Preco de compra\n");
	printf("\t4 - Preco de venda\n");
	printf("\t5 - Ano de vencimento\n");
	printf("\t6 - Quantidade\n");
	printf("\t7 - Id\n");
	printf("\t0 - Voltar ao menu principal\n");
	scanf("%d", &opcao1);
	switch(opcao1){
        case 1:
            printf("Altera codigo\n");
            printf("Digite o novo codigo:");
            scanf("%d",&novocod);
            printf("\nNovo codigo: %d\n",novocodigo);
            break;
        case 2:
            printf("Altera nome\n");
            printf("Digite o novo nome:");
            scanf("% [^\n]",novonome);
            printf("\nNovo nome: %s\n",novonome);
            break;
        case 3:
            printf("Altera preco de venda\n");
            printf("Digite o novo preco de venda:");
            scanf("%f",&novopven);
            printf("\nNovo codigo: %f\n",novopven);
            break;
        case 4:
            printf("Altera preco de compra\n");
            printf("Digite o novo preco de compra:");
            scanf("%f",&novopcomp);
            printf("\nNovo preco de compra: %f\n",novopcomp);
            break;
        case 5:
            printf("Altera o ano de vencimento\n");
            printf("Digite o novo ano de vencimento:");
            scanf("%d",&novoavenc);
            printf("\nNovo ano de vencimento: %d\n",novoavenc);
            break;
        case 6:
            printf("Altera a quantidade\n");
            printf("Digite a nova quantidade:");
            scanf("%d",&novaqtd);
            printf("\nNova quantidade: %d\n",novaqtd);
            break;
        case 7:
            printf("Altera id\n");
            printf("Digite o novo id:");
            scanf("%d",&novoid);
            printf("\nNovo id: %d\n",novoid);
            break;
        default:
            break;
}
*/

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



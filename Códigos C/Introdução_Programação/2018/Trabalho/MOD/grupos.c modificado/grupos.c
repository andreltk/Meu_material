#include "grupos.h"

Grupo grupo,aux;
FILE *grupos;

void Grupos(){
    int opcao;
    
    system("clear");
    
    do{
        
        printf("====================== Módulo 2 - Grupos ======================\n");
        printf("Escolha uma opcao: \n");
        printf("\t1 - Incluir novo grupo \n");
        printf("\t2 - Listar grupos\n");
        printf("\t3 - Excluir grupo \n");
        printf("\t0 - Voltar ao menu principal\n");
        printf("===================================================================\n---> ");
        
        scanf("%d", &opcao);
        
        switch(opcao){
            
            case 0:
                system("clear");
                printf("Retornando ao menu principal...\n\n");
                break;
                
            case 1:
                incgrupo();
                break;
                
            case 2:
                lisgrupo();
                break;
                
            case 3:
                excgrupo();
                break;
                
            default:
                printf("Retornando ao menu principal...\n");
                break;
        }
    }while(opcao != 0);
    
}

void incgrupo(){
    
    int id;
    char vet[TAM_STRINGS],a;
    
    grupos = fopen("grupos.txt", "a+");
    
    system("clear");
    
    printf("===================================================\n");
    printf("Incluindo novo grupo\n");
    printf("===================================================\n\n");
    printf("Digite o id do grupo: ");
    
    scanf("%d", &grupo.id);
    
    rewind(grupos);
    
    while(!feof(grupos)){
        
        fscanf(grupos,"%d",&id);
        fscanf(grupos," %[^\n]",vet);
        
        if(id == grupo.id){
            printf("\nId ja existente!\n");
            printf("\nDigite outro id: ");
            scanf("%d", &grupo.id);
        }
    }
    
    printf("\nDigite o nome do grupo: ");
    
    scanf("%s", grupo.nome);
    
    fprintf(grupos,"%d\t%s\n",grupo.id,grupo.nome);
    
    a = fclose(grupos);
    
    printf("===================================================\n");
    
    
    if(a==EOF) printf("ERRO!\n");
    
    else printf("\nAdicionado com sucesso!\n\n");
}

void lisgrupo(){
    
    Grupo Grupo[TAM_STRINGS];
    
    char a;
    int i,j,forma,tam=0;
    
    grupos = fopen("grupos.txt", "r");
    
    if(grupos == NULL){
        printf("Arquivo nao encontrado!\n");
        return;
    }
    
    i=0;
    
    //Le os dados do arquivo e guarda em um vetor
    while(1){
        
        fscanf(grupos,"%d",&Grupo[i].id);
        
        fscanf(grupos,"%[^\n]",Grupo[i].nome);
        
        if(feof(grupos)) break;
        
        tam++;
        
        i++;
    }
    printf("===================================================\n");
    printf("Listagem dos grupos\n");
    printf("===================================================\n\n");
    

    printf("\nDe qual forma deseja ordenar os elementos?\n\t1 - Por nome\n\t2 - Por id\n----> ");
    
    scanf("%d",&forma);
    if(forma == 1){
        
        
        system("clear");
        
        printf("Nomes em ordem alfabetica:\n");
        printf("===================================================\n");
        printf("ID\tNOME\n");
        printf("===================================================\n");
        
        ordenaNome(Grupo,tam);
        
        //Imprime os dados em ordem alfabetica
        for(i=0; i<tam; i++){
            printf("%d%s\n",Grupo[i].id,Grupo[i].nome);
        }
        
        printf("===================================================\n\n");
        
    }
    
    else if(forma == 2){
        
        system("clear");
        
        printf("Ordenado por ID\n");
        printf("===================================================\n");
        printf("ID\tNOME\n");
        printf("===================================================\n");
        
        ordenaId(Grupo,tam);
        
        //Imprime os dados de acordo com o id
        for(i=0; i<tam; i++){
            
            printf("%d %s\n",Grupo[i].id,Grupo[i].nome);
        }
        
        printf("===================================================\n");
        
    }
    getchar();
    a = fclose(grupos);
    if(a==EOF) printf("ERRO!\n");
    printf("\n");
    
    
}

void excgrupo(){
    
    FILE *gruposaida;
    int idprocurado,condicao,id;
    char vet[TAM_STRINGS];

    grupos = fopen("grupos.txt", "r");
    gruposaida = fopen("grupos_novos.txt","w");
    
    if(grupos == NULL || gruposaida == NULL){
        printf("Problema na abertura\n");
        return;
    }
    else{
        
        system("clear");
        printf("===================================================\n");
        printf("Exclusão de grupo\n");
        printf("===================================================\n\n");
        
        
        
        condicao=0;
        
        while(condicao!=1){   
            
            printf("Digite o ID que você deseja excluir: \n");
            scanf("%d", &idprocurado);
            //getchar(); 
          
            while(!feof(grupos)){
            
                fscanf(grupos,"%d",&id);
                fscanf(grupos," %[^\n]",vet);
            
                if(idprocurado == id){
                    condicao=1;
                }
            }
            
            if(condicao!=1)
                printf("\nID não encontrado!\nTente novamente:\n");
		//getchar();              
		scanf("%d", &idprocurado);
            	//getchar();  
        }
        
        
        while(condicao!=1){
            
            fscanf(grupos,"%d",&grupo.id);
            fscanf(grupos,"%[^\n]s",grupo.nome);
            
            if(feof(grupos)) break;
            if(idprocurado!=grupo.id){
                fprintf(gruposaida,"%d\t%s\n",grupo.id,grupo.nome);
            }
        }
        printf("===================================================\n");
    }
    
    fclose(grupos);
    fclose(gruposaida);
    
    remove("grupos.txt");
    rename("grupos_novos.txt","grupos.txt");

    printf("\nExclusão concluida com sucesso!\n\n");
}

void ordenaNome(Grupo Grupo[], int tam){
    int i,j;
    for(j=0;j<tam;j++){
        for(i=j+1;i<tam;i++){
            if(strcmp(Grupo[j].nome,Grupo[i].nome)>0){
                aux = Grupo[j];
                Grupo[j] = Grupo[i];
                Grupo[i] = aux;
            }
        }
    }
}

void ordenaId(Grupo Grupo[],int tam){
    int i,j;
    for(j=0;j<tam;j++){
        for(i=j+1;i<tam;i++){
            if(Grupo[j].id > Grupo[i].id){
                aux = Grupo[j];
                Grupo[j] = Grupo[i];
                Grupo[i] = aux;
            }
        }
    }
}



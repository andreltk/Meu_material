/*
 * Alteações Principais:
 * 
 * Adicionei espaços e novas linha
 * Menus contém bordas
 * Usei a função clear para limpar a tela
 * 
 */

#include "Grupo.h"

Grupo grupo;

FILE *categoria;

/*
 * Adicionei a opção 0 e texto para Inválida
 *
 */
void Categoria(){
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
                break;
                
            case 1:
                system("clear");
                inccat();
                break;
                
            case 2:
                system("clear");
                liscat();
                break;
                
            case 3:
                system("clear");
                exccat();
                break;
                
            default:
                printf("\n!!!!!!!!!!!!!!!!!!!\n! Opção Inválida! !\n!!!!!!!!!!!!!!!!!!!\n");
                break;
        }
        
    }while(opcao != 0);
    
}

/*
 * Alteações para verificar id duplicados
 * 
 * 
 */


void inccat(){
    
    int id,condicao;
    char vet[TAM_STRINGS],a;
    
    categoria = fopen("categoria.txt","r");
    
    condicao==FALSO;
    
    while(condicao!=VERDADEIRO){
        
        printf("Digite o id da categoria: ");
        
        scanf("%d", &grupo.id);
        
        condicao==VERDADEIRO;
        
        while(!feof(categoria)){
            
            fscanf(categoria,"%d",&id);
            printf("LIDO = %d \n",id);
            
            if(id == grupo.id){
                
                printf("\nId ja existente!\n");
                
                printf("\nDigite outro id");
                
                condicao = FALSO;
                break;
            }
        }
    }
    
    
    fclose(categoria);
    
    categoria = fopen("categoria.txt","a+");
    
    printf("\nDigite o nome da categoria: ");
    
    //Alterado para ler espaços
    scanf("%[^\n]s", grupo.nome);
    
    fprintf(categoria,"%d\t%s\n",grupo.id,grupo.nome);
    
    a = fclose(categoria);
    
    if(a==EOF) printf("ERRO!\n");
    
    else
        printf("\nGrupo adicionado com sucesso!\n\n");
}

//Adicionei bordas a Lista
void liscat(){
    
    char x,a;
    
    categoria = fopen("categoria.txt", "r");
    
    if(categoria==NULL){
        
        printf("Arquivo não encontrado!\n");
        return;
        
        
    }
    
    printf("================ Lista de usuários ================\n\n");
    printf("===================================================\n");
    printf("ID\tNOME\n");
    printf("===================================================\n");
    
    while(1){
        
        x = fgetc(categoria);
        
        if(feof(categoria)) break;
        
        printf("%c", x);
    }
    
    a = fclose(categoria);
    
    if(a==EOF) printf("ERRO!\n");
    
    printf("===================================================\n");
    printf("\n");
}

void exccat(){
    
    FILE *categoriasaida;
    int idprocurado;
    
    categoria = fopen("categoria.txt", "r");
    
    categoriasaida = fopen("categoria_nova.txt","w");
    
    if(categoria == NULL || categoriasaida == NULL){
        
        printf("Problema na abertura\n");
        
        return;
        
        
    }
    else{
        
        printf("Digite o id que você quer apagar:\n");
        
        scanf("%d", &idprocurado);
        
        //   if(temproduto(idprocurado))return;
        
        while(!feof(categoria)){
            fscanf(categoria,"%d %[^\n]s",&grupo.id,grupo.nome);
            
            if(idprocurado!=grupo.id){
                fprintf(categoriasaida,"%d\t%s\n",grupo.id,grupo.nome);
            }
        }
    }
    
    fclose(categoria);
    fclose(categoriasaida);
    
    remove("categoria.txt");
    rename("categoria_nova.txt","categoria.txt");
    
    
    
    
}



















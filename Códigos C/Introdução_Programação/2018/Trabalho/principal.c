#include"Usuário.h"

int montarMenu();
int main(){
    
    int x;
    
    do{
        x=fzrlogin();
    }while(x!=1);
    
    montarMenu();
    
    return 0;
    
    
}
int montarMenu() {
 
 	system("clear");
 
    printf("--Bem Vindo--\n\n");
    
    int opcao;
    
    do {
        printf("========================= Menu Principal =========================\n");
        printf("Escolha uma opcao: \n");
        printf("\t1 - Produtos \n");
        printf("\t2 - Grupos\n");
        printf("\t3 - Análise de Dados\n");
        printf("\t4 - Controle de Acesso \n");
        printf("\t0 - Sair\n");
        printf("==================================================================\n---> ");
        scanf("%d", & opcao);
        switch (opcao) {
            
            case 0:
            	printf("\n--Até logo (◠‿◠)--\n\n");
            	return 0;
            //case 1:
            //elemento();
            //case 2:
            //categoria();
            //case 3:
            //alterar();
            case 4:
                menuCA();
                continue;
                //case 5:
                //listar();
                
            default:
                printf("!!!!!!!!!!!!!!!!!!!\n! Opção Inválida! !\n!!!!!!!!!!!!!!!!!!!\n");
        }
    }while (opcao != 0);
    
    return 0;
    
}

















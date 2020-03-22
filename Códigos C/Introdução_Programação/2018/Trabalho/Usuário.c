#include"Usuário.h"

int fzrlogin(){
    
    usr l1;
    int x;
    
    
    printf("===================================================\n");
    printf("Digite o nome de usuário: ");
    
    scanf("\n%s",l1.nmusr);
    
    printf("\n");
    printf("Digite a senha: ");
    
    scanf("\n%s",l1.senha);
    
    
    printf("===================================================\n");
    
    x=confsenha(l1.nmusr,l1.senha);
    
    if(x==1)
        return 1;
    
    if(x==2){
        printf("Nome de usuário ou senha incorretos!\n");
        return 0;
    }
}

void menuCA(){
    int opcao;	
    
    system("clear");
    
    do {
        printf("\n\n================== Módulo 4 - Controle de Acesso =================\n");
        printf("Escolha uma opcao: \n");
        printf("\t1 - Incluir usuário \n");
        printf("\t2 - Excluir usuário\n");
        printf("\t3 - Listar usuários (em ordem alfabética de nome)\n");
        printf("\t4 - Alterar senha do usuário \n");
        printf("\t0 - Voltar ao menu principal\n");
        printf("==================================================================\n\n---> ");
        //
        
        scanf("%d", & opcao);
        
        switch (opcao) {
            
            case 0:
            	system("clear");
                break;
            case 1:
                incluirusr();
                continue;
            case 2:
                excluirusr();
                continue;
            case 3:
                listarusr();
                continue;
            case 4:
                altsenha();
                continue;
            default:
                printf("\n!!!!!!!!!!!!!!!!!!!\n! Opção Inválida! !\n!!!!!!!!!!!!!!!!!!!\n");
        }
    }while (opcao != 0);
}

void incluirusr(){
    
    FILE *bd;
    usr l1;
    int x;
    
    system("clear");
    
    do{
        printf("===================================================\n");
        printf("Digite um nome para o novo usuário: ");
        
        scanf("\n%[^\n]s",l1.nmusr);
        
        x=lczusr(l1.nmusr);
        
        if(x==1)
            printf("\nEsse nome já existe.\nPor favor, tente outro!\n");
    }while(x==1);
    
    do{
        printf("Digite agora uma senha: ");
        
        
        scanf("\n%[^\n]s",l1.senha);
        
        if(strlen(l1.senha)<3)
            printf("\nSenha com menos de 3 caracteres.\nTente outra.\n\n");
        
    }while(strlen(l1.senha)<3); 
    
    printf("===================================================\n");
    
    bd=arqusrad();
    
    fprintf(bd,"login\t%s\t%s\n",criptgrf(l1.senha),l1.nmusr);
    
    fclose(bd);
    
    printf("\nAdicionado com sucesso!\n");
    
}  

void excluirusr(){
    
    usr l1;
    int x;
    
    system("clear");
    
    do{
        printf("===================================================\n");
        printf("Digite o nome do usuário a ser excluído: ");
        
        scanf("\n%[^\n]s",l1.nmusr);
        
        x=lczusr(l1.nmusr);
        
        if(x!=1)
            printf("\nEsse nome não existe, talvez já tenha sido excluído.\nPor favor, tente outro!\n");
    }while(x!=1);
    
    
  do{
        printf("Digite a senha para comfirmar a remoção: ");
            
        scanf("\n%[^\n]s",l1.senha);
        
        x=confsenha(l1.nmusr,l1.senha);
        
        if(x!=1)
            printf("\nSenha incorreta!\nPor favor, tente de novo.\n");
        
    }while(x!=1);
    
    
    printf("===================================================\n");
    
    if(removeusr(l1.nmusr,l1.senha)==1)
        printf("Removido com sucesso!\n");
    
    else
        printf("Erro! Tente novamente.\n");
    
}   

void listarusr(){
    
    int nmr,c;
    nms *usrs;
    
    nmr=contausrs();
    
    usrs=(nms *)malloc(sizeof(nms)*nmr);
    
    coletanomes(usrs);
    
    organizausr(usrs,nmr);
    
    printf("================ Lista de usuários ================\n");
    
    for(c=0;c<nmr;c++){
        
        
        printf("%d - %s\n",c+1,usrs[c].nomeusr);
    }
    
    printf("===================================================\n");
    
}

void altsenha(){
    
    
    usr l1;
    int x;
    char nvsenha[100];
    
    x=0;
    
    system("clear");
    
    printf("===================================================\n");
    do{
        printf("Digite o nome do usuário que deseja alterar a senha: ");
        
        scanf("\n%[^\n]s",l1.nmusr);
        
        x=lczusr(l1.nmusr);
        
        if(x!=1)
            printf("\nEsse nome não existe!\nPor favor, tente outro.\n");
    }while(x!=1);
    
    x=0;
    
    do{
        printf("Digite a senha atual: ");
        
        scanf("\n%[^\n]s",l1.senha);
        
        x=confsenha(l1.nmusr,l1.senha);
        
        if(x!=1)
            printf("\nSenha incorreta!\nPor favor, tente de novo.\n");
        
    }while(x!=1);
    
    do{
        printf("Agora, digite a nova senha: ");
        
        
        scanf("\n%[^\n]s",nvsenha);
        
        if(strlen(nvsenha)<3)
            printf("\nSenha com menos de 3 caracteres.\nTente outra.\n\n");
        
    }while(strlen(nvsenha)<3); 
    
    printf("===================================================\n");
    
    if(mudasenha(l1.nmusr,nvsenha)==1)
        printf("Alterada com sucesso!\n");
    
    else
        printf("Erro! Tente novamente.\n");
    
}












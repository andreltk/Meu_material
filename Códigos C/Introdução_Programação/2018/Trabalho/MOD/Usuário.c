#include"Usuário.h"

int fazerlogin(){
    
    usuario auxiliar;
    int condicao;
    
    
    printf("===================================================\n");
    printf("Digite o nome de usuário: ");
    
    scanf("\n%s",auxiliar.nmusr);
    
    printf("\n");
    printf("Digite a senha: ");
    
    scanf("\n%s",auxiliar.senha);
    
    
    printf("===================================================\n");
    
    condicao=conferesenha(auxiliar.nmusr,auxiliar.senha);
    
    if(condicao==1)
        return 1;
    
    if(condicao==0){
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
        
        scanf("%d", & opcao);
        
        switch (opcao) {
            
            case 0:
                system("clear");
                break;
        
            case 1:
                incluirusuario();
                continue;
            
            case 2:
                excluirusuario();
                continue;
            
            case 3:
                listarusuario();
                continue;
            
            case 4:
                alterarsenha();
                continue;
            
            default:
                printf("\n!!!!!!!!!!!!!!!!!!!\n! Opção Inválida! !\n!!!!!!!!!!!!!!!!!!!\n");
        }
        
    }while (opcao != 0);
}

void incluirusuario(){
    
    FILE *bancodados;
    usuario auxiliar;
    int condicao;
    
    system("clear");
    
    do{
        printf("===================================================\n");
      
        printf("Digite o seu nome: ");
        
        scanf("\n%[^\n]s",auxiliar.nome);
        
        
        printf("Agora, um nome para o novo usuário: ");
        
        scanf("\n%[^\n]s",auxiliar.nmusr);
        
        condicao=localizausuario(auxiliar.nmusr);
        
        if(condicao == 1)
            printf("\nEsse nome já existe.\nPor favor, tente outro!\n");
  
        
    }while(condicao==1);
    
    do{
        printf("E finalmente a senha: ");
        
        
        scanf("\n%[^\n]s",auxiliar.senha);
        
        if(strlen(auxiliar.senha)<3)
            printf("\nSenha com menos de 3 caracteres.\nTente outra.\n\n");
        
    }while(strlen(auxiliar.senha)<3); 
    
    printf("===================================================\n");
    
    bancodados=arquivousuariosadicionar();
    
    fprintf(bancodados,"%s\t%s\t%s\n",auxiliar.nome,criptografa(auxiliar.senha),auxiliar.nmusr);
    
    fclose(bancodados);
    
    printf("\nAdicionado com sucesso!\n");
    
}  

void excluirusuario(){
    
    usuario auxiliar;
    int resultado;
    
    system("clear");
    
    do{
        printf("===================================================\n");
        printf("Digite o nome do usuário a ser excluído: ");
        
        scanf("\n%[^\n]s",auxiliar.nmusr);
        
        resultado=localizausuario(auxiliar.nmusr);
        
        if(resultado!=1)
            printf("\nEsse nome não existe, talvez já tenha sido excluído.\nPor favor, tente outro!\n");
    }while(resultado!=1);
    
    do{
    printf("Digite a senha para confirmar a remoção: ");
    
    scanf("\n%[^\n]s",auxiliar.senha);
    
     resultado=conferesenha(auxiliar.nmusr,auxiliar.senha);
    
     if(resultado!=1)
            printf("\nSenha incorreta!\nPor favor, de novo.\n");
     
    }while(resultado!=1);
    
    printf("===================================================\n");
    
    if(removeusuario(auxiliar.nmusr,auxiliar.senha)==1)
        printf("Removido com sucesso!\n");
    
    else
        printf("Erro! Tente novamente.\n");
    
}   

void listarusuario(){
    
    int numero,contador;
    nomedeusuario *usuario;
    
    numero=quantidadeusuarios();
       
    usuario=(nomedeusuario *)malloc(sizeof(nomedeusuario)*numero);
    
    coletanomes(usuario);
    
    organizausuarios(usuario,numero);
    
    printf("================ Lista de usuários ================\n");
     printf("NOME\t\tNOME DE USUÁRIO\n");
      printf("===================================================\n");
    
    for(contador=0;contador<numero;contador++){
        
        
        printf("%d - %s\t%s\n",contador+1,usuario[contador].nome,usuario[contador].nomeusr);
    }
    
    printf("===================================================\n");
    
}

void alterarsenha(){
    
    
    usuario auxiliar;
    int resultado;
    char nvsenha[100];
    
    resultado=0;
    
    system("clear");
    
    printf("===================================================\n");
    do{
        printf("Digite o nome do usuário que deseja alterar a senha: ");
        
        scanf("\n%[^\n]s",auxiliar.nmusr);
        
        resultado=localizausuario(auxiliar.nmusr);
        
        if(resultado!=1)
            printf("\nEsse nome não existe!\nPor favor, tente outro.\n");
    }while(resultado!=1);
    
    resultado=0;
    
    do{
        printf("Digite a senha atual: ");
        
        scanf("\n%[^\n]s",auxiliar.senha);
        
        resultado=conferesenha(auxiliar.nmusr,auxiliar.senha);
        
        if(resultado!=1)
            printf("\nSenha incorreta!\nPor favor, tente de novo.\n");
        
    }while(resultado!=1);
    
    do{
        printf("Agora, digite a nova senha: ");
        
        
        scanf("\n%[^\n]s",nvsenha);
        
        if(strlen(nvsenha)<3)
            printf("\nSenha com menos de 3 caracteres.\nTente outra.\n\n");
        
    }while(strlen(nvsenha)<3); 
    
    printf("===================================================\n");
    
    if(mudasenha(auxiliar.nmusr,nvsenha)==1)
        printf("Alterada com sucesso!\n");
    
    else
        printf("Erro! Tente novamente.\n");
    
}












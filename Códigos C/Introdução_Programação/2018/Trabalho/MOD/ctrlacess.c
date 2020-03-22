#include"ctrlacess.h"

/*
 * Função que recebe um vetor e insere os nomes de usuário
 * @param nomes vetor que recebe os nomes
 * @param nomesusr vetor que recebe os nomes de usuário
 * @return void
 */

void coletanomes(nomedeusuario *nomes){
    
    int contador,contador1,contador2;
    char linhaarquivo[300];
    FILE *bancodados;
    
    bancodados=arquivousuariosleitura();
    contador1=contador=0;
    
    
    
    /////////////////////////////////////////////////// 
    while(fgets(linhaarquivo,300,bancodados)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        contador2=0;
        
        for(contador1=0;linhaarquivo[contador1]!='\t';contador1++){
            
            nomes[contador].nome[contador2]=linhaarquivo[contador1];
            contador2++;
        }
        
        nomes[contador].nome[contador2]='\0';
        //////////////////////////////////////////////////////
        for(contador1=contador1+1;linhaarquivo[contador1]!='\t';contador1++){
        }    
        //////////////////////////////////////////////////////
        contador2=0;
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\n';contador1++){
            
            nomes[contador].nomeusr[contador2]=linhaarquivo[contador1];
            contador2++;
        }    
        
        nomes[contador].nomeusr[contador2]='\0';
        
        printf("ENCONTRADO %s/ ACHADO %s\n",nomes[contador].nomeusr,nomes[contador].nome);
        ////////////////////////////////////////
        contador++;
        
        
    }
}

void organizausuarios(nomedeusuario * nomes,int nt){
    
    int contador,contador1,contador2;	
    char variavel1[TAM_STRINGS];
    
    for(contador1=nt;contador1>0;contador1--){
        
        
        for(contador=0;contador+1<nt;contador++){  
            
            
            if(strcmp(nomes[contador].nomeusr,nomes[contador+1].nomeusr)>0){
                
                strcpy(variavel1,nomes[contador].nomeusr);
                strcpy(nomes[contador].nomeusr,nomes[contador+1].nomeusr);
                strcpy(nomes[contador+1].nomeusr,variavel1);
                
            }
            
            
        }
        
    }
}

int conferesenha(char * nmusr,char * senha){
    
    char *string;
    int variavel1;
    
    string=(char *)criptografa(senha);
    
    if(localizausuarioesenha(nmusr,string)==1){
        
        free(string);
        return VERDADEIRO;
        
    }
    else
        return FALSO;
    
    
}

int localizausuario(char * nmusr){
    
    int contador1,contador2,variavel1;
    char linhaarquivo[300],fn[100],contador;
    FILE *bancodados;
    
    bancodados=arquivousuariosleitura();
    
    contador1=0;
    
    while(fgets(linhaarquivo,300,bancodados)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        contador2=0;
        
        for(contador1=0;linhaarquivo[contador1]!='\t';contador1++){
            
        }    
        for(contador1=contador1+1;linhaarquivo[contador1]!='\t';contador1++){
            contador2++;
        }    
        
        //////////////////////////////////////////////////////
        contador2=0;
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\n';contador1++){
            
            fn[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fn[contador2]='\0';
        ////////////////////////////////////////////////////
        /*
         *        printf("\nLido = %s\n",linhaarquivo);
         *        printf("\nUsuario buscado = //%s//\n",nmusr);
         *        printf("Usuario lido = //%s//\n",fn);
         *        printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)==0){
            fclose(bancodados);
            return VERDADEIRO;
        }
        
    }
    
    fclose(bancodados);
    return 2;
    
}

int localizausuarioesenha(char * nmusr,char * senha){
    
    int contador1,contador2,variavel1,variavel2;
    char contador,d;
    char linhaarquivo[300],fn[100],fs[100];
    FILE *bancodados;
    
    bancodados=arquivousuariosleitura();
    
    contador1=0;
    
    while(fgets(linhaarquivo,300,bancodados)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        contador2=0;
        
        
        
        for(contador1=0;linhaarquivo[contador1]!='\t';contador1++){
            
        }    
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\t';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fs[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fs[contador2]='\0';
        
        
        //////////////////////////////////////////////////////
        contador2=0;
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\n';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fn[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fn[contador2]='\0';
        ////////////////////////////////////////////////////
        /*
         *    	printf("\nUsuario buscado = //%s//\n",nmusr);
         *    	printf("senha buscada = %s\n",senha);
         *    	printf("Usuario lido = //%s//\n",fn);
         *    	printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)==0 && strcmp(senha,fs)==0){
            
            fclose(bancodados);
            return VERDADEIRO;
        }
    }
    
    fclose(bancodados);
    return FALSO;
    
}

int removeusuario(char * nmusr,char * senha){
    
    int contador1,contador2,variavel1,variavel2;
    char contador,d;
    char linhaarquivo[300],fn[100],fs[100];
    FILE *bancodados,*novobancodados;
    
    bancodados=arquivousuariosleitura();
    contador1=0;
    
    novobancodados=fopen("usr.txt","w");
    
    
    while(fgets(linhaarquivo,300,bancodados)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        contador2=0;
        
        
        for(contador1=0;linhaarquivo[contador1]!='\t';contador1++){
        }
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\t';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fs[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fs[contador2]='\0';
        
        
        
        //////////////////////////////////////////////////////
        contador2=0;
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\n';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fn[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fn[contador2]='\0';
        ////////////////////////////////////////////////////
        
        
        if(strcmp(nmusr,fn)!=0 && strcmp(senha,fs)!=0){
            fprintf(novobancodados,"%s",linhaarquivo);
        }
        
        
        
        
        
    }
    
    fclose(bancodados);
    fclose(novobancodados);
    
    if(remove("usuarios.txt")!=0 || rename("usr.txt","usuarios.txt")!=0){
        
        printf("Erro!\n");
        
        
        return FALSO;
        
    }
    
    else
        return VERDADEIRO;
    
    
}

int quantidadeusuarios(){
    
    int variavel1;
    char linhaarquivo[300];
    FILE *bancodados;
    
    bancodados=arquivousuariosleitura();
    
    for(variavel1=0;fgets(linhaarquivo,300,bancodados)!=NULL;variavel1++);        
    
    fclose(bancodados);
    
    return variavel1;
}

int mudasenha(char * nmusr, char * senha){
    
    int contador1,contador2,variavel1,variavel2;
    char contador,d;
    char linhaarquivo[300],fn[100],fs[100];
    FILE *bancodados,*novobancodados;
    
    bancodados=arquivousuariosleitura();
    contador1=0;
    
    novobancodados=fopen("usr.txt","w");
    
    
    while(fgets(linhaarquivo,300,bancodados)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        contador2=0;
        
        
        for(contador1=0;linhaarquivo[contador1]!='\t';contador1++){
            
        }    
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\t';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fs[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fs[contador2]='\0';
        
        
        
        //////////////////////////////////////////////////////
        contador2=0;
        
        for(contador1=contador1+1;linhaarquivo[contador1]!='\n';contador1++){
            
            contador=linhaarquivo[contador1];
            d=linhaarquivo[contador1+1];
            
            
            fn[contador2]=linhaarquivo[contador1];
            
            contador2++;
        }    
        
        fn[contador2]='\0';
        ////////////////////////////////////////////////////
        /*
         *    	printf("\nUsuario buscado = //%s//\n",nmusr);
         *    	printf("senha buscada = %s\n",senha);
         *    	printf("Usuario lido = //%s//\n",fn);
         *    	printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)!=0 && strcmp(senha,fs)!=0){
            fprintf(novobancodados,"%s",linhaarquivo);
        }
        else{
            fprintf(novobancodados,"login\t%s\t%s\n",criptografa(senha),nmusr);
        }
    }
    
    fclose(bancodados);
    fclose(novobancodados);
    
    if(remove("usuarios.txt")!=0 || rename("usr.txt","usuarios.txt")!=0){
        
        printf("Erro!\n");
        
        
        return FALSO;
        
    }
    
    else
        return VERDADEIRO;
    
    
}

char *criptografa(char *senha){
    
    int i,j,contador;
    char * string;
    char auxiliar;
    
    string = (char*) malloc((strlen(senha) +1) * sizeof(char));
    
    for(contador=0;contador<strlen(senha)+1;contador++){
        string[contador]=senha[contador];
    }
    
    
    
    for(j=0;j<strlen(string);j++){
        if((string[j]>='A' && string[j]<='Z')||     
            (string[j]>='a' && string[j]<='z')||
            (string[j]>='0' && string[j]<='9')){
            string[j]+=3;
        
            }
            
    }
    for(j=0;j<strlen(string);j+=2){
        if(string[j+1] == '\0') break;
        auxiliar = string[j+1];
        string[j+1] = string[j];
        string[j] = auxiliar;
        
    }
    for(j=0;j<strlen(string);j++){
        if(string[j]==' '){
            string[j] = '+';
            j++;
            
            
        }
        else if(string[j]=='+'){
            string[j] = ' ';
            j++;
            
            
        }
    }
    
    return string;
    
}

FILE * arquivousuariosleitura(){
    
    FILE *bancodadossenhas;	 
    
    bancodadossenhas=fopen("usuarios.txt","r");
    
    if (bancodadossenhas == NULL){
        
        printf("\n\nERRO! Não foi possível entrar,pois arquivo não foi aberto.\n");
        printf("Ele pode não existir, estar corrompido ou sendo usado por outro programa.\n");
        printf("Verifique e tente novamente!\n\n\n");	
        
        return NULL;
        
    }
    
    else    
        return bancodadossenhas;
}

FILE * arquivousuariosadicionar(){
    FILE *bancodadossenhas;	 
    
    bancodadossenhas=fopen("usuarios.txt","a");
    
    if (bancodadossenhas == NULL){
        
        printf("\n\nERRO! Não foi possível entrar,pois arquivo não foi aberto.\n");
        printf("Ele pode não existir, estar corrompido ou sendo usado por outro programa.\n");
        printf("Verifique e tente novamente!\n\n\n");	
        
        return NULL;
        
    }
    
    else    
        return bancodadossenhas;
}


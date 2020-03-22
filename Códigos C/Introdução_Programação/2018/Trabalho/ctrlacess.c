#include"ctrlacess.h"
/*
 * Procurar arquivos não fechados e ponteiros "soltos"!!!
 * 
 */


void coletanomes(nms *nomes){
    
    int c,c1,c2;
    char vf[300];
    FILE *bd;
    
    bd=arqusrle();
    c1=c=0;

    while(fgets(vf,300,bd)!=NULL){
        
        /////////////////////////////////////////////////// 
        
        for(c1=6;vf[c1]!='\t';c1++);   
        
        //////////////////////////////////////////////////////
        c2=0;
        
        for(c1=c1+1;vf[c1]!='\n';c1++){
            
            nomes[c].nomeusr[c2]=vf[c1];
            
            c2++;
        }   
        
        c++;
        
        nomes[c].nomeusr[c2]='\0';
        ////////////////////////////////////////////////////
    }
    
}

void organizausr(nms * nomes,int nt){
    
    int c,c1,c2;	
    char x[100];
    
    for(c1=nt;c1>0;c1--){
        
       
        for(c=0;c+1<nt;c++){  
            
            
            if(strcmp(nomes[c].nomeusr,nomes[c+1].nomeusr)>0){
                
                strcpy(x,nomes[c].nomeusr);
                strcpy(nomes[c].nomeusr,nomes[c+1].nomeusr);
                strcpy(nomes[c+1].nomeusr,x);
                
            }
            
            
        }
        
    }
}

int confsenha(char * nmusr,char * senha){
    
    char *str;
    int x;
    
    str=(char *)criptgrf(senha);
    
    if(lczusresenha(nmusr,str)==1){
        
        free(str);
        return 1;
        
    }
    else
        return 2;
    
    
}

int lczusr(char * nmusr){
    
    int c1,c2,x;
    char vf[300],fn[100],c;
    FILE *bd;
    
    bd=arqusrle();
    
    c1=0;
    
    while(fgets(vf,300,bd)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        c2=0;
        
        for(c1=6;vf[c1]!='\t';c1++){
            c2++;
        }    
        
        //////////////////////////////////////////////////////
        c2=0;
        
        for(c1=c1+1;vf[c1]!='\n';c1++){
            
            fn[c2]=vf[c1];
            
            c2++;
        }    
        
        fn[c2]='\0';
        ////////////////////////////////////////////////////
        /*
         *        printf("\nLido = %s\n",vf);
         *        printf("\nUsuario buscado = //%s//\n",nmusr);
         *        printf("Usuario lido = //%s//\n",fn);
         *        printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)==0){
            fclose(bd);
            return 1;
        }
        
    }
    
    fclose(bd);
    return 2;
    
}

int lczusresenha(char * nmusr,char * senha){
    
    int c1,c2,x,y;
    char c,d;
    char vf[300],fn[100],fs[100];
    FILE *bd;
    
    bd=arqusrle();
    
    c1=0;
    
    while(fgets(vf,300,bd)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        c2=0;
        
        for(c1=6;vf[c1]!='\t';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fs[c2]=vf[c1];
            
            c2++;
        }    
        
        fs[c2]='\0';
        
        
        
        //////////////////////////////////////////////////////
        c2=0;
        
        for(c1=c1+1;vf[c1]!='\n';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fn[c2]=vf[c1];
            
            c2++;
        }    
        
        fn[c2]='\0';
        ////////////////////////////////////////////////////
        /*
         *    	printf("\nUsuario buscado = //%s//\n",nmusr);
         *    	printf("senha buscada = %s\n",senha);
         *    	printf("Usuario lido = //%s//\n",fn);
         *    	printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)==0 && strcmp(senha,fs)==0){
            
            fclose(bd);
            return 1;
        }
    }
    
    fclose(bd);
    return 2;
    
}

int removeusr(char * nmusr,char * senha){
    
    int c1,c2,x,y;
    char c,d;
    char vf[300],fn[100],fs[100];
    FILE *bd,*bdnv;
    
    bd=arqusrle();
    c1=0;
    
    bdnv=fopen("usr.txt","w");
    
    
    while(fgets(vf,300,bd)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        c2=0;
        
        for(c1=6;vf[c1]!='\t';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fs[c2]=vf[c1];
            
            c2++;
        }    
        
        fs[c2]='\0';
        
        
        
        //////////////////////////////////////////////////////
        c2=0;
        
        for(c1=c1+1;vf[c1]!='\n';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fn[c2]=vf[c1];
            
            c2++;
        }    
        
        fn[c2]='\0';
        ////////////////////////////////////////////////////
        /*
         *    	printf("\nUsuario buscado = //%s//\n",nmusr);
         *    	printf("senha buscada = %s\n",senha);
         *    	printf("Usuario lido = //%s//\n",fn);
         *    	printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)!=0 && strcmp(senha,fs)!=0){
            fprintf(bdnv,"%s",vf);
        }
        
        
        
        
        
    }
    
    fclose(bd);
    fclose(bdnv);
    
    if(remove("usuarios.txt")!=0 || rename("usr.txt","usuarios.txt")!=0){
        
        printf("Erro!\n");
        
        
        return -1;
        
    }
    
    else
        return 1;
    
    
}

int contausrs(){
    
    int x;
    char vf[300];
    FILE *bd;
    
    bd=arqusrle();
    
    for(x=0;fgets(vf,300,bd)!=NULL;x++);        
    
    fclose(bd);
    
    return x;
}

int mudasenha(char * nmusr, char * senha){
    
    int c1,c2,x,y;
    char c,d;
    char vf[300],fn[100],fs[100];
    FILE *bd,*bdnv;
    
    bd=arqusrle();
    c1=0;
    
    bdnv=fopen("usr.txt","w");
    
    
    while(fgets(vf,300,bd)!=NULL){
        
        
        
        /////////////////////////////////////////////////// 
        c2=0;
        
        for(c1=6;vf[c1]!='\t';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fs[c2]=vf[c1];
            
            c2++;
        }    
        
        fs[c2]='\0';
        
        
        
        //////////////////////////////////////////////////////
        c2=0;
        
        for(c1=c1+1;vf[c1]!='\n';c1++){
            
            c=vf[c1];
            d=vf[c1+1];
            
            
            fn[c2]=vf[c1];
            
            c2++;
        }    
        
        fn[c2]='\0';
        ////////////////////////////////////////////////////
        /*
         *    	printf("\nUsuario buscado = //%s//\n",nmusr);
         *    	printf("senha buscada = %s\n",senha);
         *    	printf("Usuario lido = //%s//\n",fn);
         *    	printf("senha lida = %s\n\n",fs);
         */
        
        if(strcmp(nmusr,fn)!=0 && strcmp(senha,fs)!=0){
            fprintf(bdnv,"%s",vf);
        }
        else{
            fprintf(bdnv,"login\t%s\t%s\n",criptgrf(senha),nmusr);
        }
    }
    
    fclose(bd);
    fclose(bdnv);
    
    if(remove("usuarios.txt")!=0 || rename("usr.txt","usuarios.txt")!=0){
        
        printf("Erro!\n");
        
        
        return -1;
        
    }
    
    else
        return 1;
    
    
}

char *criptgrf(char *senha){
    
    int i,j,n,c;
    char * str;
    char aux;
    
    str=(char*)malloc((strlen(senha)+1)*sizeof(char));
    
    for(c=0;c<strlen(senha)+1;c++){
        str[c]=senha[c];
    }
    
    
    
    for(j=0;j<strlen(str);j++){
        if((str[j]>='A' && str[j]<='Z')||     
            (str[j]>='a' && str[j]<='z')||
            (str[j]>='0' && str[j]<='9')){
            str[j]+=3;
        
            }
            
    }
    for(j=0;j<strlen(str);j+=2){
        if(str[j+1] == '\0') break;
        aux = str[j+1];
        str[j+1] = str[j];
        str[j] = aux;
        
    }
    for(j=0;j<strlen(str);j++){
        if(str[j]==' '){
            str[j] = '+';
            j++;
            
            
        }
        else if(str[j]=='+'){
            str[j] = ' ';
            j++;
            
            
        }
    }
    
    return str;
    
}

FILE * arqusrle(){
    
    FILE *bdusr;	 
    
    bdusr=fopen("usuarios.txt","r");
    
    if (bdusr == NULL){
        
        printf("\n\nERRO! Não foi possível entrar,pois arquivo não foi aberto.\n");
        printf("Ele pode não existir, estar corrompido ou sendo usado por outro programa.\n");
        printf("Verifique e tente novamente!\n\n\n");	
        
        return NULL;
        
    }
    
    else    
        return bdusr;
}

FILE * arqusrad(){
    FILE *bdusr;	 
    
    bdusr=fopen("usuarios.txt","a");
    
    if (bdusr == NULL){
        
        printf("\n\nERRO! Não foi possível entrar,pois arquivo não foi aberto.\n");
        printf("Ele pode não existir, estar corrompido ou sendo usado por outro programa.\n");
        printf("Verifique e tente novamente!\n\n\n");	
        
        return NULL;
        
    }
    
    else    
        return bdusr;
}


//Feito por André Luiz Teixeira Kohlrausch
/*
 * 
 * Observações
 * 
 * O intuito é, usar a função verifica, se ela retornar 1, significa que a célular entra em loop, logo, basta a função marcar ir lá
 * e preencher
 * caso seja 2, significa que ela entra no loop, logo, a função marca irá marcando até achar o loop
 * e caso seja 3, significa saida, portanto será marcada como tal
 *
 * 1 - segura
 * 2 - entrada
 * 3 - insegura
 * 
 *
 */



#include<stdio.h>

#define MAX 500

void preenche(char tabuleiro[][MAX],int dimensao);

void imprime(char tabuleiro[][MAX], int dimensao);

void processa(char tabuleiro[][MAX], int dimensao, int clinha, int ccoluna);

void marca(char tabuleiro[][MAX], int dimensao, int linic, int cinic, int cl, int cc, int tipo);

int verifica(char tabuleiro[][MAX],int linic,int cinic,int cl,int cc,int dimensao,int vez);

int main(){
    
    int dimensao,ccoluna,clinha;
    char tabuleiro[MAX][MAX];
    
    scanf("%d",&dimensao);
    
    preenche(tabuleiro, dimensao);
    
    processa(tabuleiro,dimensao, 0, 0);
    
    imprime(tabuleiro,dimensao);
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void preenche(char tabuleiro[][MAX],int dimensao){
    
    int clinha, ccoluna;
    
    for(clinha=0;clinha<dimensao;clinha++){
        
        for(ccoluna=0;ccoluna<dimensao;ccoluna++){
            
            scanf("\n %c",&tabuleiro[clinha][ccoluna]);  
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
void imprime(char tabuleiro[][MAX], int dimensao){
    
    int clinha, ccoluna;
    
    for(clinha=0;clinha<dimensao;clinha++){
        
        for(ccoluna=0;ccoluna<dimensao;ccoluna++){
            
            printf("%c",tabuleiro[clinha][ccoluna]);
            
        }
        
        printf("\n");
    }
}


////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
void processa(char tabuleiro[][MAX], int dimensao, int clinha, int ccoluna){
    
    if(clinha == dimensao && ccoluna == dimensao)
        return;
    
    int resultado;
    /*    
     *    4
     * >>V<
     * A<<<
     * AAA>
     * >>>A
     */
    
    resultado = verifica(tabuleiro, clinha, ccoluna, clinha, ccoluna, dimensao, 0);
    
    printf("\n\nVerificado %d X %d\tResultado = %d",clinha,ccoluna,resultado);
    
    marca(tabuleiro, dimensao, clinha, ccoluna, clinha, ccoluna, resultado);
    
    
    if(ccoluna == dimensao)
        return processa(tabuleiro, dimensao, clinha + 1, 0);
    
    else
        return processa(tabuleiro, dimensao, clinha, ccoluna + 1);
    
    
}   

////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

int verifica(char tabuleiro[][500],int linic,int cinic,int cl,int cc,int dimensao,int vez){
    
    printf("\t\tProcessando %d X %d\tVez = %d\tLinic = %d\tCinic = %d\n",cl,cc,vez,linic,cinic);
    
    
    char seta;
    
    
    seta=tabuleiro[cl][cc];
    
    
    if(cl == linic && cc == cinic && vez != 0){
        
        printf("3 if\n");
        return 1;
    }
    if(vez > dimensao * dimensao){
        
        printf("4 if\n");
        return 2;
    }
    
    if(seta == 'L'){
        
        printf("1 if\n");
        return 2;
    }
///////////////////////////////////////////////////////////////////
    seta=tabuleiro[cl][cc];
    
    if(seta == 'A' && cl == 0){
        
        printf("Erro 1\n");
        return 3;
        
    }
    else if(seta == 'V' && cl == dimensao-1){
        
        printf("Erro 2\n");
        return 3;
        
    }
    else if(seta == '>' && cc == dimensao-1){
        
        printf("Erro 3\n");
        return 3;
        
    }
    else if(seta == '<' && cc == 0){
        
        printf("Erro 4\n");
        return 3;
        
    }
    
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////

    if(seta == 'A' && (tabuleiro[cl - 1][cc] == 'L' || tabuleiro[cl - 1][cc] == 'I')){
        
        printf("HAHAHAHA 1\n");
        return 2;
        
    }
    
    if(seta == '>' && (tabuleiro[cl][cc + 1] == 'L' || tabuleiro[cl][cc + 1] == 'I')){
        
        printf("HAHAHAHA 2\n");
        return 2;
        
    }
    
    if(seta == 'V' && (tabuleiro[cl + 1][cc] == 'L' || tabuleiro[cl + 1][cc] == 'I')){
        
        printf("HAHAHAHA 3\n");
        return 2;
        
    }
    
    if(seta == '<' && (tabuleiro[cl][cc - 1] == 'L' || tabuleiro[cl][cc - 1] == 'I')){
        
        printf("HAHAHAHA 4\n");
        return 2;
        
    }
///////////////////////////////////////////////////////////////////
    if(seta == 'A')
        return verifica(tabuleiro,linic,cinic,cl-1,cc,dimensao,vez+1);
    
    else if(seta == 'V')
        return verifica(tabuleiro,linic,cinic,cl+1,cc,dimensao,vez+1);
    
    else if(seta == '<')
        return verifica(tabuleiro,linic,cinic,cl,cc-1,dimensao,vez+1);
    
    else if(seta == '>')
        return verifica(tabuleiro,linic,cinic,cl,cc+1,dimensao,vez+1);
    
}


////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void marca(char tabuleiro[][MAX], int dimensao, int linic, int cinic, int cl, int cc, int tipo){
    
    printf("\tMarcando %d X %d\tLinic = %d/Cinic = %d\n",cl,cc,linic,cinic);
    
    
    if(tipo == 1){
        
        printf("Encontrada célula segura na linha %d / coluna %d\n",cl,cc);
    }
    
    if(tipo == 2){
        
        printf("Encontrada célula introdutória na linha %d / coluna %d\n",cl,cc);
    }
    if(tipo == 3){
        
        printf("Encontrada célula insegura na linha %d / coluna %d\n",cl,cc);
    }
    
    char seta;    
    
    if(cl == dimensao || cl < 0 || cc == dimensao || cc < 0){
        
        printf("Fim por insegurança\n");
        return;
    }
    
    seta=tabuleiro[cl][cc];
    
    if(tipo == 1){
        
        /*
         * 
         * Começar por aqui, ver como ele marca, pois tá marcando a primeira célula segura e para
         * além disso, fazer o passo a passo, e a chamada 
         * 
         */ 
        
        
        
        if(seta == 'L'){
            return;
            printf("\t\tFIM\n");
        }
        
        
        tabuleiro[cl][cc] = 'L';
        
        
        if(seta == 'A'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl-1, cc, 1);
            tabuleiro[cl][cc] = 'L';
            return;
            
        }
        
        if(seta == 'V'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl+1, cc, 1);
            tabuleiro[cl][cc] = 'L';
            return;
            
        }
        
        if(seta == '>'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc+1, 1);
            tabuleiro[cl][cc] = 'L';
            return;
            
        }
        
        if(seta == '<'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc-1, 1);
            tabuleiro[cl][cc] = 'L';
            return;
            
        }
    }
    
    
    else if(tipo == 2){
        
        
        if(seta == 'L')
            return;
        
        
        tabuleiro[cl][cc] = 'I';
        
        
       /* if(seta == 'A'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl-1, cc, 2);
            
            return;
            
        }
        
        if(seta == 'V'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl+1, cc, 2);
            return;
            
        }
        
        if(seta == '>'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc+1, 2);
            tabuleiro[cl][cc] = 'I';
            return;
            
        }
        
        if(seta == '<'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc-1, 2);
            tabuleiro[cl][cc] = 'I';
            return;
            
        }
        */
    }
    
    else{
        
        printf("Linic %d ---- Cinic %d\tMarcando célula insegura na linha %d / coluna %d\n",linic,cinic,cl,cc);
        
        
        if(seta == 'O'){
            return;
            printf("\t\tFIM\n");
        }
        
        if(seta == 'A'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl-1, cc, 3);
            tabuleiro[cl][cc] = 'O';
            return;
            
        }
        
        if(seta == 'V'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl+1, cc, 3);
            tabuleiro[cl][cc] = 'O';
            return;
            
        }
        
        if(seta == '>'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc+1, 3);
            tabuleiro[cl][cc] = 'O';
            return;
            
        }
        
        if(seta == '<'){
            
            marca(tabuleiro, dimensao, linic, cinic, cl, cc-1, 3);
            tabuleiro[cl][cc] = 'O';
            return;
            
        }
    }
    
}


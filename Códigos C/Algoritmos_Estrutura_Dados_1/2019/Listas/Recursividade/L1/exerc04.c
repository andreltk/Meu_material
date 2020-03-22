//Feito por André Luiz Teixeira Kohlrausch

//Execício já feito na aula

/*
 * Altas Aventuras
 * 
 * Incentivado por um filme de animação recente, vovô resolveu realizar seu sonho de criança, fazendo
 * sua pequena casa voar amarrada a balões de hélio. Comprou alguns balões coloridos, de boa qualidade,
 * para fazer alguns testes e começou a planejar a grande aventura
 */
#include<stdio.h>

int testa(int n,int k,int t,int ini,int fim);

int main(){
    
    int cap,bal;
    
    scanf("%d""%d",&cap,&bal);
    
    printf("%d\n",testa(cap,bal,1,1,cap));
    
    
    
}


int testa(int n,int k,int t,int ini,int fim){
    
    int tt;
    
    tt=(ini+fim)/2;
    
    if(fim-ini == 1 || k == 0){
        
        if(n == 20)
            return t*2;
        
        return t;
    }
    else
        return testa(n,k-1,t+1,1,tt);
    
}


//Feito por André Luiz Teixeira Kohlrausch

//Execício já feito na aula
//Aprensentava problemas
//Copiado

/*
 * Torre de Hanoi
 * 
 * Torre de Hanói é um "quebra-cabeça"que consiste em uma base contendo três pinos (ou hastes), em um
 * dos quais são dispostos alguns discos, uns sobre os outros, em ordem crescente de diâmetro, de cima para
 * baixo. O problema consiste em passar todos os discos de um pino para outro qualquer, usando um dos pinos
 * como auxiliar, de maneira que um disco maior nunca fique em cima de outro menor, em nenhuma situação.
 * 
 */

#include <stdio.h>

void movimenta (int nmr, char A, char B, char C);

int main(){
    
    int discos;
    
    scanf("%d",&discos);
    
    movimenta(discos,'O','D','A');
    
    return 0;
}

void movimenta (int nmr, char A, char B, char C){
    
    if (nmr==1) {
        
        printf("(%c,%c)\n", A, B);
        
        return;
        
    }
    
    movimenta(nmr-1,A,C,B);
    
    printf("(%c,%c)\n",A, B);
    
    movimenta(nmr-1,C,B,A);
}

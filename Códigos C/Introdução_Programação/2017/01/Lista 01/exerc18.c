#include <stdio.h>

void converteEmNotasMoedas(int vl);

int main(){
    
    int vl;
    scanf("%d",&vl);
    converteEmNotasMoedas(vl);
    
    return 0;
    
}
void converteEmNotasMoedas(int vl){

    int n100 ,n50 ,n10 ,m1;
        
    n100=vl/100;
    n50=(vl%100)/50;
    n10=(vl-((n100*100)+(n50*50)))/10;
    m1=vl-((n100*100)+(n50*50)+(n10*10));
    
    
    printf("NOTAS DE 100 = %d\n",n100);
    printf("NOTAS DE 50 = %d\n",n50);
    printf("NOTAS DE 10 = %d\n",n10);
    printf("MOEDAS DE 1 = %d\n",m1);
    }

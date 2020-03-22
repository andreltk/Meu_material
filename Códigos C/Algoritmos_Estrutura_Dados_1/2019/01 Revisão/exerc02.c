//Feito por André Luiz

#include<stdio.h>

int inverte(int inteiro);

int maior(int inteiro_1,int inteiro_2,int inteiro_3);

int main(){
    
    int inteiro_1,inteiro_2,inteiro_3,resultado;
    
    scanf("%d",&inteiro_1);   
    scanf("%d",&inteiro_2);
    scanf("%d",&inteiro_3);
    
    inteiro_1 = inverte(inteiro_1);
    inteiro_2 = inverte(inteiro_2);
    inteiro_3 = inverte(inteiro_3);
    
    printf("%d\n",inteiro_1);
    printf("%d\n",inteiro_2);
    printf("%d\n",inteiro_3);
    
    
    resultado = maior(inteiro_1,inteiro_2,inteiro_3);
    
    printf("%d\n",resultado);
}


int inverte(int inteiro){
    
    int c,d,u;
    
    u = inteiro / 100;
    
    d = (inteiro % 100)/10;
    
    c = inteiro - ((u * 100) + (d * 10));
    
    return (c * 100) + (d * 10) + u;
    
        
}

int maior(int inteiro_1,int inteiro_2,int inteiro_3){

	if(inteiro_1 >= inteiro_2 && inteiro_1 >= inteiro_3)
		return inteiro_1;	
	
	if(inteiro_2 >= inteiro_1 && inteiro_2 >= inteiro_3)
		return inteiro_2;
	
	if(inteiro_3 >= inteiro_1 && inteiro_3 >= inteiro_2)
		return inteiro_3;
}

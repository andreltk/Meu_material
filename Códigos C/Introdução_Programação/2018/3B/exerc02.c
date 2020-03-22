#include<stdio.h>

void ord(int num[], int tam);
int qtd(int *v,int tam,int nb);

int main(){
	
	int c,k,nt,v[1000];
	
	do{
		scanf("%d",&nt);
	}while(nt<1||nt>1000);
	
	for(c=0;c<nt;c++){
		
		scanf("%d",(v+c));
		
	}
	
	scanf("%d",&k);
	
	ord(v,nt);
	
	printf("%d\n",qtd(v,nt,k));
	
	
	
	
}

void ord(int *num, int tam) { 
	int i, j, min, aux;
	for (i = 0; i < tam; i++) 
	{
		min = i;
		for (j = (i+1); j < tam; j++) {
			if(num[j] < num[min]) 
				min = j;
		}
		if (num[i] != num[min]) {
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
		//printf("ORD PRONTA \n");
	}
}

int qtd(int *v,int tam,int nb){
	
	int c,x;
	
	for(c=0;c<tam;c++){
		
		if(*(v+c)==nb){
			
			x=tam-c;
			return x;
			
		}
	}
		
	return 0;	
		
	}
	
	
	
	

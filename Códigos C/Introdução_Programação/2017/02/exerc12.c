#include<stdio.h>

void print_bytes(char* n, int b);
void converte(int nl);
int main(){

	double db;
	unsigned char ch;
	unsigned short sh;
	unsigned int in;
	float fl;
	scanf("%lf",&db);
	ch=sh=in=fl=db;
	
	print_bytes(&ch, sizeof(unsigned char));
	print_bytes((char*)&sh, sizeof(unsigned short));
	print_bytes((char*)&in, sizeof(unsigned int));
	print_bytes((char*)&fl, sizeof(float));
	print_bytes((char*)&db, sizeof(double));
	
	return 0;
}
void print_bytes(char* v, int t){
	int c,x;
    c=0;
	while(c<t){
        if(c>0) printf(" ");
        x=(unsigned char)*(v+c);
        converte(x);
		c++;
	}
	printf("\n");
}
void converte(int nl){

    
    int n1,n2,n3,n4,n5,n6,n7,n8,c1,c2,c3,c4,c5,c6,c7,c8;
            
        c8=nl%2;
            
        n7=nl/2;
        c7=n7%2;
        
        n6=n7/2;
        c6=n6%2;
        
        n5=n6/2;
        c5=n5%2;
        
        n4=n5/2;
        c4=n4%2;
        
        n3=n4/2;
        c3=n3%2;
        
        n2=n3/2;
        c2=n2%2;
        
        n1=n2/2;
        c1=n1%2;
        
        
        printf("%d%d%d%d%d%d%d%d",c1,c2,c3,c4,c5,c6,c7,c8);
}

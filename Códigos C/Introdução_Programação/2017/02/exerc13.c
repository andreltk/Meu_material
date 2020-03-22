#include<stdio.h>

void escovabytes(char* n, int b);

int main(){

	double db;
	unsigned char ch;
	unsigned short sh;
	unsigned int in;
	float fl;
	scanf("%lf",&db);
	ch=sh=in=fl=db;
	
	escovabytes(&ch, sizeof(unsigned char));
	escovabytes((char*)&sh, sizeof(unsigned short));
	escovabytes((char*)&in, sizeof(unsigned int));
	escovabytes((char*)&fl, sizeof(float));
	escovabytes((char*)&db, sizeof(double));
	
	return 0;
}
void escovabytes(char* v, int t){
	int c;
    c=0;
	while(c<t){
		printf("%d,",(unsigned char)*(v+c));
		c++;
	}
	printf("\n");
}

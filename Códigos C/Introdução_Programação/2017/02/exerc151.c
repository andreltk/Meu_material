#include<stdio.h>
#include<math.h>

int next_power( int x, int y,int *con );

int main(){

    int x,y,con;
    
	scanf("%d%d",&x,&y);
    
    y=next_power(x,y,&con);
    
    printf("%d -> 2ˆ%d = %d\n",x,con,y);
	return 0;
}

int next_power( int x, int y,int *con ){
    
    
    int c,nf;
    c=0;
    do{
        nf=pow(2,c);
//        printf("%d  %d\n",c,nf);
        c++;
        
    }while(nf<x);
    c=c-2;
    nf=pow(2,c);
    *con=c;
    return nf;
}

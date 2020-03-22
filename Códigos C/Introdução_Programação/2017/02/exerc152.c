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
    
    
    int c,c1,nf,pt;
    c=0;
    pt=2;
    do{
        
        }
        nf=pt;
        c++;
        
    }while(nf<x);
    c=c-2;
    for(c1=1;c1<=c;c1++){
         pt*=2;
         printf("%d  \n",pt);
    *con=c;
    return pt;
}

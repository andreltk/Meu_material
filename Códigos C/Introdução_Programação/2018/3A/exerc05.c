#include<stdio.h>

void tz(char *x);

int main(){
    
    int m,n,x;
    char f[100]; 
    
    do{
    scanf("%d""%d",&n,&m);
    
    if(m==0 && n==0)
        return 0;
        
    sprintf(f,"%d",m+n);
    tz(f);
    
    }while(1>0);
    
}

void tz(char *x){
    
    int c,c1;
    char b[100];
    
    for(c=0;c<101;c++)
        *(b+c)='\0';
        
    for(c=c1=0;*(x+c)!='\0';c++){
//         printf("N = %s\n",x);
        
        
        if(*(x+c)>48){
            *(b+c1)=*(x+c);
            c1++;
        }
    }
    printf("%s\n",b);
        
        
    }
//     *(b+c1)='\0';
//     
//     for(c=c1=0;*(b+c)!='\0';c++)
//         printf("%c",*(x+c));
// 
//     printf("\n");
// }
    
    
    

#include<stdio.h>

int le_string(char *s);
int iden(char *f,int tt);


int main(){
    
    int c,nt,tt;
    char f[10000]; 
    
    scanf("%d",&nt);
    
    for(c=0;c<nt;c++){
        
        tt=le_string(f);    
      
        
        iden(f,tt);
    }
    
}

int le_string(char *s){
    
    int c;
    
    //     printf("Ve\n");
    
    scanf("\n%[^\n]s",s);
    
    for(c=0;*(s+c)!='\0';c++);
    
    
        return c;
    
}

int iden(char *f,int tt){

    int c;
    
    
//       printf("tt=%d\n",tt);
      
    ///////////three
    if(tt==5){
        printf("3\n");
        return 0;
    }
    ///////////one
    if(*(f+0)=='o' && *(f+1)=='n'){
        
        printf("1\n");
        return 0;
    }
    if(*(f+0)=='o'&& *(f+2)=='e'){
        
        printf("1\n");
        return 0;
    }
    if(*(f+1)=='n' && *(f+2)=='e'){
        
        printf("1\n");
        return 0;
    }
    
    
    
    
    ///////////two
    if(*(f+0)=='t' && *(f+1)=='w'){
        
        printf("2\n");
        return 0;
    }
    if(*(f+0)=='t'&& *(f+2)=='o'){
        
        printf("2\n");
        return 0;
    }
    if(*(f+1)=='w' && *(f+2)=='o'){
        
        printf("2\n");
        return 0;
    }


}

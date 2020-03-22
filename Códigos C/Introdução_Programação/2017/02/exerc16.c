#include<stdio.h>


long int string2int( const char * str );

int main(){
    
    char str;
   

     scanf("%s", str);
     
     string2int(&str);
    
    return 0;
}

long int string2int( const char * str ){
    
    long int v[128],c;
    char *str2;
    str2=str;
/*
    for(c=0;*(str+c)!='0';c++){
        
        v[c]=*(str+c);
        printf("%ld %s",v[c],*(str+c));
     }
*/
     for(c=0;c<11;c++) 
  printf("%s\n",*(str+c));
}
        

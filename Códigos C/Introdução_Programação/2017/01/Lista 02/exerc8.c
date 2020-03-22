#include <stdio.h>

int main(){
    
    int nl,um,c,d,u;

    scanf("%d",&nl);
 
    if (nl <= 0 || nl > 9999){
        
        printf ("Numero invalido!\n");
    }
    
    else {
        
        um = nl/1000;
        c  = (nl-(um*1000))/100;
        d  = (nl-((um*1000)+(c*100)))/10;
        u  = (nl-((um*1000)+(c*100)+(d*10)));
        
        
    } 
        
   if(um>0) printf("(quarta ordem)");
   else if (c>0) printf ("(terceira ordem)");
   else if (d>0) printf ("(segunda ordem)");
   else printf("(primeira ordem)");
   
   printf(" %d =",nl);
   
   if (um>0){
        printf(" %d unidade",um);
        if (um>1) printf ("s");
        printf(" de milhar");
   }
   if(c>0){
       if(um>0) printf(" +");
       printf(" %d centena",c);
       if(c>1)printf("s");
   }
   if(d>0){
       if(um>0 || c>0) printf(" +");
       printf(" %d dezena",d);
       if(d>1) printf("s");
   }
   if(u>0){       
       if(um>0 || c>0 || d>0){
           printf(" +");
           printf(" %d unidade",u);
           if(u>1)printf("s");
       }
    printf(" = ");
   }
    if (um>0) printf("%d", um*1000);
    if (c>0){
        if (um>0){
            printf(" + ");
           }
            printf("%d",c*100);
        }
    if(d>0){
        if(um>0 || d>0){
            printf(" + ");
        }
        printf("%d",d*10);
        }
    if(u>0){
        if(um>0||c>0||d>0){
            printf(" + ");
        }
        printf("%d",u);
            
    }
   printf("\n");
    
    
    return 0;
}
    

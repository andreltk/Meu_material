#include <stdio.h>

int main(){
    
    int nl,um,c,d,u,um1,c1,d1,u1,nf;
    char ums;
    
    scanf("%d",&nl);
 
    if (nl <= 0 || nl > 9999){
        
        printf ("Numero invalido!\n");
    }
    
    else {
        
        um = nl/1000;
        c  = (nl-(um*1000))/100;
        d  = (nl-((um*1000)+(c*100)))/10;
        u  = (nl-((um*1000)+(c*100)+(d*10)));
        
        um1 = um*1000;
        c1  = c*100;
        d1  = d*10;
        u1  = u;
        
    } 
        
     if (nl > 999){
         //Quarta Ordem UM=1

         if (um == 1 && c == 1 && d == 1 && u == 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c == 1 && d == 1 && u > 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c == 1 && d > 1 && u == 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c == 1 && d > 1 && u > 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c > 1 && d == 1 && u == 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c > 1 && d == 1 && u > 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c > 1 && d > 1 && u == 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         else if (um == 1 && c > 1 && d > 1 && u > 1){
             
             printf("(quarta ordem) %d = 1 unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d\n",nl,c, d, u, um1 ,c1, d1, u1);
         }
         
         ////Quarta Ordem UM>1
         
         else if (um > 1 && c == 1 && d == 1 && u == 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c == 1 && d == 1 && u > 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c == 1 && d > 1 && u == 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c == 1 && d > 1 && u > 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c > 1 && d == 1 && u == 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c > 1 && d == 1 && u > 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c > 1 && d > 1 && u == 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         else if (um > 1 && c > 1 && d > 1 && u > 1){
             
             printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d\n",nl, um, c, d, u, um1 ,c1, d1, u1);
         }
         
     }
     
    
        
    return 0;
}
    

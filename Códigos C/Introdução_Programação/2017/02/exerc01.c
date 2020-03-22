#include <stdio.h>

int class_aco (int cc, int dr, int tr);

int main(){
 
    int cc,dr,tr;
    
    scanf("%d",&cc);
    scanf("%d",&dr);    
    scanf("%d",&tr);
    
    class_aco (cc,dr,tr);
    
    return 0;
}

int class_aco (int cc, int dr, int tr){
    
    int n1,n2,n3,i1,i2,i3;
    
    n1=cc;
    n2=dr;
    n3=tr;
    
 
    if (n1<7) i1=1;
    else i1=0;
    if (n2>50) i2=1;
    else i2=0;
    if (n3>80000) i3=1;
    else i3=0;
    
 
    
    if (i1==1 && i2==1 && i3==1){
     printf("ACO DE GRAU = 10\n");
     }
    else if(i1==1 && i2==1 && i3==0){
     printf("ACO DE GRAU = 9\n");
    }
    else if (i1==1 && i2==0 && i3==0){
     printf("ACO DE GRAU = 8\n");
    }
    else {printf("ACO DE GRAU = 7\n");
    }
}

    

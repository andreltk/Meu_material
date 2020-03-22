#include<stdio.h>
#include<math.h>


int main(){
    
    float x,k,i,i1,s,c,con;
    
    scanf("%f""%f""%f""%f",&x,&i,&k,&s);
    
    i1=i;
    
    //Soma
    printf("Tabuada de soma:\n");
    
    for(c=0;c<k;c++){
        
        i+=s*c;   
        con=x+i;
        printf("%.2f + %.2f = %.2f\n",x,i,con);
    }
    
    //Subtração
    i=i1;
    printf("Tabuada de subtracao:\n");
    
    for(c=0;c<k;c++){
        
        i+=s*c;   
        con=x-i;
        printf("%.2f + %.2f = %.2f\n",x,i,con);
    }
    
    //Multi
    i=i1;
    printf("Tabuada de multiplicacao:\n");
    
    for(c=0;c<k;c++){
        
        i+=s*c;   
        con=x*i;
        printf("%.2f + %.2f = %.2f\n",x,i,con);
    }
    
    //Div
    i=i1;
    printf("Tabuada de divisao:\n");
    
    for(c=0;c<k;c++){
        
        i+=s*c;   
        con=x/i;
        printf("%.2f + %.2f = %.2f\n",x,i,con);
    }
    
}

#include<stdio.h>
#include<math.h>
int main(){
 
    int nt,nr,ne;
    float templ,tempc;
    
    scanf("%d",&nt);
    
    if (nt>5&&nt<2000){
        nr=2;
        
        while(nr<=nt){
           
            ne=pow(nr,2);
                   
            printf("%dˆ2 = %d\n",nr,ne);
            
            nr=nr+2;
        }
    
    
    return 0;
}

#include <stdio.h>

#define u N-1

int main() {
    
    
    int N,n[10000],n1[10000],y,x,i,c,c1=0;
    
    scanf("%d",&N);
    
    for(c=0;c<N;c++)
        scanf("%d",&n[c]);
    
    printf("Nota %d,",n[u]);
    
    for(c=0;c<N;c++){
        
        if(n[c]==n[u])
            c1++;
    }    
    printf(" %d vezes\n",c1);
                
        //Copiar vetor
           for(c=0; c<N;c++)
               n1[c]=n[c];
               
        //Parte maior
           c1=1;
           
        for(c=0; c1<N;c++){
            
            x=n1[c];
            y=n1[c1];
            
            if(x>y){
                
                i=x;
                x=y;
                y=i;
                
                n1[c]=x;
                n1[c1]=y;
                
//                 printf("X= %d Y= %d\n",x,y);
//               
            }
              c1++;
        }
        y=n1[u];
    
    printf("Nota %d, ",y);

	i=1;
	
     for(c=0; c<N;c++){
         x=n[c];
         if(x==y){
        printf("indice %d\n",c);
        break;
         }
     }        
     
    
    return 0;
}



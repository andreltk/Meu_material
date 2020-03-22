#include <stdio.h>

#define u N-1
#define lim 1000000
int main() {
    
    
    int T,c,c1,c2,V[lim],m[9],i,x,y,z,vt=0,b1,b2,cp,N;
    
    scanf("%d",&T);
    N=11*T;
    
    for(c=0;c<N;c ++)    
        scanf("%d",&V[c]);
//Verificação

for(cp=0;cp<T;cp++){


    //digito verificador b1
    
    //passando e multiplicando
    c1=0;
    c2=1;
    for(c=0+vt;c<9+vt;c++){
    
            x=V[c];
            m[c1]=x*c2;
            c1++;
            c2++;
            
			}
			
			//dividindo
			z=0;
			
	for(c=0;c<9;c++){
			x=m[c];
			z+=x;
			}	
			
			i=z%11;
			if(i==10) b1=0;
			else b1=i;
			    
                
            
             
    //digito verificador b2
    
    //passando e multiplicando
    c1=0;
    c2=9;
   	for(c=0+vt;c<9+vt;c++){
    
            x=V[c];
            m[c1]=x*c2;
            c1++;
            c2--;
			}
			
			//dividindo
			z=0;
			
	
	for(c=0;c<10;c++){
			x=m[c];
			z+=x;
			}	
			
			i=z%11;
			if(i==10) b2=0;
			else b2=i;
			    
     //Verificando validade
     
     	x=V[9+vt];
     	y=V[10+vt];
     	
     	if(x==b1 && y==b2) printf("CPF valido\n");
     	else printf("CPF invalido\n");

            
          vt+=11;  
        }
     
        return 0;
}



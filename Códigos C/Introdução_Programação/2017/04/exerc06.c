    #include <stdio.h>
    
    #define N 1000
    
    int main(){
        
        int n,Nl,Nc,c,cl,cc,cx,lx;
        float m[N][N];
        
        Nc=2;
        Nl=2;
        
		//Lê    
    for(cl=0;cl<Nl;cl++){
 
            for(cc=0;cc<Nc;cc++){
                scanf("%f",&m[cl][cc]);
                }
                }
        //Processa
        
        for(cl=0;cl<Nl;cl++){
            
            for(cc=0;cc<Nc;cc++){
                
                m[cl][cc]*=m[cl][cc];
                
            }
        }
        //Imprime
        cx=n-1;
        lx=0;
        for(cl=0;cl<Nl;cl++){
            
            for(cc=0;cc<Nc;cc++){
                if(cc>0) printf(" ");
                printf("%.3f",m[cl][cc]);
                cx--;
                lx++;
            }
            
            printf("\n");
        }
        
        printf("Endereço de c %d\n",&c);
        printf("Endereço de c %d\n",&Nl);
        printf("Endereço de c %d\n",&Nc);
    
        
        
        return 0;
        
    }
    
    

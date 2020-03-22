    #include <stdio.h>
    
    #define N 1000
    
    int main(){
        
        int n,Nl,Nc,c,cl,cc,cx,lx,m[N][N];
        
        c=0;
        //Lê    
        scanf("%d",&Nl);
        scanf("%d",&Nc);
        
        //Processa
        
        for(cl=0;cl<Nl;cl++){
            
            for(cc=0;cc<Nc;cc++){
                if(c%2==0) m[cl][cc]=1;
                else m[cl][cc]=0;
                c++;
            }
            
            //             if(Nc%2!=0 || Nl%2!=0)
            c++;
        }
        //Imprime
        cx=n-1;
        lx=0;
        for(cl=0;cl<Nl;cl++){
            
            for(cc=0;cc<Nc;cc++){
                if(cc>0) printf(" ");
                printf("%d",m[cl][cc]);
                cx--;
                lx++;
            }
            
            printf("\n");
        }
        
        
        
        return 0;
        
    }
    
    

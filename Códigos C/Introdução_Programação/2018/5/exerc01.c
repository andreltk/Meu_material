#include<stdio.h>

int main(){
    
    typedef struct{
        float x;
        float y;
    }fr;
    
    int c,c1,c2,nt,nf,i;    
    float x,y;
    fr v[50];
    
    scanf("%d",&nt);
    
    for(c2=0;c2<nt;c2++){
        
        
        
        scanf("%d",&nf);
        
        for(c1=0;c1<nf;c1++){
            
            scanf("%f",&v[c1].x);
            scanf("/%f",&v[c1].y);
            //printf("%f === %f\n\n",v[c1].x,v[c1].y);
            
        }
        
        i=0;
        printf("Caso de teste %d\n",c2+1);
        
        for(c1=0;c1<nf;c1++){
            
            for(c=c1+1;c<nf;c++){
                
                x=(v[c1].x)/(v[c1].y);
                y=v[c].x/v[c].y;
                
                
//             printf("============\nX= %f, Y= %f\n===============\n",v[c1].x,v[c1].y);
                
                if(x==y){
                    
                    i=1;
                    
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n",v[c1].x,v[c1].y,v[c].x,v[c].y);
                    
                }
                
            }
            
        }
        
        if(i==0)
            printf("Nao ha fracoes equivalentes na sequencia\n");
        
    }
    
    
    
}

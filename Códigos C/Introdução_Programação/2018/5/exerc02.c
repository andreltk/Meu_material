#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nm[50];
    float vl;
    int qt;
}pr;

pr *lstptd(int nt);
pr *lstcmp(int nt);
float calc(pr *u,pr *v,int np,int nc);

int main(){
    
    
    
    int c,nt,np,nc;
    pr *v,*w;
    
    
    
    scanf("%d",&nt);
    
    for(c=0;c<nt;c++){
        
        scanf("%d",&np);
        v=lstptd(np);
        scanf("%d",&nc);
        w=lstcmp(nc);
        printf("R$ %.2f\n",calc(v,w,np,nc));
        free(v);
        free(w);
    }
}

pr *lstptd(int nt){
    
    int c;
    pr *u;
    
    u=(pr *)malloc(nt*sizeof(pr));
    
    for(c=0;c<nt;c++){
        
        scanf("\n%s",u[c].nm);
        scanf("%f",&u[c].vl);

        
    }
    
    return u;
    
}
pr *lstcmp(int nt){
    
    int c;
    pr *v;
    
    v=(pr *)malloc(nt*sizeof(pr));
    
    for(c=0;c<nt;c++){
        
        scanf("\n%s",v[c].nm);
        scanf(" %d",&v[c].qt);
        
    }
    
  
    
    return v;
    
}
float calc(pr *u,pr *v,int np,int nc){
    
    int c,c1,st;
    float vf;
    vf=0;
    
    for(c1=0;c1<nc;c1++){
        
        
        
        for(c=0;c<np;c++){
            if(strcmp(v[c1].nm,u[c].nm)==0){
                
                vf=vf+(v[c1].qt*u[c].vl);
                
            }
        }
        
        
    }

    return vf;
}
    
    

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct{
    float nv[4];
    float nm;
    int ps;
}pc;

int main(){
    
    int c,c1,nt,w;
    float x,y,z;
    pc *vt;
    
    scanf("%d",&nt);
    
    vt=(pc *)malloc(nt*sizeof(pc));
    
    
    for(c1=0;c1<nt;c1++){
        
        vt[c1].ps=c1;
        scanf("%f""%f""%f""%f",&vt[c1].nv[0],&vt[c1].nv[1],&vt[c1].nv[2],&vt[c1].nv[3]);
    }
    
    for(c=0;c<nt;c++){  
        
        
        x=vt[c].nv[0]*vt[c].nv[0]+vt[c].nv[1]*vt[c].nv[1]+vt[c].nv[2]*vt[c].nv[2]+vt[c].nv[3]*vt[c].nv[3];
        
        vt[c].nm=sqrt(x);
    }
    
    for(c1=nt;c1>0;c1--){
        
        for(c=nt-c;c+1<nt;c++){  
            
            x=vt[c].nm;
            y=vt[c+1].nm;
            
//             printf("\tEm C=%d e C1=%d X==%.2f e Y==%.2f\n",c,c1,x,y);
            if(x>y){
//                 printf("\t\tAntes da alteração: PS1=%d PS2=%d\n",vt[c].ps,vt[c+1].ps);
                w=vt[c].ps;
                vt[c].ps=vt[c+1].ps;
                vt[c+1].ps=w;
//             printf("\t\tFeita a alteração: PS1=%d PS2=%d\n",vt[c].ps,vt[c+1].ps);
            }
            
        }
    }
    
    for(c=0;c<nt;c++){
        for(c1=0;c1<nt;c1++){
            
            if(vt[c1].ps==c){
                printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n",vt[c1].nv[0],vt[c1].nv[1],vt[c1].nv[2],vt[c1].nv[3],vt[c1].nm,vt[c1].ps);
//                  printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f  C = %d\n",vt[c1].nv[0],vt[c1].nv[1],vt[c1].nv[2],vt[c1].nv[3],vt[c1].nm,vt[c1].ps);
            }
        }
    }
    
    free(vt);
}

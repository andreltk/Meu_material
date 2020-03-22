#include<stdio.h>
#include<math.h>
int main(){
 
    int tt,nj,nr;
    float pop,gr,arq,cad,vf,vpop,vgr,varq,vcad;
    
    scanf("%d",&nj);
    
    nr=1;
    
    while(nr<=(nj)){
        scanf("%d %f %f %f %f",&tt,&pop,&gr,&arq,&cad);
        
        vpop=(pop*(tt*0.01))*1.0;
        vgr=(gr*(tt*0.01))*5.0;
        varq=(arq*(tt*0.01))*10.0;
        vcad=(cad*(tt*0.01))*20.0;
        vf=vpop+vgr+varq+vcad;
        
        
        printf("A RENDA DO JOGO N. %d E = %.2f\n",nr,vf);
        
        nr++;
    }
    
    
    return 0;
}

    #include<stdio.h>
    
    int main(){
        
        int mat,c,pr;
        float pv,pvc,li,lic,tr,nf;
        
        pv=pvc=li=lic=tr=pr=nf=0;
        
        scanf("%d",&mat);
        //Provas
        for(c=0;c<8;c++){
            
            scanf("%f",&pv);
            pvc+=pv;
        }
        
        pv=(pvc/8.0)*0.7;
        
        //listas
        for(c=0;c<5;c++){
            
            scanf("%f",&li);
            lic+=li;
            printf("Li= %f\n",li);
        }
        printf("Li a= %f\n",pv);
        li=(li/5.0)*0.15;
        printf("Li F= %f\n",li);
        
        //Trabalho
        scanf("%f",&tr);
        tr=tr/10.0;
        
        nf=pv+li+tr;
        
        //Presença
        
        scanf("%d",&pr);
        
        printf("Matricula: %d, ",mat);
        printf("Nota Final: %.2f, ",nf);
        
        if(nf>=6&&pr>95)
            printf("Situacao Final: APROVADO\n");
        if(nf<=6&&pr<96)
            printf("Situacao Final: REPROVADO POR FREQUENCIA\n");
        if(nf<6&&pr>95)
            printf("Situacao Final: REPROVADO POR NOTA\n");
        if(nf<6&&pr<96)
            printf("Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n");
        
    } 
    

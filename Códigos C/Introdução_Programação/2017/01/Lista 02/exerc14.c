#include <stdio.h>

int main(){
    
    float slm,sall,txl,txc,tx,impb,impl,msg;
    int mt,depl,cta,ctb;
    
    scanf("%d",&mt);
    scanf("%f",&slm);
    scanf("%d",&depl);
    scanf("%f",&sall);
    scanf("%f",&txl);
    
    cta=(slm*12);
    ctb=(slm*5);
    
    
    if(sall>cta){
        
        impb=(sall*0.20);
        impl=impb-(300*depl);
        txc=(sall*(txl/100));
        tx=impl-txc;
        
        
        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;
        
    }
    else if(sall>ctb){
            
        impb=(sall*0.08);
        impl=impb-(300*depl);
        txc=(sall*(txl/100));
        tx=impl-txc;
        
        

        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;
        
    }
    else if(sall<ctb){
            
        impb=0;
        impl=impb-(300*depl);
        txc=(sall*(txl/100));
        tx=impl-txc;
       
        

        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;     
    }
    
    printf("MATRICULA = %d\n",mt);
    printf("IMPOSTO BRUTO = %.2f\n",impb);
    printf("IMPOSTO LIQUIDO = %.2f\n",impl);
    printf("RESULTADO = %.2f\n",tx);
    
    if (msg==1) printf("IMPOSTO A RECEBER\n");
    else if (msg==0) printf("IMPOSTO QUITADO\n");
    else if (msg==2) printf("IMPOSTO A PAGAR\n");
    
    
return 0;

}

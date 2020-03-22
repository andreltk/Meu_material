#include <stdio.h>

int main(){
    
    float slm,sall,txl,txc,tx,impb,impl,msg;
    int mt,depl;
    
    scanf("%d",&mt);
    scanf("%f",&slm);
    scanf("%d",&depl);
    scanf("%f",&sall);
    scanf("%f",&txl);
    
    if (sall>(slm*12.0)){
        impb=sall*0.20;
        impl=impb-(300.0*depl);
        txc=(sall*(txl/10));
        tx=impl-txc;
        
        
        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;
        
    }
    else if (sall>(slm*5.0)){
            
        impb=sall*0.8;
        impl=impb-(300.0*depl);
        txc=(sall*(txl/10));
        tx=impl-txc;
        
        

        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;
        
    }
    else if (sall<(slm*5.0)){
            
        impb=sall*0.8;
        impl=impb-(300.0*depl);
        txc=(sall*(txl/10));
        tx=impl-txc;
       
        

        if(tx<0) msg=1;
        else if (tx==0) msg==0;
        else if (tx>0)msg==2;     
    }
    
    printf("MATRICULA = %d\n",mt);
    printf("IMPOSTO BRUTO = %.2f\n",impb);
    printf("IMPOSTO LIQUIDO = %.2f\n",impl);
    printf("RESULTADO = %.2f\n",txc);
    
    if (msg==1) printf("IMPOSTO A RECEBER\n");
    else if (msg==0) printf("IMPOSTO QUITADO\n");
    else printf("IMPOSTO A PAGAR\n");
    
    
return 0;

}

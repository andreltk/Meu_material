#include <stdio.h>
 
int main(){
    
    float n1,n2,n3,n4,nf;
    
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    
    //n1
    if (n1<n2 && n1<n3 && n1<n4 ) {
        //n1-n2
        if (n2<n3 && n2<n4){
            
            if(n3<n4){
                    
                nf = n1+n2+n3;
                printf("%d\n",nf);
            }
            else{
                
                nf= n1+n2+n4;
                printf("%d\n",nf);
            }
        }
        //n1-n3
        else if (n3<n2 && n3<n4){
            
            if(n2<n4){
                
                nf= n1+n3+n2;
                printf("%d\n",nf);
            }
            else{
                
                nf= (n1+n3+n4);
                printf("%d\n",nf);
            }
        }
        //n1-n4
        else if (n4<n2 && n4<n3){
            
            if(n2<n3){
                
                nf=(n1+n4+n2);
                printf("%d\n",nf);
            }
            else{
                
                nf= (n1+n4+n3);
                printf("%d\n",nf);
            }
        }
    }
        /*Houve mudanças no printf,a conta passou a ser uma varivel. Verificar qual modo funciona... 
        */
        //
        //
        
        //n2
    else if (n2<n1 && n2<n3 && n2<n4 ){
            
            if (n1<n3&&n3<n4){
                
                if(n3<n4){
                    
                    printf("%d\n",(n2+n1+n3));
                }
                else{
                    
                    printf("%d\n",(n2+n1+n4));
                }
            }
            //n2-n3
            else if (n3<n1&&n3<n4){
                
                if(n1<n4){
                    
                    printf("%d\n",(n1+n3+n2));
                }
                else{
                    
                    printf("%d\n",(n2+n3+n4));
                }
            }
            //n2-n4
            else if (n4<n1&&n4<n3){
                
                if(n3<n1){
                    
                    printf("%d\n",(n2+n4+n3));
                }
                else{
                    
                    printf("%d\n",(n2+n4+n1));
                }
            }
    }
    //
        //
        //
        
        //n3
    else if (n3<n1 && n3<n2 && n3<n4 ){
            
            if (n1<n2&&n2<n4){
                
                if(n3<n4){
                    
                    printf("%d\n",(n2+n1+n3));
                }
                else{
                    
                    printf("%d\n",(n2+n1+n4));
                }
            }
            //n2-n3
            else if (n3<n1&&n3<n4){
                
                if(n1<n4){
                    
                    printf("%d\n",(n1+n3+n2));
                }
                else{
                    
                    printf("%d\n",(n2+n3+n4));
                }
            }
            //n2-n4
            else if (n4<n1&&n4<n3){
                
                if(n3<n1){
                    
                    printf("%d\n",(n2+n4+n3));
                }
                else{
                    
                    printf("%d\n",(n2+n4+n1));
                }
            }
    }
    //
    //
    //n4
    else if (n4<n2 && n4<n3 && n4<n1 ) {
        //n4-n1
        if (n1<n3 && n1<n3){
            
            if(n2<n3){
                
                nf = n1+n2+n4;
                printf("%d\n",nf);
            }
            else{
                
                nf= n1+n3+n4;
                printf("%d\n",nf);
            }
        }
        //n4-n3
        else if (n2<n3 && n2<n1){
            
            if(n1<n3){
                
                nf= n1+n4+n2;
                printf("%d\n",nf);
            }
            else{
                
                nf= (n2+n3+n4);
                printf("%d\n",nf);
            }
        }
        //n4-n3
        else if (n3<n2 && n3<n1){
            
            if(n2<n1){
                
                nf=(n3+n4+n2);
                printf("%d\n",nf);
            }
            else{
                
                nf= (n1+n4+n3);
                printf("%d\n",nf);
            }
        }
    }
      
      return 0;
  }
  

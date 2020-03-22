    #include <stdio.h>
     
    int main(){
        
      int n1,n2,n3,c1,c2,c3,l1,l2,l3;
      char a1,a2,a3;
      
      
      
        scanf("%d %d %d\n",&n1,&n2,&n3);
        scanf("%c %c %c",&a1,&a2,&a3);
       
        if (n1<=n2 && n1<=n3){
            
            if (n2<=n3){
                
               l1=n1;
               l2=n2;
               l3=n3;
            }
            else{
                
               l1=n1;
               l2=n3;
               l3=n2;
            }
        }
        else if (n2<=n1 && n2<=n3){
            
            if (n1<=n3){
                
               l1=n2;
               l2=n1;
               l3=n3;
            }
            else{
                
               l1=n2;
               l2=n3;
               l3=n1;
            }
        }
        else if (n3<=n1 && n3<=n2){
            
            if (n2<=n1){
                
               l1=n3;
               l2=n2;
               l3=n1;
            }
            else{

               l1=n3;
               l2=n1;
               l3=n2;
            }
        }
         
        if (a1=='A') c1='1';
        else if (a1=='B') c1='2';
        else if (a1=='C') c1='3';
        
        if (a2=='A') c2='1';
        else if (a2=='B') c2='2';
        else if (a2=='C') c2='3';
        
        if (a3=='A') c3='1';
        else if (a3=='B') c3='2';
        else if (a3=='C') c3='3';
        
        if (c1<=c2 && c1<=c3){
            
            if (c2<=c3){
                
                printf("%d %d %d\n",l1,l2,l3);
            }
            else{
                
                printf("%d %d %d\n",l1,l3,l2);
            }
        }
        else if (c2<=c1 && c2<=c3){
            
            if (c1<=c3){
                
                printf("%d %d %d\n",l2,l1,l3);
            }
            else{
                
                printf("%d %d %d\n",l2,l3,l1);
            }
        }
        else if (c3<=c1 && c3<=c2){
            
            if (c2<=c1){
                
                printf("%d %d %d\n",l3,l2,l1);
            }
            else{
                
                printf("%d %d %d\n",l3,l1,l2);
            }
        }
       
        return 0;
    }
        

#include <stdio.h>

int main(){
    
    float n1,n2,n3;
    int i;
    
    scanf("%d",&i);
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    if (i==1){
        if (n1<n2 && n1<n3){
            
            if (n2<n3){
                
                printf("%.2f %.2f %.2f\n",n1,n2,n3);
            }
            else{
                
                printf("%.2f %.2f %.2f\n",n1,n3,n2);
            }
        }
        else if (n2<n1 && n2<n3){
            
            if (n1<n3){
                
                printf("%.2f %.2f %.2f\n",n2,n1,n3);
            }
            else{
                
                printf("%.2f %.2f %.2f\n",n2,n3,n1);
            }
        }
        else if (n3<n1 && n3<n2){
            
            if (n2<n1){
                
                printf("%.2f %.2f %.2f\n",n3,n2,n1);
            }
            else{
                
                printf("%.2f %.2f %.2f\n",n3,n1,n2);
            }
        }
    }
    if (i==2){
         if (n1<n2 && n1<n3){
        
        if (n2<n3){
            
            printf("%.2f %.2f %.2f\n",n3,n2,n1);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n2,n3,n1);
        }
    }
    else if (n2<n1 && n2<n3){
        
        if (n1<n3){
            
            printf("%.2f %.2f %.2f\n",n3,n1,n2);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n1,n3,n2);
        }
    }
    else if (n3<n1 && n3<n2){
        
        if (n2<n1){
            
            printf("%.2f %.2f %.2f\n",n1,n2,n3);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n2,n1,n3);
        }
    }
    }
    if (i==3){
         if (n1<n2 && n1<n3){
        
        if (n2<n3){
            
            printf("%.2f %.2f %.2f\n",n2,n3,n1);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n3,n2,n1);
        }
    }
    else if (n2<n1 && n2<n3){
        
        if (n1<n3){
            
            printf("%.2f %.2f %.2f\n",n1,n3,n2);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n3,n1,n2);
        }
    }
    else if (n3<n1 && n3<n2){
        
        if (n2<n1){
            
            printf("%.2f %.2f %.2f\n",n2,n1,n3);
        }
        else{
            
            printf("%.2f %.2f %.2f\n",n1,n2,n3);
        }
    
        }
    }
    return 0;
}
    

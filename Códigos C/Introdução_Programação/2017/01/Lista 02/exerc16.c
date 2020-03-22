#include <stdio.h>

int main(){
    
    float n,n1,n2,n3;
    
    scanf("%f",&n);
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
   
    if (n<n1 && n<n2 && n<n3){
        
        printf("%.2f, ",n);
        
        if (n1<n2 && n1<n3){
            
            if (n2<n3){
                
                printf("%.2f, %.2f, %.2f\n",n1,n2,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n1,n3,n2);
            }
        }
        else if (n2<n1 && n2<n3){
            
            if (n1<n3){
                
                printf("%.2f, %.2f, %.2f\n",n2,n1,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n2,n3,n1);
            }
        }
        else if (n3<n1 && n3<n2){
            
            if (n2<n1){
                
                printf("%.2f, %.2f, %.2f\n",n3,n2,n1);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n3,n1,n2);
            }
        }
    }
    
    else if (n1<n && n1<n2 && n1<n3){
        
        printf("%.2f, ",n1);
        
        if (n<n2 && n<n3){
            
            if (n2<n3){
                
                printf("%.2f, %.2f, %.2f\n",n,n2,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n,n3,n2);
            }
        }
        else if (n2<n && n2<n3){
            
            if (n<n3){
                
                printf("%.2f, %.2f, %.2f\n",n2,n,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n2,n3,n);
            }
        }
        else if (n3<n && n3<n2){
            
            if (n2<n){
                
                printf("%.2f, %.2f, %.2f\n",n3,n2,n);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n3,n,n2);
            }
        }
    }

    //trocado o n2 por n, ver se dar certo
    else if (n2<n && n2<n1 && n2<n3){
        
        printf("%.2f, ",n2);
        
        if (n<n && n<n3){
            
            if (n<n3){
                
                printf("%.2f, %.2f, %.2f\n",n,n,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n,n3,n);
            }
        }
        else if (n<n && n<n3){
            
            if (n<n3){
                
                printf("%.2f, %.2f, %.2f\n",n,n,n3);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n,n3,n);
            }
        }
        else if (n3<n && n3<n){
            
            if (n<n){
                
                printf("%.2f, %.2f, %.2f\n",n3,n,n);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n3,n,n);
            }
        }
    }
    //trocando o n3 por n
    else if (n3<n && n3<n1 && n3<n){
        
        printf("%.2f, ",n3);
        
        if (n<n2 && n<n1){
            
            if (n2<n1){
                
                printf("%.2f, %.2f, %.2f\n",n,n2,n1);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n,n1,n2);
            }
        }
        else if (n2<n && n2<n1){
            
            if (n<n1){
                
                printf("%.2f, %.2f, %.2f\n",n2,n,n1);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n2,n1,n);
            }
        }
        else if (n1<n && n1<n2){
            
            if (n2<n){
                
                printf("%.2f, %.2f, %.2f\n",n1,n2,n);
            }
            else{
                
                printf("%.2f, %.2f, %.2f\n",n1,n,n2);
            }
        }
    }

    return 0;
}
    

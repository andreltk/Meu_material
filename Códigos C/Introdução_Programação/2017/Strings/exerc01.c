#include <stdio.h>

int main(){
    
    int c,t,c1,c2,ca,cb;
    
    ca=cb=0;
    
    char a[128],b[128],f[1000];
    
    scanf("%d",&t);
    
    for(c=0;c<t;c++){
        
        scanf("%s",a);
        scanf("%s",b);
        
        for(c1=0;a[c1]!='\0' || b[c1]!='\0';c1++){
            
            if(a[c1]!='\0')
                f[ca]=a[c1];
            ca++;
            if(b[c1]!='\0')
                f[ca]=b[c1];
            ca++;
        }
        
        f[ca]='\n';
    }
    
    
    
    for(c=0;c<=ca;c++)
        
        printf("%c",f[c]);
    
    return 0;
}

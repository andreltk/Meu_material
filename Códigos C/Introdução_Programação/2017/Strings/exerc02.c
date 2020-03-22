#include <stdio.h>

int main(){
    
    int c,c1,t,nl,cnl,led[1000];
    
    char a[128],b,f[1000];
    
    cnl=0;
    
    scanf("%d",&t);
    
    for(c=0;c<t;c++){
        
        scanf("%s",a);
        nl=0;
        
        for(c1=0;a[c1]!='\0';c1++){
            
            b=a[c1];
            
            if(b=='0') nl+=6; 
            if(b=='1') nl+=2;
            if(b=='2') nl+=5;
            if(b=='3') nl+=5;
            if(b=='4') nl+=4;
            if(b=='5') nl+=5;
            if(b=='6') nl+=6;
            if(b=='7') nl+=3;
            if(b=='8') nl+=7;
            if(b=='9') nl+=6;
            
        }
        
        led[cnl]=nl;      
        cnl++;         
    }
    for(c=0;c<cnl;c++)
        printf("%d leds\n",led[c]);
    
    return 0;
}

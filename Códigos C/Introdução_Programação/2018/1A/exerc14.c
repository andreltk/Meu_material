#include <stdio.h>

int main(){
    
    float alt,are,ab,p3,r3,vf;
    
    r3=1.73205;
    p3=1.0/3;
    
    scanf("%f",&alt);
    scanf("%f",&are);
    
    ab=(3*(are*are)*r3)/2;
    
    vf=p3*ab*alt;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n",vf);
    
    
    
    return 0;
}

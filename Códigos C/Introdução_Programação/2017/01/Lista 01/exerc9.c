#include <stdio.h>

int main(){
    int hr;
    int min;
    int seg;
    int segc;
    
    scanf("%d",& hr);
    scanf("%d",& min);
    scanf("%d",& seg);
    
    
    segc= (hr*3600)+(min*60)+seg;
    
    
    printf ("O TEMPO EM SEGUNDOS E = %d\n",segc);
    }


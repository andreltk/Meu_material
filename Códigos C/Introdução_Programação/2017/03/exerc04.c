#include <stdio.h>

int main() {
    
    int c,c1,ne;
    
    scanf("%d",&ne);
    
    int V[ne];
    
    for(c=0; c<ne;c++)
        scanf("%d",&V[c]);
        
    
    for(c=0; c<ne; c++){
        printf("%d",V[c]);
        if (c<(ne-1)) printf(" ");
        else printf("\n");
        
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
 
    int ni,r,el,nr,sm,pa,nf;
    
    scanf("%d %d %d",&ni,&r,&el);
    sm=ni;
    nr=1;
        while(nr==el){
           
            pa=ni+(r*(nr-1));
                   
            sm+pa;
            
            nr++;
        }
    printf("%d\n",sm);
    
    return 0;
}

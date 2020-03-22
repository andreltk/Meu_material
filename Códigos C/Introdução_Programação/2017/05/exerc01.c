#include <stdio.h>

typedef struct{
    
    int codc;
    float valc;
    char nomc[101];
}ValCred;

typedef struct{
    
    char noma[501];
    int codc;
    int numc;
}Aluno;

int le_curso(ValCred *);
int le_alunos(Aluno *);
void cria_boleto(ValCred * cursos,Aluno * alunos,int * boleto,int na,int nc);
void imp_men(ValCred * cursos,Aluno * alunos,int na,int * boleto);

int main(){
    
    
    int c,nc,na,boleto[2000];
    ValCred cursos[30];
    Aluno alunos[1000];
    
    nc=le_curso(cursos);
    na=le_alunos(alunos);
    
    for(c=0;c<=na;c++){
        printf("%s    ",alunos[c].noma);
        printf("%d  ",alunos[c].codc);
        printf("%d\n",alunos[c].numc);
      
    }
    
    for(c=0;c<nc;c++);{
        scanf("%d  ",cursos[c].codc);
        scanf("%f  ",cursos[c].valc);
        scanf("%s\n",cursos[c].nomc);
}
    
    //cria_boleto(cursos,alunos,boleto,na,nc);
    //imp_men(cursos,alunos,na,boleto);
    
    return 0;
}
int le_curso(ValCred * cursos){
    
    int c,nc;
    
    do scanf("%d",&nc);
    while(nc<=4 && nc>=31);
    
    for(c=0;c<nc;c++){
        
        scanf("%d",&cursos[c].codc);
        scanf("%f",&cursos[c].valc);
        scanf("\n%[^\n]s",cursos[c].nomc);
    }
   return nc; 
}

int le_alunos(Aluno * alunos){
    
    int na,c;
    
    do scanf("%d",&na);
    while(na<1 && na>1000);
        
    for(c=0;c<na;c++){
        
        scanf("\n%[^\n]s",alunos[c].noma);
        scanf("%d",&alunos[c].codc);
        scanf("%d",&alunos[c].numc);
        
    }
    return na; 
}

void cria_boleto(ValCred * cursos,Aluno * alunos,int * boleto,int na,int nc){
    
    int c,c1,c2,cc,cl;
    
    cc=0;
    
    for(c=0;c<na;c++){
        
                for(c1=0;c1<=nc;c1++){
                    if(alunos[c].codc==cursos[c1].codc){
                        boleto[cc]=c1;
                        cc++;
                        break;
                    }
                }
    }
    
}   

void imp_men(ValCred * cursos,Aluno * alunos,int na,int * boleto){
            
    int c,cc,numc;
    float vlr;
        cc=0;
    for(c=0;c<na;c++){
        
        printf("Aluno(a): %s ",alunos[c].noma);
        numc=boleto[cc];
        c++;
        printf("Curso: %s ",cursos[numc].nomc);
        printf("Num. Creditos: %d ",alunos[c].numc);
        printf("Valor Credito: %.2f ",cursos[numc].valc);
        vlr=alunos[c].numc*cursos[numc].valc;
        printf("Mensalidade: %.2f\n",vlr);

    }
}    

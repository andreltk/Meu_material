#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
int main()
{
    //int N, dados[] = {50,100,30,20,40,45,35,37};
    //int N, dados[] = {50, 46, 65,35, 47, 75, 15, 40, 70, 85, 5, 38, 42, 36, 43};
    //int N, dados[] = {4, 2, 6, 1, 3, 5, 10, 8};
    //int N, dados[] = {33, 15, 41, 38, 47, 34, 43, 49};
    int N, dados[] = {1, 3, 2, 4, 5, 6};


    N = sizeof(dados)/sizeof(dados[0]);

    ArvBin* raiz = cria_ArvBin();
    int i, info;
    
    for(i=0; i < N; i++)
        insere_ArvBin(raiz, dados[i]);
        //insere_EmLargura(raiz, dados[i]);

    desenheArvore(raiz);

    printf("\n\nPercurso em pre-ordem:\n");
    preOrdem_ArvBin(raiz);
    printf("\n\nPercurso em-ordem:\n");
    emOrdem_ArvBin(raiz);
    printf("\n\nPercurso pos-ordem:\n");
    posOrdem_ArvBin(raiz);

    printf("\n\n");
    
    //printf("\n\nTotal de nos da arvore (rec): %i\n", totalNO_ArvBin(raiz));
    //printf("\n\nTotal de nos da arvore (iter): %i\n\n", totalNO_ArvBin_Iter(raiz));    
    printf("\nAltura da arvore (rec): %i\n", altura_ArvBin(raiz));
    //printf("\nAltura da arvore (iter): %i\n\n", altura_ArvBin_Iter(raiz));
    
    printf("\nPercurso largura:\n");
    visitaEmLargura(raiz);    
   
    /*
    if(remove_ArvBin(raiz, 50)) {
        printf("\n\nremovido\n");
        preOrdem_ArvBin(raiz);
    }
    else
        printf("NAO removido\n");
    */

//    printf("altura: %d\n",altura_ArvBin(raiz));
//    printf("total NOs: %d\n",totalNO_ArvBin(raiz));
//
   if (consulta_ArvBin(raiz, 20, &info))
      printf("\nResultado da consulta: %i elemento encontrado na arvore!", info);
   /* 
   if (consulta_ArvBinRec(raiz, 500, &info))
      printf("\nResultado da consulta: %i elemento encontrado na arvore!", info);
   else
      printf("\nElemento pesquisado nao encontrado na arvore!");
   */

    libera_ArvBin(raiz);
    printf("\nFim!\n");
    system("pause > nul");
    return 0;
}


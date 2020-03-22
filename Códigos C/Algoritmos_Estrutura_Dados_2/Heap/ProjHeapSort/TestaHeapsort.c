#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include "heap.h"

double RandomReal(double low, double high)
{
    double d;

    d = (double) rand() / ((double) RAND_MAX + 1);
    return (low + d * (high - low));
}

int main()
{
   int tamanho_vetor, *vetor, contador, maior, sair=0, menu1;
   int aux;
   float logN;
   
   while(sair == 0){
      printf("\n\t\t----------------------------------------\n");
      printf("\n\t\t\tORDENACAO USANDO HEAPSORT\n");
		printf("\n\t\t\t1. Gerar vetor com valores");
		printf("\n\t\t\t2. Sair\n\t\t\t");
      printf("\n\t\t----------------------------------------\n");

      menu1 = getch();
      system("cls");
      
      if (menu1 == '1') {
         printf("Tamanho do vetor: ");
         scanf("%d", &tamanho_vetor);
         
         vetor = (int *) malloc(sizeof(int)*tamanho_vetor);  
         srand(time(NULL));
         //srand(time(0));
      
         //gerando vetores aleatorios
         for (contador = 0; contador < tamanho_vetor; contador++){
            //vetor[contador]= rand() % 100000;   
            vetor[contador] = RandomReal(1, tamanho_vetor);
         }
         
         logN = log(tamanho_vetor) / log(2);
         
         printf("Antes da ordenacao:\n\n");
         
         if (tamanho_vetor > 1000) {
	         for (contador=0; contador <= logN/2; contador++){
	            //printf("numero %d: %d\n",contador2,vetor[contador2]);
	            printf("%d ", vetor[contador]);
	         }
	         for (contador=tamanho_vetor-(logN/2); contador < tamanho_vetor; contador++){
	            //printf("numero %d: %d\n",contador2,vetor[contador2]);
	            printf("%d ", vetor[contador ]);
	         }
			}
			else {
	         //exibindo desordenado
	         for (contador=0; contador < tamanho_vetor; contador++){
	            //printf("numero %d: %d\n",contador2,vetor[contador2]);
	            printf("%d ", vetor[contador]);
	         }
	  		}
         
         //printf("Primeiro elemento do vetor: %i\n", vetor[0]);
         //printf("Ultimo elemento do vetor: %i\n", vetor[tamanho_vetor-1]);
         
         printf("\n\n--------------------------------------\n");
         printf("Pressione barra de espacos para iniciar a ordenacao\n\n");
         system("pause > nul");
         clock_t hora_inicial = clock();
         //heap_sort(vetor, tamanho_vetor);
         heapSort(vetor, tamanho_vetor);
                     
         clock_t hora_final = clock();
         double tempo_gasto = ( (double) (hora_final - hora_inicial) ) / CLOCKS_PER_SEC;
         
         printf("Depois da ordenacao:\n\n");

         if (tamanho_vetor > 1000) {
	         for (contador=0; contador <= logN/2; contador++){
	            //printf("numero %d: %d\n",contador2,vetor[contador2]);
	            printf("%d ", vetor[contador]);
	         }
	         for (contador=tamanho_vetor-(logN/2); contador < tamanho_vetor; contador++){
	            //printf("numero %d: %d\n",contador2,vetor[contador2]);
	            printf("%d ", vetor[contador ]);
	         }
			}
			else {
	         //exibindo organizado            
	         for(contador = 0; contador < tamanho_vetor; contador++){
	            //printf("numero %d: %d\n",contador2, vetor[contador2]);
	            printf("%d ", vetor[contador]);
	            
	         }
			}
         //printf("Primeiro elemento do vetor: %i\n", vetor[0]);
         //printf("Ultimo elemento do vetor: %i\n", vetor[tamanho_vetor-1]);
                     
         //double tempo_gasto = ( (double) (hora_final - hora_inicial) ) / CLOCKS_PER_SEC;
         printf("\n\nTEMPO GASTO USANDO HEAP SORT PARA ORDENAR %i ELEMENTOS: %lf s\n\n", tamanho_vetor, tempo_gasto);
         
         system("pause");
         system("cls");
      }
      else if (menu1  == '2') {
      	printf("FIM DE PROGRAMA!");
         sair=1;
      }
   }
   system("pause > nul");
   return 0;
}

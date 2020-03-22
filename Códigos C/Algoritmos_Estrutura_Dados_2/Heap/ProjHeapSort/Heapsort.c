#include"heap.h"

// Passo 2
void heapSort(int *vet, int N)
{
	int i, aux;
	// Criacao de heap a partir dos dados
	for (i=(N-1)/2; i >= 0; i--) {
		criaHeap(vet, i, N-1);
	}
	// Reconstrucao de heap
	for (i=N-1; i >= 1; i--) {
		// Pegar o maior elemento da heap e colocar na sua posição correspondente no array
		aux = vet[0];
		vet[0] = vet[i];
		vet[i] = aux;

		// Reconstruir heap
		criaHeap(vet, 0, i-1);
	}
}

// Passo 1
void criaHeap(int *vet, int i, int f)
{
	int aux = vet[i];
	int j = i * 2 + 1;

	while (j <= f) {
		if (j < f) {
			// Pai tem 2 filhos? Quem é o maior?
			if (vet[j] < vet[j + 1]) {
				j = j + 1;
			}
		}
		// Filho maior que o pai? Filho se torna o pai! Repetir o processo
		if (aux < vet[j]) {
			vet[i] = vet[j];
			i = j;
			j = 2 * i + 1;
		}
		else {
			j = f + 1;
		}
	}
	vet[i] = aux;
}


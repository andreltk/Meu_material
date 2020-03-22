#include <stdio.h>
void troca (int * x, int * y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int partition (int * v, int p, int r) {
    int i, j, pivo;
    // escolhe o valor em v[r] para ser o pivot
    pivo = v[r];
    i = p-1;
    for (j = p; j < r; j++)
        if (v[j] <= pivo) {
            i++;
            troca (&v[i], &v[j]);
        }
        troca (&v[i+1], &v[r]);
    return i + 1;
}
void quick_sort(int * v, int p, int r) {
    int q;
    if (p >= r)
        return;
    q= partition (v, p, r)+1;
//     q = partition (v, p-1, r-1)+1;
    printf("Partition = %d\n", q);
    quick_sort (v, p, q-1);
    quick_sort (v, q+1, r);
}
void imprime (int * v, int n) {
    int i;
    for (i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int i, n, v[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%d",&v[i]);
    imprime (v, n);
    quick_sort (v, 0, n);

imprime (v, n);
return 0;
}

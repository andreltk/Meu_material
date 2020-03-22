#include <stdio.h>

int main() {

    char t;
    int cont;
    float cons, valor;

    scanf("%d\n",&cont);
    scanf("%f\n",&cons);
    scanf("%c\n",&t);

    if (t == 'R') {

        valor = (5.0+(cons*0.05));

        printf("CONTA = %.0f\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);

        return 0;
    }

    else if (t== 'C') {

            if (cons <= 80) {

            valor=500.0;

            printf("CONTA = %.0f\n",cont);
            printf("VALOR DA CONTA = %.2f\n",valor);

            return 0;

            }
            else {

            valor=500.0+(cons*0.25);

            printf("CONTA = %.0f\n",cont);
            printf("VALOR DA CONTA = %.2f\n",valor);

            return 0;
            }

    }

    else if (t='I') {

            if(cons <= 100) {

            valor=800.0;
    
            printf("CONTA = %.0f\n",cont);
            printf("VALOR DA CONTA = %.2f\n",valor);

            return 0;
        }
        else {

        valor=800.0+(cons*0.04);
        printf("CONTA = %.0f\n",cont);
        printf("VALOR DA CONTA = %.2f\n",valor);

        return 0;
        }
    }
}

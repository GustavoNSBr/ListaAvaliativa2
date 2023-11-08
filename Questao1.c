#include <stdio.h>

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", numeros[i]);
        if (i < 9) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    int tamanho = 10;

    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            numeros[i] = numeros[i] + numeros[i + 1];
            printf("%d", numeros[i]);
            if (i < tamanho - 2) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
        tamanho--;
    }

    return 0;
}
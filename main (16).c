#include <stdio.h>

int main() {
    int numero[8];
    int pares = 0, impares = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº número:\n", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nNúmeros pares:\n");
    for (int i = 0; i < 8; i++) {
        if (numero[i] % 2 == 0) {
            printf("%d", numero[i]);
            pares++;
        }
    }

    printf("\nNúmeros ímpares:\n");
    for (int i = 0; i < 8; i++) {
        if (numero[i] % 2 != 0) {
            printf("%d", numero[i]);
            impares++;
        }
    }

    printf("\n\nQuantidade de números pares: %d\n", pares);
    printf("\nQuantidade de números ímpares: %d\n", impares);

    return 0;
}

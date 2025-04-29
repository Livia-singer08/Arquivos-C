#include <stdio.h>

int main(){
    int numero[6];
    int soma = 0, i;
    
    for(int i = 0; i < 6; i++){
        printf("Digite o %d número:\n", i + 1);
        scanf("%d", &numero[i]);
    }
    
    for(i = 0; i < 6; i++){
        soma += numero[i];
    }
    
    printf("A soma entre os 6 número é: %d\n", soma);
    return 0;
}
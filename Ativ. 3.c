//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    float valorReal, valorConvertido;
    int opcao;
    printf("Digite o valor em R$:\n");
    scanf("%f", &valorReal);
    
    printf("Digite o número correspondente a operação desejada (1-3):\n");
    printf("1 - Dólar (US$)\n");
    printf("2 - Euro (€)\n");
    printf("3 - Libra (£)\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: //Dólar
        valorConvertido = valorReal * 6.0;
        printf("O valor convertido em dólar é US$: %.2f\n", valorConvertido);
        break;
        
        case 2: //Euro
        valorConvertido = valorReal * 6.0;
        printf("O valor convertido em euro é €: %.2f\n", valorConvertido);
        break;
        
        case 3: //Libra
        valorConvertido = valorReal * 8.0;
        printf("O valor convertido em libra é £: %.2f\n", valorConvertido);
        break;
        
        default:
        printf("Erro! Opção inválida. Programa encerrado.\n");
        return 1;
    }
    return 0;
}
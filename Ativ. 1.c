//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int num1, num2, operador, resultado;
    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);
    printf("Insira o segundo número:\n");
    scanf("%d", &num2);
    printf("Digite o número da operação desejada (1-4):\n");
    printf("1 - Soma (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    scanf("%d", &operador);
    
    switch(operador){
        case 1: //Soma
        printf("Você escolheu Soma!\n");
        resultado = num1 + num2;
        printf("O resultado da soma é: %.2d\n", resultado);
        break;
        
        case 2: //Subtração
        printf("Você escolheu Subtração!\n");
        resultado = num1 - num2;
        printf("O resultado da subtração é: %.2d\n", resultado);
        break;
        
        case 3: //Multiplicação
        printf("Você escolheu Multiplicação!\n");
        resultado = num1 * num2;
        printf("O resultado da multiplicação é: %.2d\n", resultado);
        break;
        
        case 4: //|Divisão
        printf("Você escolheu Divisão!\n");
        resultado = num1 / num2;
        printf("O resultado da divisão é: %.2d\n", resultado);
        break;
    
        default:
        printf("Opção Inválida! Programa encerrado");
        return 1;
    }
    return 0;
}
//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    int estacao;
    printf("Selecione o número da operação desejada (1-4):\n");
    printf("1 - Verão\n");
    printf("2 - Outono\n");
    printf("3 - Inverno\n");
    printf("4 - Primavera\n");
    scanf("%d", &estacao);
    
    switch(estacao){
        case 1: //Verão
        printf("Você escolheu a estação Verão!\n");
        break;
        
        case 2: //Outono
        printf("Você escolheu a estação Outono!\n");
        break;
        
        case 3: //Inverno
        printf("Você escolheu a estação Inverno!\n");
        break;
        
        case 4: //Primavera
        printf("Você escolheu a estação Primavera!\n");
        break;
        
        default:
        printf("Erro! Opção Inválida! Programa encerrado.\n");
        return 1;
    }
    return 0;
}
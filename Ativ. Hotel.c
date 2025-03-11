//Biblioteca
#include <stdio.h>
#include <locale.h>
//Inicio
int main(){
    setlocale(LC_ALL,"");
    char nome[50], sobrenome[50], email[50], telefone[20], CPF[20];
    float diaria;
    int opcao, opcao2, tipoQuarto, numQuarto;
    printf("Bem Vindo(a) ao Hotel do Sol All Inclusive\n");
    printf("Selecione o número de acordo com o comando desejado:\n");
    printf("1 - Fazer check in\n");
    printf("2 - Chamar serviço de quarto\n");
    printf("3 - Fazer pedido\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1://Check in
        printf("Opção Check in do usuário selecionada\n");
        printf("Informe seu nome:\n");
        scanf("%s", nome);
        printf("Informe seu sobrenome:\n");
        scanf("%s", sobrenome);
        printf("Informe seu email:\n");
        scanf("%s", email);
        printf("Informe seu número de telefone:\n");
        scanf("%s", telefone);
        printf("Informe seu CPF:\n");
        scanf("%s", CPF);
        printf("Selecione o tipo de quarto desejado:\n");
        printf("1 - Solteiro R$500 (Diária)\n");
        printf("2 - Suíte Comum R$1000 (Diária)\n");
        printf("3 - Suíte Luxuosa R$2500 (Diária)\n");
        scanf("%d", &tipoQuarto);
        printf("Tipo de quarto selecionado\n");
        printf("Check in realizado com sucesso! Hotel do Sol All Inclusive agradece sua preferência!\n");
        break;
        
        default:
        printf("Erro! Opção Inválida\n");
        return 1;
    
        
        case 2://Serviço de quarto
        printf("Opção Serviço de quarto selecionada\n");
        printf("Selecione a opção desejada:\n");
        printf("1 - Limpeza do quarto\n");
        printf("2 - Produto faltante\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1)
        {
            printf("Opção 'Limpeza do quarto' selecionada\n");
             printf("Solicitação concluída com sucesso! Em breve a camareira irá ao seu quarto realizar a limpeza.\n");
        }  
        else if (opcao2 == 2)
        {
        printf("Opção 'Produto faltante' selecionada\n");
             printf("Solicitação concluída com sucesso! Em breve a camareira irá ao seu quarto levar o produto.\n");
             break;
        }
      
       
        case 3://Fazer pedido
        printf("Opção Fazer pedido selecionado\n");
        printf("Informe o prato desejado:\n");
        char comida;
        scanf("%s", comida);
        printf("Seu pedido de comida foi realizado com sucesso! Em instantes chegará para você!\n", comida);
        break;
    }
    return 0;
}
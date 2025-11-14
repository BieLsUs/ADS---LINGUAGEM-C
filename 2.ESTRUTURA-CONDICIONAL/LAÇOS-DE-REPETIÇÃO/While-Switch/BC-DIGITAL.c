#include <stdio.h>

int main(){
    float soma = 0, valor;
    int opcao;

    do
    {
        printf("\n BANCO DIGITAL - INSIRA UMA OPERAÇÃO");
        printf("\n 1.DEPOSITO");
        printf("\n 2.SAQUE");
        printf("\n 3.SALDO");
        printf("\n 4.SAIR");
        printf("\n Digite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Insira o valor de deposito: ");
            scanf("%f", &valor);

            soma = soma + valor;

            break;
        case 2:
            printf("Insira o valor de saque: ");
            scanf("%f", &valor);

            soma = soma - valor;
            
            break;
        case 3:
            printf("\n Saldo atual = R$ %.2f\n", soma);
            break;
        
        default:
            if (opcao != 4){
                printf("\nOpção inválida!\n");
            }
            
            
        }

    } while (opcao != 4);
    
    return 0;
}
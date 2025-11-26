#include <stdio.h>

int main() {
    //Criação das variáveis
    int num;
    int soma = 0;

    do
    {
        printf("Insira um número inteiro (0 para encerrar o programa): ");
        scanf("%d", &num);

        //Soma
        soma += num;

    } while (num != 0);
    
    printf("\nValor da soma final dos números inseridos: %d", soma);

    return 0;
}
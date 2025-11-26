#include <stdio.h>

int main(){
    int a, b, c;

    //Entrada dos números inseridos pelo usuário
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo número: ");
    scanf("%d", &b);
    printf("Insira o terceiro número: ");
    scanf("%d", &c);

    //Operações
    int soma = a + b + c;
    int subtracao = a - b - c;
    int multiplicacao = a * b * c;
    float divisao = (float)a / b / c;

    printf("\n_Operações Aritméticas_\n");
    printf("Soma: %d", soma);
    printf("\nSubtracao: %d", subtracao);
    printf("\nMultiplicacao: %d", multiplicacao);
    printf("\nDivisao: %.2f", divisao);

    //Operação Relacional
    if (a > b){
        printf("\nO Primeiro número é maior que o primeiro / %d maior que %d", a, b);
    }
    else if(b < c) {
        printf("\nO Segundo número é menor que o terceiro /  %d menor que %d", b, c);
    } else {
        printf("\nO Segundo número é menor que o terceiro!");
    }

    //Operação Lógica
    if((a > 0) && (b % 2 == 0)) {
        printf("\nO primeiro número %d é positivo, e o segundo número %d é par", a, b);
    } else{
        printf("\nA condição lógica não foi atendida.");
    }

    return 0;
}
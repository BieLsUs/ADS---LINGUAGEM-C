#include <stdio.h>

int main(){
    float salario, ir, inss, saldo_liquido;

    printf("CÁLCULO DE SALÁRIO LÍQUIDO COM DESCONTO DO 'IR' E 'INSS' \n\n");

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    //Cálculo do INSS
    if (salario <= 1320) {
        inss = salario * 0.075;
    }
    else if(salario >= 1320 && salario <= 2571.29) {
        inss = salario * 0.09;
    }
    else if(salario >= 2571.30 && salario <= 3856.94) {
        inss = salario * 0.12;
    }
    else if(salario >= 3856.95 && salario <= 7507.49) {
        inss = salario * 0.14;
    }
    else 
        inss = 1051,04;

    
    //Cálculo do IR
    if (salario <= 1903.98) {
        ir = salario * 0;
    }
    else if(salario >= 1903.98 && salario <= 2826.65) {
        ir = salario * 0.075;
    }
    else if(salario >= 2826.66 && salario <= 3751.05) {
        ir = salario * 0.15;
    }
    else if(salario >= 3751.05 && salario <= 4664.68) {
        ir = salario * 0.225;
    }
    else if(salario > 4664.68) {
        ir = salario * 0.275;
    }

    //Cálculo da salário líquido

    saldo_liquido = (salario - inss)-ir;

    //Imprimindo resultados
    printf("\nDesconto do INSS é: %.2f\n", inss);
    printf("Desconto do imposto de renda é: %.2f\n", ir);
    printf("Salário líquido: %.2f\n", saldo_liquido);

    return 0;
}
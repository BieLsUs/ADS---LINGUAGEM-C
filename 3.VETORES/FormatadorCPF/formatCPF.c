#include <stdio.h>

int main(){
    //
    char cpf1[15];
    //
    char cpf2[12];

    int i = 0, n = 0;

    printf("Digite o seu CPF na forma NNN.NNN.NNN-NN \n");
    scanf("%14s", cpf1);

    //
    for(i = 0; i<14; i++){
        if(cpf1[i] == '.' || cpf1[i] == '-'){

            continue;

        }else {
           cpf2[n] = cpf1[i];
           n++; //Controla o tamanho do cpf2;
        }
    }

    cpf2[n] = '\0';
    
    printf("\n\nCPF formatado = %s", cpf2);

    return 0;
}
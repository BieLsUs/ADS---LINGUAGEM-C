#include <stdio.h>

int somar(int x, int y){
    return x + y;
}

int main(){
    int resultado;

    resultado = somar(30, 50);

    printf("A soma dos valores é: %d", resultado);

    return 0;
}
#include <stdio.h>

int main(){
    int vetor[5] = {1, 2 , 3, 4 , 5};

    int *ponteiro = vetor; //Associamos o ponteiro ao vetor;

    for(int i=0; i<5; i++){
        *(ponteiro+i) += 10;
    }

    printf("Elementos do vetor após adicionar 10: ");

    for (int i=0; i<5; i++){
        printf("[%d]", vetor[i]);
    }

    

    return 0;
}
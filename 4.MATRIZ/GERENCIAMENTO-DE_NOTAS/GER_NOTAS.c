#include <stdio.h>
#define NUM_ALUNOS 3
#define NUM_DISCIPLINAS 3

int main(){
    float notas[NUM_ALUNOS][NUM_DISCIPLINAS];
    float mediasAlunos[NUM_ALUNOS];
    float mediaGeral, soma = 0;

    for(int l=0; l<NUM_ALUNOS; l++){
        printf("Insira suas notas: ");
        for (int c=0; c<NUM_DISCIPLINAS; c++){
            scanf("%f", &notas[l][c]);
        }
    }

    // Cálcula a media do  aluno em cada disciplina;
    for(int i=0; i<NUM_ALUNOS; i++){
        soma = 0;

        for(int j=0; j<NUM_DISCIPLINAS; j++){
            soma += notas[i][j];
        }

        mediasAlunos[i] = soma / NUM_DISCIPLINAS;
    }
    
    //
    for(int i=0; i<NUM_ALUNOS; i++){
        soma += mediasAlunos[i];
    }
    mediaGeral = soma / NUM_ALUNOS;

    //
    printf("Média geral de todos os alunos: %.2f\n", mediaGeral)
;
    return 0;
}
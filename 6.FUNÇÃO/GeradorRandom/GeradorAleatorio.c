#include <stdio.h>
#include <stdlib.h>

int* GerarRandom(){
    static int random[10];
    int a;

    for (a = 0; a < 10; a++){
        random[a] = rand() % 100; // A expressão "% 100" utilizamos para 
                            // limitar o rand a números entre 0 a 99
        
        printf("r[%d] = %d\n", a,random[a]);
    }
    
    return random;
}

int main(){
    int *p;
    int i;

    p = GerarRandom();

    for(i = 0; i <10; i++){
        printf("\np[%d] = %d", i,p[i]);
    }


    return 0;
}
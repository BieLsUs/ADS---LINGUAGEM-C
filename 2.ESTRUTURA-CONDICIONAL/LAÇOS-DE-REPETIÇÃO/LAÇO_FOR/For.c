#include <stdio.h>

int main(){
    int multi, num;

    for(num = 1; num <= 5; num++){

        for(multi = 1; multi <= 10; multi++){
            printf("%d", num*multi);
        }
        printf("\n");
    }

    return 0;
}
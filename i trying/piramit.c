#include <stdio.h>

int main(){

    int satir;
    int i,j;

    printf("satir sayisi girin:  ");
    scanf("%d", &satir);

    for (i = 1; i <= satir; i++){

        for (j = 1; j <= satir - i; j++){
            printf(" ");
        }

        for (j = 1; j <= 2*i - 1; j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;



}
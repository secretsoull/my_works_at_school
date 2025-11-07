#include <stdio.h>

int main(){

    int sayi;

    do {
        printf("positive bir sayi giriniz:  ");
        scanf("%d", &sayi);

        if (sayi <= 0){
            printf("girdiginiz sayi pozitif degil tekrar deneyin.\n");

        }

    }
    while (sayi <=0);
    printf("tebrikler positive sayi gridiniz %d\n", sayi);
    return 0;
}
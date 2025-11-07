#include <stdio.h>

int main() {

    int i;
    float sayi,toplam;

    i = 1;
    toplam = 0.0;

    while(i<=10) {

        printf("%d. sayiyi giriniz:  ", i);
        scanf("%f", &sayi);

        if(sayi > 0){
            toplam = toplam + sayi;
        }

        i = i + 1;

    }

    printf("positive sayilarin toplami: %2.lf  ", toplam);

    return 0;
}
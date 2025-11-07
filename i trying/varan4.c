#include <stdio.h>

int main() {
    int sayi1;
    int sayi2;
    int toplam;

    printf("Klavyeden sayi giriniz: ");
    scanf("%d", &sayi1);

    printf("Klavyeden bir sayi daha giriniz: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;

    printf("Toplam deger: %d\n", toplam);

    return 0;
}

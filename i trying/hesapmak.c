#include <stdio.h>
#include <math.h>


int main() {
    int secenek;
    float sayi1, sayi2;

    printf("Hesap makinesine hosgeldin.\n");
    printf("Yapmak istediginiz islemi seciniz. \n");
    printf("1. Toplama \n");
    printf("2. Cikarma \n");
    printf("3. Carpma \n");
    printf("4. Bolme \n");
    printf("Cikmak icin kapat yaziniz \n");


    scanf("%d", &secenek);
while(secenek != -1){
    printf("islem yapilacak sayilari giriniz: \n");
    scanf("%f %f", &sayi1, &sayi2);

    switch(secenek) {
        case 1:
            printf("Toplam: %.2f\n", sayi1 + sayi2);
            break;
        case 2:
            printf("Fark: %.2f\n", sayi1 - sayi2);
            break;
        case 3:
            printf("Carpim: %.2f\n", sayi1 * sayi2);
            break;
        case 4:
            if (sayi2 != 0)
                printf("Bolum: %.2f\n", sayi1 / sayi2);
            else
                printf("Hata: Sifira bolunemez!\n");
            break;
        default:
            printf("Gecersiz secim!\n");
    }
    printf("------\n");
    printf("Yapmak istediginiz islemi seciniz. \n");
    printf("1. Toplama \n");
    printf("2. Cikarma \n");
    printf("3. Carpma \n");
    printf("4. Bolme \n");
    printf("Cikmak icin -1 yaziniz \n");
    scanf("%d", &secenek);
}
printf("bay bay\n");


    return 0;
}
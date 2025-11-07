#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char secenek[10];
    int secim;
    int dil;
    double a, b;

    printf("\n--- Welcome / Hosgeldiniz ---\n");
    printf("Press 1 for English // Turkce icin 0'a basiniz: ");
    scanf("%d", &dil);

    while (1) {
        if (dil == 1) {
            printf("\n--- Calculator Menu ---\n");
            printf("1 - Addition\n");
            printf("2 - Subtraction\n");
            printf("3 - Multiplication\n");
            printf("4 - Division\n");
            printf("5 - Square root\n");
            printf("6 - Exponentiation\n");
            printf("Type 'close' to exit.\n");
            printf("Your choice: ");
        } 
        else if (dil == 0) {
            printf("\n--- Hesap Makinesi Menusu ---\n");
            printf("1 - Toplama\n");
            printf("2 - Cikarma\n");
            printf("3 - Carpma\n");
            printf("4 - Bolme\n");
            printf("5 - Karekok\n");
            printf("6 - Us alma\n");
            printf("'kapat' yazarak cikis yapin.\n");
            printf("Seciminiz: ");
        } 
        else {
            printf("Invalid selection / Gecersiz secim!\n");
            break;
        }

        scanf("%s", secenek);

        if (strcmp(secenek, "kapat") == 0) {
            printf("Bay bay!\n");
            break;
        } 
        else if (strcmp(secenek, "close") == 0) {
            printf("Goodbye!\n");
            break;
        }

        secim = atoi(secenek); // Stringi sayı yapıo

        switch (secim) {
            case 1:
                if (dil == 1) printf("Enter two numbers: ");
                else printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                if (dil == 1) printf("Result: %.2f\n", a + b);
                else printf("Sonuc: %.2f\n", a + b);
                break;

            case 2:
                if (dil == 1) printf("Enter two numbers: ");
                else printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                if (dil == 1) printf("Result: %.2f\n", a - b);
                else printf("Sonuc: %.2f\n", a - b);
                break;

            case 3:
                if (dil == 1) printf("Enter two numbers: ");
                else printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                if (dil == 1) printf("Result: %.2f\n", a * b);
                else printf("Sonuc: %.2f\n", a * b);
                break;

            case 4:
                if (dil == 1) printf("Enter two numbers: ");
                else printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    if (dil == 1) printf("Error: Cannot divide by zero!\n");
                    else printf("Hata: 0'a bolunmez!\n");
                } else {
                    if (dil == 1) printf("Result: %.2f\n", a / b);
                    else printf("Sonuc: %.2f\n", a / b);
                }
                break;

            case 5:
                if (dil == 1) printf("Enter a number: ");
                else printf("Bir sayi girin: ");
                scanf("%lf", &a);
                if (a < 0) {
                    if (dil == 1) printf("Error: No real square root for negative numbers!\n");
                    else printf("Hata: Negatif sayilarin koku olmaz!\n");
                } else {
                    if (dil == 1) printf("Result: %.2f\n", sqrt(a));
                    else printf("Sonuc: %.2f\n", sqrt(a));
                }
                break;

            case 6:
                if (dil == 1) printf("Enter base and exponent: ");
                else printf("Taban ve us girin: ");
                scanf("%lf %lf", &a, &b);
                if (dil == 1) printf("Result: %.2f\n", pow(a, b));
                else printf("Sonuc: %.2f\n", pow(a, b));
                break;

            default:
                if (dil == 1) printf("Invalid operation!\n");
                else printf("Gecersiz islem!\n");
                break;
        }
    }

    return 0;
}

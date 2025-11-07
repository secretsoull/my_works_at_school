#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char secenek[5];
    int secim;
    double a , b;


    
    while(1) {

        printf("\n==== Hesap Makinesi ====\n");
        printf("1 - Toplama\n");
        printf("2 - Cikarma\n");
        printf("3 - Carpma\n");
        printf("4 - Bolme\n");
        printf("5 - Karekok\n");
        printf("6 - Us alma\n");
        printf("'kapat' yazarak cikis yapin.\n");
        printf("Seciminiz: ");
        scanf("%s", secenek);

        if (strcmp(secenek, "kapat") == 0) {  // kapat çalışıyor bu sayede, kapat yazınca değer 0 oluyor eşitleniyor gibi
            printf("program kapatildi. \n");
            break;
        }

        secim = atoi(secenek);  // atoi() yazı yazılırsa string sayı yazılırsa int olarak kabul eder

        switch(secim){
            case 1:
                printf("iki sayi girin: \n");  //%lf double için kullandık
                scanf("%lf %lf", &a, &b);
                printf("sonuc: %.2f", a + b);
                break;
            case 2:
                printf("iki sayi girin: \n");
                scanf("%lf %lf", &a, &b );
                printf("sonuc: %.2f", a - b);
                break;
            case 3:
                printf("iki sayi girin: \n");
                scanf("%lf %lf", &a, &b);
                printf("sonuc: %.2f", a * b);
                break;
            case 4:
                printf("iki sayi giriniz: \n");
                scanf("%lf %lf", &a, &b);
                printf("sonuc: %.2f", a / b);
                break;
            case 5:
                printf("bir sayi girin \n");
                scanf("%lf", &a);
                if (a<0) {
                    printf("negatif sayilarin koku olmaz \n");

                }
                else {
                    printf("sonuc: %.2f", sqrt(a));  // sqrt() karekök almak için

                }
                break;
            case 6:
                printf("taban ve us girin: \n");
                scanf("%lf %lf", &a, &b);
                printf("sonuc: %.2f", pow(a,b)); //  pow() üs almak için
                break;
            default:
                printf("gecersiz islem \n");


        }

    }
    return 0;

}
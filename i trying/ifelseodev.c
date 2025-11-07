#include <stdio.h>
#include <math.h>

int main(){

    float ara_sinav1;
    float ara_sinav2;
    float final;
    float ortalama;
    int devam_et = 1;


    printf("merhaba \n");
    printf("not hesaplamak icin yonergeyi uygulayin. \n");


    while(devam_et == 1){



    printf("1. ara sinav notunu giriniz: \n");
    scanf("%f", &ara_sinav1);

    printf("2. ara sinav notunu giriniz: \n");
    scanf("%f", &ara_sinav2);

    printf("final notunu giriniz: \n");
    scanf("%f", &final);

    ortalama = (ara_sinav1 * 0.20) + (ara_sinav2 * 0.30) + (final * 0.50);
    printf("ortalama: %.2f\n", ortalama);

    if (ortalama>=90){
        printf("harf notunuz A\n");
    }
    else if (ortalama>=80){
        printf("harf notunuz B\n");
    }
    else if (ortalama>=70){
        printf("harf notunuz C\n");
    }
    else if (ortalama>=60){
        printf("harf notunuz D\n");
    }
    else{
        printf("harf notunuz F\n");
    }

    printf("\nBaska bir not hesaplamak ister misiniz?\n");
    printf("Devam etmek icin 1, cikis yapmak icin 0 giriniz: ");
    scanf("%d", &devam_et);
}

printf("baybay\n");

    //NOLUR YARDIM EDİN

    return 0;



}
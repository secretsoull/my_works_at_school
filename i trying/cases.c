#include <stdio.h>

int main(void){

    int secim;

    printf("Merhaba, hosgeldiniz.\n");


    while (secim != 0){

    printf("lutfen 1 ile 10 arasinda bir sayi seciniz.\n");
    scanf("%d", &secim);

     if (secim > 10){
        printf("gecersiz islem\n");
    }

    switch(secim){
        case 1:
        printf("1 sayisini sectiniz\n");
        break;
        case 2:
        printf("2 sayisini sectiniz\n");
        break;
        case 3:
        printf("3 sayisini sectiniz\n");
        break;
        case 4:
        printf("4 sayisini sectiniz\n");
        break;
        case 5:
        printf("5 sayisini sectiniz\n");
        break;
        case 6:
        printf("6 sayisini sectiniz\n");
        break;
        case 7:
        printf("7 syisini sectiniz\n");
        break;
        case 8:
        printf("8 sayisini sectiniz\n");
        break;
        case 9:
        printf("9 sayisini sectiniz\n");
        break;
        case 10:
        printf("10 sayisini sectiniz\n");
        break;
    }
    }

    printf("baybay\n");

    return 0;

}
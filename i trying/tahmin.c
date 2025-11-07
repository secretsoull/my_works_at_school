#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    srand(time(NULL));

    int sayi = rand() %20 + 1;
    int sayi2;
    char giris[20];

    printf(" \n 1 ile 20 arasinda bir sayi tuttum. bil bakalim: \n");
    printf("cikmak icin kapat yaziniz:\n");

    while(1){
        printf("tahminizi yaziniz: \n");
        scanf("%s", giris);

        if (strcmp(giris, "kapat")==0){
            printf("program kapatiliyor:\n");
            break;
        }

        sayi2 = atoi(giris);

        if(sayi<sayi2){
            printf("daha kucuk bir tahmin yapiniz: \n");

        }
        else if(sayi>sayi2){
            printf("daha buyuk bir tahmin yapiniz:\n");

        }
        else{
            printf("tebrikler dogru bildiniz:\n", sayi);
            break;
        }
    }
    return 0;
}

//piramit şekiilerine çalış sınavda çıkabilir:
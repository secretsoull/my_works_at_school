#include <stdio.h>

int main(void){

    int i;
    float sayi,toplam;

    i=1;
    toplam=0.0;

    while(i<=0){

        printf("%d. sayi giriniz:\n", i);
        scanf("%f", &sayi);

        if(sayi>10){
            toplam=toplam+sayi;

        }
        i=i+1;
    }

    printf("positive sayilarin toplami %5.2lf\n", toplam);

    return(0);

}
#include <stdio.h>

int main(){

    int sayac = 0;
    int not;
    int toplamNot = 0;

    printf("Not'u giriniz, cikmak icin -1 yazin.\n");
    scanf("%d", &not);

    while(not != -1){
        toplamNot = toplamNot + not;
        sayac = sayac + 1;
        printf("Not'u giriniz, cikmak icin -1 yazim.\n");
        scanf("%d", &not);

    
    }

    float ortalama = toplamNot / sayac;
    printf("%d ogrencinin not ortalamasi: %.2f\n", sayac,ortalama);


    return 0;
}
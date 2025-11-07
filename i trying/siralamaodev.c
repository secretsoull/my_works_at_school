#include <stdio.h>

int main(){

    int sayi1,sayi2,sayi3,sayi4;

    printf("dort sayi giriniz:  ");
    scanf("%d%d%d%d", &sayi1, &sayi2, &sayi3, &sayi4);

    int kucuktenbuyuk = (sayi1 <= sayi2) && (sayi2 <= sayi3) && (sayi3 <= sayi4);
    int buyuktenkucuk = (sayi1 >= sayi2) && (sayi2 >= sayi3) && (sayi3 >= sayi4);

    while (kucuktenbuyuk || buyuktenkucuk){

        if (sayi1 <= sayi2 && sayi2 <= sayi3 && sayi3 <= sayi4){
            printf("sayilariniz kucukten buyuge sirali\n");
            return 0;
        }

        else if(sayi1 >= sayi2 && sayi2 >= sayi3 && sayi3 >=sayi4){
            printf("sayilariniz buyukten kucuge sirali\n");
            return 0;
        }
    }

    printf("sayilariniz sirali degil\n");
    return 0;
    
}
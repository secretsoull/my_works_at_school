#include <stdio.h>

int main(){

    int not;
    int aSay = 0, bSay = 0, cSay = 0, dSay = 0, fSay = 0;

    printf("harf notlarini giriniz\n");
    printf("cikis icin EOF karakterini girin. \n");

    while ((not = getchar())!=EOF){

        switch(not){
            case 'A': case'a':
            ++aSay;
            break;

            case 'B': case 'b':
            ++bSay;
            break;

            case 'C': case 'c':
            ++cSay;
            break;

            case 'D': case 'd':
            ++dSay;
            break;

            case 'F': case 'f':
            ++fSay;
            break;

            case '\n': case' ':
            break;

            default:
            printf("yanlis harf notu girildi.");
            printf("yeni bir not girin \n");
            break;
        
    

        }

         printf("\nHER HARF NOTU ICIN TOPLAM: \n");
         printf("A: %d\n", aSay);
         printf("B: %d\n", bSay);
         printf("C: %d\n", cSay);
         printf("D: %d\n", dSay);
         printf("F: %d\n", fSay);
    }

    printf("baybay\n");

        return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi;


    while (sayi != 0){
    
    printf("--------------\n");
    printf("bir sayi giriniz: \n");
    scanf("%d", &sayi);


        if (sayi%2 != 0)
        {
            printf("bu sayi tek sayi \n");
        }
        else
        {
            printf("bu sayi cift sayi\n");
        }

    }

    printf("bay bay\n");

    return 0;
}

// operatörlere çalış
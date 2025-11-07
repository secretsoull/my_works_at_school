#include <stdio.h>

int main(){

    int x;

    for (x = 1; x<=10; x++){
        if (x==5)
        continue;
        printf("%d\n", x);
    }
    printf("continue ifadesi 5 degerinin atlanmasi icin kullanildi\n", x);
    printf("x in son degeri: %d\n", x);

    return 0;
}
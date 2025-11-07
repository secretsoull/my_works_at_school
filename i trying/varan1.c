#include <stdio.h>
#include <math.h>

int main() {
    float sayi1;
    float sayi2;

    printf("2 sayi giriniz:\n");
    scanf("%f %f", &sayi1,&sayi2);

    printf("sonuc: %8f\n", (sayi1+sayi2)/2);

    return 0;

}

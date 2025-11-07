#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{

    int x;
    int y;

    printf("bir sayi gir: ");
    scanf("%d", &x); // scanf kullanıcının bir sayı girmesini sağlar.
    printf("girdigin sayi: %d\n", x);

    printf("bi sayi daha gir: ");
    scanf("%d", &y);
    printf("girdiğin sayi: %d\n", y);

    int n = 5;
    float m = 7.5;

    int d = n + m;
    float s = n + m;

    printf("%d\n", d);   // integer olarak virgülsüz çıktı
    printf("%.1f\n", s); // float olarak virgüllü çıktı
}
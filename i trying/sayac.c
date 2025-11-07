#include <stdio.h>

int main(){

    int n;
    int i;
    int sayi;

    int pozitifsayac = 0;
    int negatifsayac = 0;
    int sifirsayac = 0;

    printf("kac adet sayi giriceksiniz?\n");
    scanf("%d", &n);

    if (n < 0){
        printf("pozitif bir sayi giriniz\n");
        return 1;
    }


    for (i = 1; i <= n; i++) {
        printf("%d sayiyi giriniz\n", i);
        scanf("%d", &sayi);

        if (sayi > 0){
            pozitifsayac++;
        }
        else if (sayi < 0){
            negatifsayac++;
        }
        else{
            sifirsayac++;
        }

    }

    printf("\n-----sonuclar-----\n");
    printf("pozitif sayi sayisi %d\n", pozitifsayac);
    printf("negatif sayi sayisi %d\n", negatifsayac);
    printf("sifir sayi sayisi %d\n", sifirsayac);

    return 0;

}


// slaytta while ödevini yap
// yıldızlarla şekiller yap
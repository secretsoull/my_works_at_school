#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kart_cek() {
    return (rand() % 10) + 2;
}

void oyunu_baslat() {
    int oyuncu_skoru = 0;
    int krupiye_skoru = 0;
    char secim;

    printf("\n=== Yeni El Basliyor ===\n");

    oyuncu_skoru += kart_cek();
    oyuncu_skoru += kart_cek();
    printf("Elindeki kartlarin toplami: %d\n", oyuncu_skoru);

    krupiye_skoru += kart_cek();
    printf("Krupiyenin acik karti: %d\n", krupiye_skoru);

    do {
        if (oyuncu_skoru == 21) {
            printf("BLACKJACK!\n");
            break;
        }
        
        printf("Skorunuz: %d\n", oyuncu_skoru);
        printf("Kart ister misin? (E/H): ");
        scanf(" %c", &secim);

        if (secim == 'E' || secim == 'e') {
            int yeni_kart = kart_cek();
            oyuncu_skoru += yeni_kart;
            printf("Yeni kartin: %d. Yeni skorun: %d\n", yeni_kart, oyuncu_skoru);
        }
   
        if (oyuncu_skoru > 21) {
            printf("BUST! 21'i gectin.\n");
            break;
        }

    } while (secim == 'E' || secim == 'e');

    printf("\n--- Krupiyenin Sirasi ---\n");
    if (oyuncu_skoru <= 21) {
        krupiye_skoru += kart_cek();
        printf("Krupiyenin toplam skoru: %d\n", krupiye_skoru);

        while (krupiye_skoru < 17) {
            int yeni_kart = kart_cek();
            krupiye_skoru += yeni_kart;
            printf("Krupiye yeni kart çekti. Yeni skoru: %d\n", krupiye_skoru);
        }
    }

    printf("\n---- OYUN SONUCU ----\n");
    printf("Senin skorun: %d\n", oyuncu_skoru);
    printf("Krupiyenin skoru: %d\n", krupiye_skoru);

    if (oyuncu_skoru > 21) {
        printf("21'i gectigin icin KAYBETTIN!\n");
    } else if (krupiye_skoru > 21) {
        printf("Krupiye 21'i gecti. KAZANDIN!\n");
    } else if (oyuncu_skoru > krupiye_skoru) {
        printf("Krupiyeyi gectin. KAZANDIN!\n");
    } else if (krupiye_skoru > oyuncu_skoru) {
        printf("Krupiye seni gecti. KAYBETTIN!\n");
    } else {
        printf("BERABERLIK!\n");
    }
    printf("-----------------------\n");
}

int main() {
    srand(time(NULL));

    char tekrarOyna;

    while (1) {
        oyunu_baslat();

        printf("\nTekrar oynamak ister misin? (E/H): ");
        scanf(" %c", &tekrarOyna);

        // Kullanıcı 'H' veya 'h' girerse döngüyü kır ve programdan çık.
        if (tekrarOyna == 'H' || tekrarOyna == 'h') {
            printf("Oynadiginiz icin tesekkurler!\n");
            break;
        }
    }

    return 0;
}
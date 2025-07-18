#include <stdio.h>
#include <string.h>

int main() {
    int L, p, l;
    char ulang[2];

    printf("Menghitung Luas Persegi Panjang Dengan Looping\n");
    printf("==============================================\n");

    do {
        printf("Masukan Panjang \t: ");
        scanf("%d", &p);
        printf("Masukan Lebar \t\t: ");
        scanf("%d", &l);

        L = p * l;

        printf("Maka Luas Persegi Panjang Tersebut adalah %d cm2.\n", L);
        printf("-------------------------------------------------\n");

        printf("Ulangi Proses (y / n) \t: ");
        scanf("%s", ulang);
    } while (strcmp(ulang, "y") == 0);

    printf("PROGRAM TELAH SELESAI\n");
    printf("=====================================================\n");

    return 0;
}
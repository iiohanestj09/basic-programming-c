#include <stdio.h>

int main() {
    int awal, akhir;

    printf("Mulai Berapa Cetakannya : ");
    scanf("%d", &awal);
    printf("Sampai Kapan Cetakannya : ");
    scanf("%d", &akhir);

    for (int a = awal; a <= akhir; a++) {
        printf("%d. Saya Senang Belajar Pemrograman\n", a);
    }

    return 0;
}
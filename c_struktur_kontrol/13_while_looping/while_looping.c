#include <stdio.h>

int main() {
    int awal, akhir;

    printf("Mulai Berapa Cetakannya : ");
    scanf("%d", &awal);
    printf("Sampai Berapa Cetakannya : ");
    scanf("%d", &akhir);

    int a = awal;
    while (a >= akhir) {
        printf("%d. Hello, World!\n", a);
        a--;
    }

    return 0;
}
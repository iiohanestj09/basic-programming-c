#include <stdio.h>

int main() {
    int biaya, total_biaya;

    printf("Masukkan Harga \t\t\t\t: ");
    scanf("%d", &biaya);

    if (80000 < biaya && biaya < 120000) {
        printf("Selamat, Anda Mendapatkan Potongan Harga 10%%\n");
        total_biaya = biaya * 90 / 100;
        printf("Total = Rp %d\n", total_biaya);
    } else if (biaya >= 120000) {
        printf("Selamat, Anda Mendapatkan Potongan Harga 20%%\n");
        total_biaya = biaya * 80 / 100;
        printf("Total = Rp %d\n", total_biaya);
    } else {
        printf("Maaf Anda Tidak Mendapatkan Potongan Harga\n");
        total_biaya = biaya;
        printf("Total = Rp %d\n", total_biaya);
    }

    printf("--------------------------------------------\n");
    printf("TERIMA KASIH SUDAH BERBELANJA DI SIGMA STORE\n");

    return 0;
}
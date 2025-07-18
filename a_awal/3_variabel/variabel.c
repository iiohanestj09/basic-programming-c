#include <stdio.h>

int main(){
    int umur = 18;
    printf("%d\n", umur);

    umur = 19;
    printf("%d\n\n", umur);

    int x, y, penjumlahan;
    printf("Masukkan Nilai x: ");
    scanf("%d", &x);

    printf("Masukkan Nilai y: ");
    scanf("%d", &y);

    penjumlahan = x + y;
    printf("Hasil dari %d + %d = %d\n", x, y, penjumlahan);
    return 0;
}
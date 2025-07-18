#include <stdio.h>
#include <string.h>

int main() {
    int pil;
    char jkel[20];

    printf("Pilih Salah Satu :\n");
    printf("1. Laki-laki\n2. Perempuan\n");
    printf("Pilihan : ");
    scanf("%d", &pil);

    switch (pil) {
        case 1:
            strcpy(jkel, "Laki-laki");
            break;
        case 2:
            strcpy(jkel, "Perempuan");
            break;
        default:
            strcpy(jkel, "Alomani");
            break;
    }

    printf("Jenis Kelamin Saya Adalah %s\n", jkel);

    return 0;
}
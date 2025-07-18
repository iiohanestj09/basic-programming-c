#include <stdio.h>
#include <string.h>

int main() {
    int pil, umur;
    char jkel[20], status[50], kegiatan[100], menikah[50];

    printf("Pilihlah Salah Satu :\n");
    printf("1. Laki-laki\n2. Perempuan\n");
    printf("Pilihan : ");
    scanf("%d", &pil);
    printf("Umur Anda (th) : ");
    scanf("%d", &umur);

    if (pil == 1) {
        strcpy(jkel, "Laki-laki");
        if (umur >= 27) {
            strcpy(status, "Sudah Waktunya");
            strcpy(kegiatan, "Cari Jodoh Woi");
            strcpy(menikah, " Menikah Boss!");
        } else {
            strcpy(status, "Belum Waktunya");
            strcpy(kegiatan, "Tingkatkan Kualitas Diri Anda Yaa Ganteng");
            strcpy(menikah, " Menikah Boss!");
        }
    } else if (pil == 2) {
        strcpy(jkel, "Perempuan");
        if (umur >= 25) {
            strcpy(status, "Sudah Waktunya");
            strcpy(kegiatan, "Cari Jodoh Yaa Cantik");
            strcpy(menikah, " Menikah Boss!");
        } else {
            strcpy(status, "Belum Waktunya");
            strcpy(kegiatan, "Tingkatkan Kualitas Diri Anda Yaa Cantik");
            strcpy(menikah, " Menikah Boss!");
        }
    } else {
        strcpy(jkel, "Anomali");
        strcpy(status, "Sudah Waktunya");
        strcpy(kegiatan, "Pergi!!!");
        strcpy(menikah, " Anda Mencari Jati Diri Woi");
    }

    printf("------------------------------------------------------------\n");
    printf("Anda adalah seorang %s berumur %d tahun\n", jkel, umur);
    printf("%s%s\n", status, menikah);
    printf("Silahkan %s\n", kegiatan);

    return 0;
}
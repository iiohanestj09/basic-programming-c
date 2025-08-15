#include <stdio.h>

struct dataSiswa{
    char nama[50];
    int umur;
    float nilai;
};

int main(){
    struct dataSiswa siswa1 = {"Maman", 15, 87.52};

    printf("Nama : %s\n", siswa1.nama);
    printf("umur : %d\n", siswa1.umur);
    printf("Nilai: %.2f\n", siswa1.nilai);
}
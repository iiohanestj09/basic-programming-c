#include <stdio.h>

void header(){
    printf("Selamat Datang di Aplikasi SiMaman\n");
}

void footer(){
    printf("Terima Kasih Sudah Menggunakan Aplikasi SIMaman\n");
}

void inti(int i, int j, int k){
    printf("Penjumlahan dari %d, %d, %d adalah %d\n",i, j, k, i+j+k);
}

int main(){
    header();
    inti(2, 4, 5);
    footer();
}
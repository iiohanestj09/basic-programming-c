#include <stdio.h>

int main(){
    int angka1 = 9, bilangan2 = 17;
    float desimal = 5.555;

    printf("Hello World\n");
    printf("%d dan %d\n",angka1, bilangan2);
    printf("%f\n",desimal);
    printf("%.2f\n", desimal);
    
    return 0;
}

// Cara dari Source Code (.c) -(compile)-> Object File (.o) -(linking)-> Executable File (.exe)
// gcc -c pengenalan.c -o pengenalan.o      -> Compile
// gcc pengenalan.o -o pengenalan.exe       -> Linking

//! Deklarasi = Untuk VARIABEL dan FUNGSI
/*  Variabel: int a;
    Fungsi: int coba();
*/

//! Inisialisasi = Untuk VARIABEL
/*  int a = 10;
*/

//! Definisi = Untuk FUNGSI
/*  int coba(int a){
    return a + 1;
}
*/

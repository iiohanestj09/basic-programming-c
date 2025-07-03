#include <stdio.h>

void mencari(char teks[], char karakter){
    for(int i = 0; teks[i] != '\0'; i++){
        if(teks[i] == karakter){
            printf("Karakter '%c' ditemukan pada posisi %d\n", karakter, i+1);
            return;
        }
    }

    printf("Karakter '%c' tidak ditemukan dalam teks\n", karakter);
}

int main(){
    char teks[] = "Hello World!";
    char karakter = 'W';

    mencari(teks, karakter);
}
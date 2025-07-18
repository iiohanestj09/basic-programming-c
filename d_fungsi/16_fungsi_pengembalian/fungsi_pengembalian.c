#include <stdio.h>

int tambah(int a, int b){
    return a + b;
}

float pembagian(float c, float d){
    return c / d;
}

int main(){
    printf("Nilai dari 3 + 4 = %d\n", tambah(3,4));
    printf("Nilai dari 8 / 3 = %.2f\n", pembagian(8,3));
}
#include <stdio.h>

int main(){
    int a = 10;
    printf("Nilai a = %d\n", a);
    
    a += 2;
    printf("a += 2 menjadi %d\n", a);
    
    a -= 4;
    printf("a -= 2 menjadi %d\n", a);
    
    a *= 3;
    printf("a *= 2 menjadi %d\n", a);
    
    a /= 6;
    printf("a /= 2 menjadi %d\n", a);
    
    a %= 2;
    printf("a %%= 2 menjadi %d\n", a);
}
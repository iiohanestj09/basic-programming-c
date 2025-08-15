#include <stdio.h>

int main(){
    int a = 50;
    int *b = &a;

    printf("Nilai yang disimpan di a: %d\n", a);
    printf("Address a: %p\n\n", &a);

    printf("Nilai yang disimpan di b: %p\n", b);
    printf("Address b itu sendiri: %p\n", &b);
    printf("Nilai yang ditunjuk oleh Pointer b: %d\n", *b);
}
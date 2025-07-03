#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    //^ Tipe Integer
    int varInt;
    short varShort;
    long varLong;
    long long varLongLong;
    char varChar1 = 'J';
    char varChar2 = 80;

    printf("Range Nilai int = %d --> %d\n",INT_MIN, INT_MAX);                   // 10 digit
    printf("Range Nilai short = %d --> %d\n",SHRT_MIN, SHRT_MAX);               // 5 digit
    printf("Range Nilai long = %ld --> %ld\n",LONG_MIN, LONG_MAX);              // 10 digit
    printf("Range Nilai long long = %lld --> %lld\n",LONG_LONG_MIN, LONG_LONG_MAX); // 19 digit
    printf("Range Nilai char = %d --> %d\n",CHAR_MIN, CHAR_MAX);                // 3 digit

    printf("%c\n", varChar1);
    printf("%d\n", varChar1);

    printf("%c\n", varChar2);
    printf("%d\n\n", varChar2);
    
    //TODO--------------------------------------------------------------------------------------------

    //^ Tipe Floating-Point
    float varFloat;
    double varDouble;
    long double varLongDouble;

    printf("Range Nilai float = %e --> %e\n", FLT_MIN, FLT_MAX);
    printf("Range Nilai double = %e --> %e\n", DBL_MIN, DBL_MAX);
    printf("Range Nilai long double = %e --> %e\n", LDBL_MIN, LDBL_MAX);

    //TODO--------------------------------------------------------------------------------------------
    
    //^ void
    // Void adalah prosedur, atau fungsi yang tidak mengembalikan nilai
    // Sering digunakan juga sebagai petunjuk (void pointer)
    // void ini seperti menunjukan ketiadaan tipe

    //TODO--------------------------------------------------------------------------------------------

    //^ Tambahan;
    // String --> char[x], di C string disimpan dalam kumpulan karakter di array
    // bool   --> menyimpan nilai true dan false, tapi harus menggunakan <stdbool.h>
    return 0;
}
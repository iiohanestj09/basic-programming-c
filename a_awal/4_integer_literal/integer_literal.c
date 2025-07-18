#include <stdio.h>

int main(){
    int d = 42;         // decimal (base 10)
    int o = 052;        // octal (base 8)           -> 5*8^1 + 2*8^0    = 40 + 2 = 42
    int h = 0x2a;       // hexadecimal (base 16)    -> 2*16^1 + 10*16^0 = 32 + 10 = 42
    int b = 0b101010;   // biner (base 2)           -> 1*2^5 + 0*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 42

    printf("%d\n%d\n%d\n%d\n", d, o, h, b);
    return 0;
}
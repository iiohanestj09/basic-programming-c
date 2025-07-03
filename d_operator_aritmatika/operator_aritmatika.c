#include <stdio.h>

int main(){
    //! +, -, *, /, %, ++, --

    int a = 10, b = 5;
    
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (float)a / b);
    printf("a %% b = %d\n", a % b);
    printf("++a = %d\n", ++a);
    printf("--b = %d\n", ++b);

    int hasil = 6;
    hasil++;
    printf("%d\n", hasil);

    int hasil2 = 6;
    printf("%d\n", hasil2++);
    return 0;
}
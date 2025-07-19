#include <stdio.h>

int main(){
    //! ==, !=, <, <=, >, >=
    int a = 10, b = 20;

    printf("Apakah a == b?, %d\n", (a == b));
    printf("Apakah a == b?, %s\n\n", (a == b)? "True" : "False");

    printf("Apakah a != b?, %d\n", (a != b));
    printf("Apakah a != b?, %s\n", (a != b)? "True" : "False");

    printf("Apakah a < b?, %s\n", (a < b)? "True" : "False");
    printf("Apakah a <= b?, %s\n", (a <= b)? "True" : "False");
    printf("Apakah a > b?, %s\n", (a > b)? "True" : "False");
    printf("Apakah a >= b?, %s\n", (a >= b)? "True" : "False");

    // Operator Ternary
    int age = 20;
    const char* status = (age >= 18)? "Adult" : "Minor";
    printf(status);

    return 0;
}
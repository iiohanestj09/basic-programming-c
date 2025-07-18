#include <stdio.h>

int main(){
    //! !, ||, &&
    int a = 5, b = 5;
    printf("!(a == b): %s\n", !(a == b)? "True" : "False");
    printf("(a == b) || (a > b): %s\n", ((a == b) || (a > b))? "True" : "False");
    printf("(a == b) && (a >= b): %s\n", ((a == b) && (a >= b))? "True" : "False");
}
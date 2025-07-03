#include <stdio.h>

void cariPrima(int x){
    if(x <= 1){
        printf("%d Bukan Bilangan Prima\n", x);
        return;
    }

    for(int i = 2; i <= x/2; i++){
        if(x % i == 0){
            printf("%d Bukan Bilangan Prima\n", x);
            return;
        }
    }

    printf("%d Bilangan Prima\n", x);
}

int main(){
    cariPrima(9);
    cariPrima(17);
}
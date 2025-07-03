#include <stdio.h>

int faktorial(int x){
    if(x <= 0){
        return 1;
    }
    return x * faktorial(x - 1);
}

int main(){
    printf("Faktorial dari 5 adalah %d\n", faktorial(5));
}
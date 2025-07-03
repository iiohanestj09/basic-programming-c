#include <stdio.h>
#include "Titik.h"

int main(){
    Titik t1;
    printf("Inisialisasi t1: (%d %d)\n", t1.x, t1.y);
    BT_2b(&t1, 2, 3);
    printf("Inisialisasi t1: (%d %d)\n", t1.x, t1.y);
}


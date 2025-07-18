#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            printf("Lewat angka 3 (continue)\n");
            continue;
        }

        if (i == 7) {
            printf("Berhenti di angka 7 (break)\n");
            break;
        }

        if (i == 5) {
            printf("Keluar program di angka 5 (exit)\n");
            exit(0); // langsung keluar dari program
        }

        printf("Angka: %d\n", i);
    }

    return 0;
}
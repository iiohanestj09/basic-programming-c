#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, ukuran, ukuranBaru;
    char pilihan;

    printf("Masukkan Ukurn arr: ");
    scanf("%d", &ukuran);

    arr = (int*) malloc(ukuran * sizeof(int));
    if(arr == NULL){
        printf("Gagal Mengalokasikan Memori\n");
        return 1;
    }

    for(int i = 0; i < ukuran; i++){
        *(arr + i) = i * 2;
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    printf("Ingin Menambah Ukuran arr? (y/n): ");
    scanf(" %c", &pilihan);

    if(pilihan == 'y' || pilihan == 'Y'){
        do{
            printf("Masukkan Ukuran arr yang lebih besar dari %d: ", ukuran);
            scanf(" %d", &ukuranBaru);

            if(ukuranBaru <= ukuran){
                printf("Ukuran Baru arr harus lebih besar dari %d\n", ukuran);
            }
        }while(ukuranBaru <= ukuran);

        arr = (int*) realloc(arr, ukuranBaru * sizeof(int));
        if(arr == NULL){
            printf("Gagal Mengalokasikan Memori\n");
            return 1;
        }

        for(int i = ukuran; i < ukuranBaru; i++){
            *(arr + i) = i * 2;
            printf("arr[%d] = %d\n", i, *(arr + i));
        }
    }

    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void tanyaTambah(int **arr, int *ukuran){
    int ukuranBaru;
    char pilihan;

    printf("Ingin Menambah Ukuran arr? (y/n): ");
    scanf(" %c", &pilihan);

    if(pilihan == 'y' || pilihan == 'Y'){
        do{
            printf("Masukkan Ukuran Baru arr yang Lebih Besar dari %d: ", *ukuran);
            scanf(" %d", &ukuranBaru);

            if(ukuranBaru <= *ukuran){
                printf("Ukuran Baru Harus Lebih Besar dari %d\n", *ukuran);
            }
        } while(ukuranBaru <= *ukuran);
        
        *arr = (int*) realloc(*arr, ukuranBaru * sizeof(int));
        if(*arr == NULL){
            printf("Gagal Mengalokasikan Memori\n");
            return;
        } else{
            for(int i = *ukuran; i < ukuranBaru; i++){
                *(*arr + i) = i * 2;
                printf("arr[%d] = %d\n", i, *(*arr + i));
            }
        }
        *ukuran = ukuranBaru;
    }
}

int main(){
    int *arr = NULL;
    int ukuran;
    
    printf("Masukkan Ukuran arr: ");
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

    tanyaTambah(&arr, &ukuran);

    free(arr);
    return 0;
}
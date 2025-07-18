#include <stdio.h>
#include <stdlib.h>

// Fungsi displayMatrix: Menampilkan matriks dengan batas kiri dan kanan yang menyatu dengan nilai
void displayMatrix(int **matrix, int rows, int cols) {
    printf("\nMatriks (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        // Cetak batas kiri tanpa spasi ekstra
        printf("|");
        for (int j = 0; j < cols; j++) {
            // Untuk kolom pertama tidak tambahkan spasi ekstra di depannya
            if (j == 0)
                printf("%2d", matrix[i][j]);
            else{
                // Kolom berikutnya diberi spasi sebagai pemisah antar nilai
                printf(" %2d", matrix[i][j]);
            }
        }
        // Cetak batas kanan, langsung tanpa spasi sebelum tanda '|'
        printf("|\n");
    }
}

int main(){
    int **mtrx, baris, kolom;
    int barisBaru;
    char pilihan;

    printf("Masukkan jumlah Baris dari matrix: ");
    scanf(" %d", &baris);

    printf("Masukkan jumlah Kolom dari matrix: ");
    scanf(" %d", &kolom);

    mtrx = (int**) malloc(baris * sizeof(int*));
    if(mtrx == NULL){
        printf("Gagal Mengalokasikan Memori!");
        return 1;
    }

    for(int i = 0; i < baris; i++){
        mtrx[i] = (int*) malloc(kolom * sizeof(int));
        if(mtrx[i] == NULL){
            printf("Gagal Mengalokasikan Memori!");
            return 1;
        }
    }

    // Isi element
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            *(*(mtrx + i) + j) = i * 2;

            printf("mtrx[%d][%d] = %d\n", i, j, *(*(mtrx + i) + j));
        }
    }

    // Memperbesar Ukuran matrix
    printf("Ingin menambah BARIS matrix? (y/n): ");
    scanf(" %c", &pilihan);

    if(pilihan == 'y' || pilihan == 'Y'){
        do{
            printf("Masukkan Ukuran Baris Baru yang lebih besar dari %d: ", baris);
            scanf(" %d", &barisBaru);

            if(barisBaru <= baris){
                printf("Baris Baru harus lebih besar dari %d!\n", baris);
            }
        } while(barisBaru <= baris);

        int **temp = (int**) realloc(mtrx, barisBaru * sizeof(int*));
        if(temp == NULL){
            printf("Gagal Mengalokasikan Memori!\n");
            return 1;
        } else{
            mtrx = temp;
        }

        // Mengisi Nilai di Kolom-kolom Baris Baru
        for(int i = baris; i < barisBaru; i++){
            mtrx[i] = (int*) malloc(kolom * sizeof(int));
            if(mtrx[i] == NULL){
                printf("Gagal Mengalokasikan Memori!\n");
                return 1;
            } else{
                for(int j = 0; j < kolom; j++){
                    *(*(mtrx + i) + j) = i * 2;
                }
            }
        }
        baris = barisBaru;

        // Menampilkan Matrix Baru
        printf("\n");
        displayMatrix(mtrx, baris, kolom);
    }

    // Membebaskan Kolom Matrix
    for(int i = 0; i < baris; i++){
        free(*(mtrx + i));
    }

    // Membebaskan Baris Matrix
    free(mtrx);
}
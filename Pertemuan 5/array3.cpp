#include <stdio.h>//bahasa c

int main() {
    
    int matriks1[2][2];
    int matriks2[2][2];
    int hasilTambah[2][2];
    int hasilKali[2][2] = {0};

    printf("\nMatriks 1\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i+1, j+1);
            scanf("%d", &matriks1[i][j]);
        }
    }

    printf("\nMatriks 2\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i+1, j+1);
            scanf("%d", &matriks2[i][j]);
        }
    }

    printf("\nHasil Penjumlahan Matriks:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasilTambah[i][j] = matriks1[i][j] + matriks2[i][j];
            printf("%d\t", hasilTambah[i][j]);
        }
        printf("\n");
    }

    printf("\nHasil Perkalian Matriks:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasilKali[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                hasilKali[i][j] += matriks1[i][k] * matriks2[k][j];
            }
            printf("%d\t", hasilKali[i][j]);
        }
        printf("\n");
    }

    return 0;
}
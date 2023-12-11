#include<stdio.h>

// fungsi untuk menampilkan matrix
void tampilkan_matrix(int baris, int kolom)
{
    // deklarasi variabel array matrix
    int matrix[baris][kolom];
    // deklarasi variabel perulangan
    int i, j;

    // perulangan matrix 
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    // output matrix
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    // deklarasi variabel
    int baris, kolom;
    // input 
    scanf("%d %d", &baris, &kolom);

    // memanggil fungsi matrix
    tampilkan_matrix(baris, kolom);

    return 0;
}
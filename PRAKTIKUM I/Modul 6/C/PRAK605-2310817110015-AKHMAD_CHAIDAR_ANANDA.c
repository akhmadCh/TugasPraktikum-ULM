#include<stdio.h>

// fungsi  
int perkalian_matrix(int ordo)
{
    // deklarasi variabel array matrix
    int matrixA[ordo][ordo], matrixB[ordo][ordo];
    // deklarasi variabel perulangan
    int i, j, k;
    
    // input nilai elemen matriks A
    printf("Matriks A\n");    
    for (i = 0; i < ordo; i++){  
        for (j = 0; j < ordo; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    // input nilai elemen matriks B
    printf("Matriks B\n");
    for (i = 0; i < ordo; i++){
        for (j = 0; j < ordo; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }

    // deklarasi variabel untuk perhitungan matriks
    int hasil_matrix[ordo][ordo];
    int sum = 0;

    printf("\n");
    // perkalian matriks
    for (i = 0; i < ordo; i++){
        for (j = 0; j < ordo; j++){

            for (k = 0; k < ordo; k++){
                sum += matrixA[i][k] * matrixB[k][j];
            }
            hasil_matrix[i][j] = sum;
            printf("%d ", hasil_matrix[i][j]);
            sum = 0;
        }
        printf("\n");
    }
}

int main(){
    // deklarasi variabel
    int ordo;
    // input ordo matriks
    scanf("%d", &ordo);

    // pemanggilan fungsi perkalian matriks
    perkalian_matrix(ordo);

    return 0;
}
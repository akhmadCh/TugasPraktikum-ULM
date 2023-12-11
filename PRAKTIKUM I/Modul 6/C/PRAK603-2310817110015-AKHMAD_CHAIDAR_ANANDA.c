#include<stdio.h>

int perkalian_matrix(int n1, int n2)
{
    // deklarasi variabel array matriks
    int matrix_1[n1];
    int matrix_2[n2];
    // deklarasi variabel perulangan
    int i, j;

    // kondisi dan perulangan
    if (n1 == n2){
        for (i = 0; i < n1; i++){
            scanf("%d", &matrix_1[i]);
        }
        for (j = 0; j < n2; j++){
            scanf("%d", &matrix_2[j]);
        }
        printf("\n");

        // perkalian matriks 1 dan matriks 2
        int sum = 0;
        for (i = 0; i < n1 && i < n2; i++){
            sum = matrix_1[i] * matrix_2[i];
            printf("%d ", sum);
        }
    } else {
        printf("Jumlah tidak sama");
    }
}

int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    perkalian_matrix(n1, n2);

    return 0;
}
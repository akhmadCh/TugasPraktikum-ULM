#include<stdio.h>

// fungsi untuk menghitung matrix
int kelipatan_matrix(int jml_ruang)
{
    // deklarasi variabel dan
    // deklarasi array matrix
    int i, j;
    int arr[jml_ruang];

    // input 
    for (i = 0; i < jml_ruang; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    // menghitung kelipatan dan menampilkan output
    for (i = 0; i < jml_ruang; i++){
        printf("%d ", arr[i] * (i + 1));
    }
}

int main(){

    // deklarasi variabel
    int jml_ruang;
    // input 
    scanf("%d", &jml_ruang);

    // memanggil fungsi untuk menghitung matrix
    kelipatan_matrix(jml_ruang);

    return 0;
}
#include<stdio.h>

int main(){

    // Deklarasi Variabel
    double a, b; 
    float hasil;

    // Input nilai a dan b
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &a);

    printf("Masukkan Nilai Kedua   : ");
    scanf("%lf", &b);

    // Penjumlahan a dan b
    hasil = a + b;

    // Output hasil dari penjumlahan
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", a, b, hasil);

    return 0;
}
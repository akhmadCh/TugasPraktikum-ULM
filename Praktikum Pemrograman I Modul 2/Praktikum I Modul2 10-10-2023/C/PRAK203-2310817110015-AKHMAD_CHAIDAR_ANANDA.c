#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int a,b, i,j, x,y;
    double hasil;

    // Input
    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y); 

    // Menghitung setiap variabel dari input
    hasil = (a - b) * (i / (float)j) - (x + y);
    // Output dari perhitungan
    printf("Hasil = %.3lf\n", hasil);

    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){

    // Deklarasi variabel
    // Alas (C), Tinggi(A), Sisi miring(B)
    int alas, tinggi, sisi_miring, keliling, luas;

    // Input
    scanf("%d %d", &tinggi, &sisi_miring);

    // Alas
    alas = sqrt((sisi_miring*sisi_miring) - (tinggi*tinggi));
    // Keliling
    keliling = alas + tinggi + sisi_miring;
    // Luas
    luas = 0.5 * alas * tinggi;

    // Output
    printf("Alas     = %d cm\n", alas);
    printf("Tinggi   = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas     = %d cm^2\n", luas);
    
    return 0;
}
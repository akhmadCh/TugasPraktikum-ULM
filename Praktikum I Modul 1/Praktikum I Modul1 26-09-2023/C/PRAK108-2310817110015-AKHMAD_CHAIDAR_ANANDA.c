#include<stdio.h>

int main(){

    const float PI = 3.14;
    int putaran = 5;
    int jarak_tempuh = 14;
    float r;
    
    // Mencari keliling dengan banyak putaran dan jarak tempuh
    float keliling_lingkaran = jarak_tempuh / (float) putaran;

    // Rumus mencari jari-jari 
    r = keliling_lingkaran / (2 * PI);
    
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengkel = %d Kilometer\n\n", jarak_tempuh);

    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f\n", r);

    return 0;
}
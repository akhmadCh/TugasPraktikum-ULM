#include<stdio.h>
#include<math.h>

int main(){

    // Deklarasi Variabel
    float r, r_2, tinggi;
    const float PI = 22 / (float)7;
    float volume, luas, keliling;
    // Input
    scanf("%f %f", &r, &tinggi);
    r_2 = pow(r,2); // Nilai dari r * r
    // Rumus
    volume = (PI * (r_2 * tinggi));
    luas = (2*PI*r_2) + (2*PI*r*tinggi);
    keliling = (2*PI*r);
    // Output
    printf("\nHasil Perhitungan Volume, Luas, dan Keliling: \n");
    printf("Volume \t\t= %.2f\n", volume);
    printf("luas \t\t= %.2f\n", luas);
    printf("Keliling \t= %.2f\n", keliling);

    return 0;
}
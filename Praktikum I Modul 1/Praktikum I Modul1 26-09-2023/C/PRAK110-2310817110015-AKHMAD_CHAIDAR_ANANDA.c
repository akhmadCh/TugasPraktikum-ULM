#include<stdio.h>
#include<math.h>

int main(){

    // Keliling dan luas segitiga siku-siku jika diketahui
    int alas, tinggi;
    alas = 5;
    tinggi = 12;

    // Menjumlahkan alas ditambah tinggi
    float jumlahAlasTinggi = alas + tinggi;
    
    // Mencari sisi miring menggunakan rumus Pythagoras
    // menggunakan fungsi square root yaitu mencari nilai akar dari library math.h
    int sisi_miring = sqrt((alas*alas) + (tinggi*tinggi));

    // Mencari keliling segitiga siku-siku
    int keliling = jumlahAlasTinggi + sisi_miring;

    // Mencari luas segitiga siku-siku
    float luas = 0.5 * alas * tinggi;
    
    printf("Diketahui:\n");
    printf("Alas = %d\n", alas);
    printf("Tinggi = %d\n\n", tinggi);

    printf("Jawab:\n");
    printf("Sisi A = %d\n", alas);
    printf("Sisi B = %d\n", tinggi);
    printf("Sisi C = %d\n", sisi_miring);
    printf("Keliling = %d\n", keliling);
    printf("Luas = %.0f\n", luas);

    return 0;
}
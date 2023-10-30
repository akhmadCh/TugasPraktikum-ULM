#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int detik;
    int hari, jam, menit;

    // Input
    printf("");
    scanf("%d", &detik);

    // Konversi detik ke hari
    hari = detik / 86400;
    // Menghitung sisa bagi dari hari dan menghitung jumlah detik yang sudah dikonversi
    detik -= 86400 * hari;
    printf("Detik: %d\n", detik);

    // Konversi detik ke jam
    jam = detik / 3600;
    // Menghitung sisa bagi dari jam dan menghitung jumlah detik yang sudah dikonversi
    detik -= 3600 * jam;
    printf("Detik: %d\n", detik);

    // Konversi detik ke menit
    menit = detik / 60;
    // Menghitung sisa bagi dari menit dan menghitung jumlah detik yang sudah dikonversi
    detik -= 60 * menit;
    printf("Detik: %d\n", detik);


    // Pengkondisian
    if (hari == 0){
        printf("%02d:%02d:%02d", jam, menit, detik);
    } else {
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }

    return 0;
}
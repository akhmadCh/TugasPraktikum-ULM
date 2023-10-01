#include<stdio.h>

int main(){

    // panjang tiap sisi-sisi
    int pnjg_sisi1, pnjg_sisi2, pnjg_sisi3;
    int harga_tanah;

    pnjg_sisi1 = 4;
    pnjg_sisi2 = 5;
    pnjg_sisi3 = 7;
    harga_tanah = 85000;

    int keliling = pnjg_sisi1 + pnjg_sisi2 + pnjg_sisi3;
    int rumus_biaya = harga_tanah * keliling;

    printf("Diketahui:\n");   
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", pnjg_sisi1, pnjg_sisi2, pnjg_sisi3);   
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);   
    printf("Harga tanah Per Meter adalah %d\n", harga_tanah);   
    printf("Jawaban:\n");   
    printf("Biaya yang diperlukan Pak ZDengklek adalah : Rp %d\n", rumus_biaya);   

    return 0;
}
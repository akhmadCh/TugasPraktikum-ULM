#include<stdio.h>
#include<math.h>

// fungsi
int mutlak(int angka){
    // menggunakan fungsi abs()
    //fungsi dari library math.h
    int nilai_mutlak = abs(angka);

    return nilai_mutlak;
}

// fungsi
int hitung(int nilai1, int nilai2){
    int hasil = nilai1 - nilai2;

    return mutlak(hasil);
}

int main(){
    // deklarasi variabel
    int a, b, c, d;
    int hasil;

    // input
    scanf("%d %d %d %d", &a, &c, &b, &d);

    hasil = hitung(a, b) + hitung(c, d);
    // output
    printf("%d", mutlak(hasil));

    return 0;
}
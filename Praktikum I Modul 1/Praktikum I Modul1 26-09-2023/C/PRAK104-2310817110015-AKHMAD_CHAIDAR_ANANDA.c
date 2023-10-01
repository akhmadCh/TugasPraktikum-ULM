#include<stdio.h>

int main(){

    float hargaSepatuA = 400000;
    float hargaSepatuB = 350000;

    float diskonSepatuA = 0.13;
    float diskonSepatuB = 0.21;

    float hasil_potonganA = hargaSepatuA * diskonSepatuA;
    float hasil_potonganB = hargaSepatuB * diskonSepatuB;

    float hasilA = hargaSepatuA - hasil_potonganA;
    float hasilB = hargaSepatuB - hasil_potonganB;

    printf("Harga sepatu A adalah %.0f\n", hargaSepatuA);
    printf("Harga sepatu B adalah %.0f\n", hargaSepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", hasilA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", hasilB);

    return 0;
}
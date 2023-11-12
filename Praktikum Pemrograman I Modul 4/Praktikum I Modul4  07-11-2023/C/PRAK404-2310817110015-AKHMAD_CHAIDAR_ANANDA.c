#include<stdio.h>

int main(){

    // deklarasi variabel
    int pil;
    float a, b;
    float hasil;

    // perulangan 
    while (1)
    {
        // input
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pil);

        // pengkondisian
        // jika pilihan == 5 akan melakukan break terhadap perulangan
        if (pil == 5){
            printf("Terimakasih, telah menggunakan kalkulator Akhmad Chaidar Ananda");
            break;
        // jika input tidak sesuai dengan pilihan, akan melakukan perulangan kembali
        } else if (pil > 5){
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        // input nilai pertama dan kedua
        printf("Masukkan nilai pertama : ");
        scanf("%f", &a);
        printf("Masukkan nilai kedua   : ");
        scanf("%f", &b);

        // pengkondisian menggunakan switch case
        switch (pil)
        {
        // pilihan == 1
        case 1:
            hasil = a + b;
            printf("Hasil pertambahan  antara %.2f dengan %.2f adalah %.2f\n",a, b, hasil);
            break;
        
        // pilihan == 2
        case 2:
            hasil = a - b;
            printf("Hasil pengurangan  antara %.2f dengan %.2f adalah %.2f\n",a, b, hasil);
            break;
        
        // pilihan == 3
        case 3:
            hasil = a * b;
            printf("Hasil perkalian  antara %.2f dengan %.2f adalah %.2f\n",a, b, hasil);
            break;
        
        // pilihan == 4
        case 4:
            hasil = (float ) a / b;
            printf("Hasil pembagian  antara %.2f dengan %.2f adalah %.2f\n",a, b, hasil);
            break;

        }
        
    }
    
    return 0;
}
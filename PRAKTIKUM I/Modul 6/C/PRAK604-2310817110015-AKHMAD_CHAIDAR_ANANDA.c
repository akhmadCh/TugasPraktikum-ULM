#include<stdio.h>
#include<string.h>

#define TOTAL_STRINGS 2
#define MAX_STRINGS 50

int main(){
    // deklarasi variabel 
    char pesan[TOTAL_STRINGS][MAX_STRINGS];
    int hitung_bintang = 0, hitung_pagar = 0;
    char ubah_pesan[MAX_STRINGS];

    // deklarasi variabel perulangan
    int i, j;
    // input kedua pesan
    for (i = 0; i < TOTAL_STRINGS; i++){
        scanf("%[^\n]%*c", &pesan[i]);
    }

    // menghitung panjang dari kedua pesan
    int size1 = strlen(pesan[0]);
    int size2 = strlen(pesan[1]);

    // kondisi
    if (size1 != size2){
        printf("Panjang kalimat berbeda, pesan palsu"); // kondisi jika panjang pesan 1 tidak sama dengan pesan 2
    } else if (size1 == size2) { // kondisi jika panjang pesan 1 sama dengan pesan 2
        for (i = 0; i < size1; i++){
            if (pesan[0][i] == ' ' && pesan[1][i] == ' ') {
            ubah_pesan[i] = ' '; // Jika keduanya spasi akan menambahkan spasi pada output
            } else if (pesan[0][i] == pesan[1][i]) {
                ubah_pesan[i] = '*';
                hitung_bintang++;
            } else {
                ubah_pesan[i] = '#';
                hitung_pagar++;
            }
        }
        // menambahkan karakter kosong(null)
        // pada akhir baris string dalam array pada output
        ubah_pesan[size1] = '\0'; 

        // output 
        printf("%s\n", ubah_pesan);
        printf("* = %d\n", hitung_bintang);
        printf("# = %d\n", hitung_pagar);

        // kondisi apakah pesan asli atau palsu
        if (hitung_bintang >= hitung_pagar){
            printf("Pesan Asli\n");
        } else printf("Pesan Palsu\n");
    }

    return 0;
}
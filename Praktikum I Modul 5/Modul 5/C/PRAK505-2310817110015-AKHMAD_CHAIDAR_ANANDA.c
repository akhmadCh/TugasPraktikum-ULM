#include<stdio.h>

// fungsi
void Biodata(int thn_lahir, char Nama[], char asal[]){
    int tahunSekarang = 2023;
    int umur = tahunSekarang - thn_lahir;
    
    printf("Perkenalkan Nama Saya : %s\n", Nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahunSekarang);
    printf("Asal saya dari : %s\n", asal);
}

int main(){
    // deklarasi variabel
    int tahun_lahir;
    char Namaku[22], Asal[13];
    
    // input tahun lahir
    scanf("%d", &tahun_lahir);
    // Membersihkan input buffer setelah scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    // input nama dan asal
    scanf("%[^\n]%*c", &Namaku);
    scanf("%[^\n]%*c", &Asal);

    // memanggil fungsi ke dalam main
    Biodata(tahun_lahir, Namaku, Asal);

    return 0;
}
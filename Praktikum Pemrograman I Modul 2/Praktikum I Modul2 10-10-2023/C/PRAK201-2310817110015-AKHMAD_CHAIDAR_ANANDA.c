#include<stdio.h>

int main(){
    // Deklarasi Variabel
    char nama[25];
    char NIM[13];
    int paralel;
    char TTL[40];
    char alamat[20];
    char hobby[20];
    char noHP[20];

    // Input
    printf("Nama\t\t\t: ");   
    gets(nama);
    
    printf("NIM\t\t\t: ");
    scanf("%s", &NIM);
    
    printf("Kelas Paralel\t\t: ");
    scanf("%d", &paralel);

    // Membersihkan input buffer setelah scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("Tempat/Tanggal Lahir\t: ");
    gets(TTL);
    
    printf("Alamat\t\t\t: ");
    gets(alamat);
    
    printf("Hobby\t\t\t: ");
    gets(hobby);
    
    printf("No. HP\t\t\t: ");
    scanf("%s", &noHP);
    
    // Menampilkan output
    printf("\nNama\t\t\t: %s\n", nama);
    printf("NIM\t\t\t: %s\n", NIM);
    printf("Kelas Paralel\t\t: %d\n", paralel);
    printf("Tempat/Tanggal Lahir\t: %s\n", TTL);
    printf("ALamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", noHP);

    return 0;
}
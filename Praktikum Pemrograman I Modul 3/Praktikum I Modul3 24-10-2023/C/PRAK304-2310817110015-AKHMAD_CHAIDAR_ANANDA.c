#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int a;

    // Input
    printf("");
    scanf("%d", &a);

    // Pengkondisian
    if (a == 0){
        printf("Nol");
    } 
    else if (a >= 1 && a < 10){
        printf("Satuan");
    } 
    else if (a >= 11 && a <= 19){
        printf("Belasan");
    } 
    else if (a >= 10 && a <= 99){
        printf("Puluhan");
    } 
    else if (a > 99){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}
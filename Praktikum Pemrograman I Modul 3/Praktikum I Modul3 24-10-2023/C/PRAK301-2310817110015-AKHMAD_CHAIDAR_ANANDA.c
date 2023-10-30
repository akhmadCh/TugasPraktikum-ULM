#include<stdio.h>

int main(){

    // Deklarasi Variabel
    int a, b, temp;

    // Input
    printf("");
    scanf("%d %d", &a, &b);

    // Pengkondisian
    if (a > b){
        temp = a; // Variabel temporary merupakan variabel sementara yang menyimpan nilai a
        a = b;
        b = temp;
        printf("%d %d", a, b);
    } else {
        printf("%d %d", a, b);
    }

    return 0;
}
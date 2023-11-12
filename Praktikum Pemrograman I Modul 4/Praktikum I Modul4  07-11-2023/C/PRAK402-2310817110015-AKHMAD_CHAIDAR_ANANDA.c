#include<stdio.h>

int main(){

    // deklarasi variabel bilangan
    int bil;

    // input
    scanf("%d", &bil);

    // deklarasi variabel perulangan
    int i, j;
    // perulangan bilangan ganjil
    for (i = 1; i <= bil; i++){
        if (i % 2 == 1){
            printf("%d ", i);
        }
    }

    printf("\n");

    // perulangan bilangan genap
    for (j = bil; j >= 1; j--){
        if (j % 2 == 0){
            printf("%d ", j);
        }
    }

    return 0;
}
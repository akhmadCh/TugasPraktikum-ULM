#include<stdio.h>

int main(){

    // deklarasi Variabel
    int bil;
    char simbol;

    // input
    scanf("%d %c", &bil, &simbol);

    // deklarasi Variabel
    // perulangan
    int i;
    for(i = 1; i <= 50; i++){

        // pengkondisian
        if (i % bil == 0){
            printf("%c ", simbol);
            continue;
        }

        // output 
        printf("%d ", i);
    }
    
    return 0;
}
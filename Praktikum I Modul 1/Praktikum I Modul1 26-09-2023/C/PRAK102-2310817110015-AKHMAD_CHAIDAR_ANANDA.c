#include<stdio.h>

int main(){

    int a, b, c;
    a = 4;
    b = 8;
    c = 3;
    float hasil;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    hasil = a * b / (float)c;
    printf("Hasil dari a dikali b dibagi c adalah %f", hasil);

    return 0;
}
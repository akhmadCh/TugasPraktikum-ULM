#include<stdio.h>

int main(){

    int a, b;
    int x, y;
    float hasil;
    a = 9;
    b = 6;
    x = 10;
    y = 7;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    hasil = (a + b) * (x / (float) y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", hasil);

    return 0;
}
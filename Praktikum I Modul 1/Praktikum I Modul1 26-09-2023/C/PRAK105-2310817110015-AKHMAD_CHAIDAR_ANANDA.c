#include<stdio.h>

int main(){

    int a, b;
    int x, y;

    a = 9;
    b = 5;
    x = 8;
    y = 8;

    int modulusA = a % b;
    int modulusB = x % y;

    printf("Variabel bernilai %d\n", a);
    printf("Variabel bernilai %d\n", b);
    printf("Variabel bernilai %d\n", x);
    printf("Variabel bernilai %d\n", y);
    printf("Total sisa bagi dari %d dibagi %d dan %d dibagi %d adalah %d dan %d\n", a, b, x, y, modulusA, modulusB);

    return 0;
}
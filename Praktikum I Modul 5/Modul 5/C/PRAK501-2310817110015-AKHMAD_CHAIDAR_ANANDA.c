#include<stdio.h>

// fungsi 
int MaxBilangan(int a, int b, int c, int d){
    // pengkondisian
    if (a > b && a > c && a > d){
        return a;
    } else if (b > c && b > d){
        return b;
    } else if (c > d){
        return c;
    } else {
        return d;
    }
}

int main(){
    // deklarasi variabel
    int a, b, c, d;
    int hasil;

    // input
    scanf("%d %d %d %d", &a, &b, &c, &d);

    hasil = MaxBilangan(a, b, c, d);
    // output
    printf("%d", hasil);

    return 0;
}
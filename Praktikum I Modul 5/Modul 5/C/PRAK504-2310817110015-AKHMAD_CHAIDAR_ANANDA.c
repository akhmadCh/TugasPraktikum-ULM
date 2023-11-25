#include<stdio.h>

// fungsi
int reverse(int nilai){
    // deklarasi variabel
    int reverseNilai = 0, sisa_bagi;
    
    // perulangan
    while (nilai != 0){
        sisa_bagi = nilai % 10;
        reverseNilai = reverseNilai * 10 + sisa_bagi;
        nilai /= 10;
    }
    return reverseNilai;
}

int main(){
    // deklarasi variabel
    int A, B, C;

    // input A dan B
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);
    C = A + B;
    
    // output
    printf("%d\n", reverse(C));

    return 0;
}
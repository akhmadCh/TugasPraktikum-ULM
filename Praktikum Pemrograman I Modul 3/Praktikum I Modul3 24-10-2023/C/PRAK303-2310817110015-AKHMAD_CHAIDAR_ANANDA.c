#include<stdio.h>

int main(){
    
    // Deklarasi Variabel
    int nilai;

    // Input
    scanf("%d", &nilai);

    // Pengkondisian
    if (nilai >= 1){
        printf("positif");
    } 
    else if (nilai < 0){
        printf("negatif");
    } 
    else {
        printf("nol");
    }
    
    return 0;
}
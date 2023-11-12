#include<stdio.h>

int main(){

    // deklarasi variabel
    int a, b;

    // input
    scanf("%d %d", &a, &b);

    // deklarasi variabel perulangan
    int i, j;

    if (a < b){
        for(i = a; i <= b; i++){
            for(j = b; j >= a; j--){
                if (j != a) {
                    printf("%d %d - ",i, j);
                    i += 1;
                } else {
                    printf("%d %d", i, j);
                }
            }
        }
    } else if (a > b) {
        for(i = a; i >= b; i--){
            for(j = b; j <= a; j++){
                if (j != a){
                    printf("%d %d - ",i, j);
                    i -= 1;
                } else {
                    printf("%d %d", i, j);
                }
            }
        }
    }
    
    return 0;
}
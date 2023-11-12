#include<stdio.h>

int main(){

    // deklarasi variabel
    int baris, kelipatan, hasil, temp;

    // input
    scanf("%d %d", &baris, &kelipatan);

    // deklarasi variabel perulangan
    int i, j;
    // nested loops
    for(i = 1; i <= baris; i++){
        
        // variabel temp akan tetap bernilai nol
        // variabel sementara yang menyimpan hasil penjumlahan dari setiap kelipatan
        temp = 0;
        // perulangan
        for(j = i; j > 0; j--){
            
            temp += j * kelipatan;
            hasil += j * kelipatan;
            
            // kondisi
            if (j == 1){
                printf("(%d * %d) ", j, kelipatan);
            } else {
                printf("(%d * %d) + ", j, kelipatan);
            }
        
        }
        // output hasil sementara dari setiap penjumlahan
        printf("= %d\n", temp);

    }
    
    // output hasil dari setiap penjumlahan
    printf("%d", hasil);

    return 0;
}
/*
for(i = 1; i <= a; i++){
        printf("%di ", i);
        //for(j = 1; j <= i; j++){
            
            for(j = 1; j < i; j++){
                printf("%dj ", j);
                for(k = j; k < j; ++k);
                k += 1;;
                printf("%djj ", j);
            }
            //j += 1;
        //}
        printf("\n");
    }
*/


/*
for(i = 1; i <= a; i++){
        printf("%d. ", i);
        for(j = 1; j < i; j++){
            printf("%d,", j);
        }
        printf("\n");
    }
*/

/*
for(i = 1; i <= a; i++){
        //printf("%d", i);
        for(j = 1; j <= i; j++){
            printf("(%d * %d)", i, b);
        }
        printf(" = %d\n", hasil);
    }
*/
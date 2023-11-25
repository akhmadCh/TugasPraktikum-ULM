#include<stdio.h>

// fungsi
int maksimal(int max, int num){
    // kondisi
    if (max < num){
        max = num;

        return max;
    } 
}

// fungsi
int minimal(int min,int num){
    // kondisi
    if (min > num){
        min = num;

        return min;
    }
}

int main(){
    // deklarasi variabel
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan, nilai;

    // input bilangan
    scanf("%d", &bilangan);

    // perulangan
    while (batas < bilangan){
        // input nilai
        scanf("%d", &nilai);
        
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);\

        // increment variabel batas
        batas++;
    }

    // output
    printf("%d %d", maks, minim);

    return 0;
}
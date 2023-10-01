#include<stdio.h>

int main(){

    // Jumlah pasukan Yu Zhong
    int pasukan_YuZhong = 958730;
    // Jumlah anggota dragon altar
    int dragon_altar = 5;

    // Jumlah pasukan yang harus dikalahkan setiap pahlawan
    float jumlah = pasukan_YuZhong / (float) dragon_altar;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_YuZhong);
    printf("Jumlah pahlawan = %d\n", dragon_altar);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0f\n", jumlah);

    return 0;
}
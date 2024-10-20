#include <stdio.h>

int main (){
    int pasukan = 958730;
    int pahlawan = 5;
    int jumlah_perpahlawan = pasukan / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", jumlah_perpahlawan);
    return 0;
}
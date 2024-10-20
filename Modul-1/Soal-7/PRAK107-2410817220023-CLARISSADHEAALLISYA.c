#include <stdio.h>

int main (){
    int sisi1, sisi2, sisi3;
    sisi1 = 4; sisi2 = 5; sisi3 = 7;
    int keliling = sisi1 + sisi2 + sisi3;
    int harga_permeter = 85000;
    int biaya_total = keliling * harga_permeter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, ", sisi1);
    printf("%d, dan ", sisi2);
    printf("%d\n", sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_permeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya_total);
    return 0;
}
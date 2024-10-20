#include <stdio.h>

int main (){
    float putaran = 5;
    float jarak = 14;
    float jarijari = jarak / (2 * 3.14 * 5);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijari);
    return 0;
}
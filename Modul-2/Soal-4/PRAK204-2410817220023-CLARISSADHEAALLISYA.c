#include <stdio.h>

int main(){
    // test case 1
    float radius, tinggi, volume, luas, keliling;
    scanf("%f", &radius); 
    scanf("%f", &tinggi);

    volume = radius * radius * tinggi * 22/7;
    luas= 2 * radius * (radius + tinggi) * 22/7;
    keliling= 2 * radius * 22/7;

    printf("Volume = %.2f \n", volume);
    printf("Luas = %.2f \n", luas);
    printf("Keliling = %.2f \n", keliling);
    printf("\n");

    // test case 2
    float radius2, tinggi2, volume2, luas2, keliling2;
    scanf("%f", &radius2); scanf("%f", &tinggi2);

    volume2 = radius2 * radius2 * tinggi2 * 22/7;
    luas2 = 2 * radius2 * (radius2 + tinggi2) * 22/7;
    keliling2 = 2 * radius2 * 22/7;

    printf("Volume = %.2f \n", volume2);
    printf("Luas = %.2f \n", luas2);
    printf("Keliling = %.2f \n", keliling2);
    return 0;
}
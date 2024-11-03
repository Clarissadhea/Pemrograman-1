#include <stdio.h>
#include <math.h>

int main(){
    // test case 1
    float A, B, C, keliling, luas;
    scanf("%f", &A); scanf("%f", &B);

    C = sqrt((B * B) - (A * A));
    keliling = A + B + C;
    luas = 0.5 * C * A;

    printf("Alas = %.f cm\n", C);
    printf("Tinggi = %.f cm\n", A);
    printf("Keliling = %.f cm \n", keliling);
    printf("Luas = %.f cm^2\n", luas);
    printf("\n");

    // test case 2
    float A2, B2, C2, keliling2, luas2;
    scanf("%f", &A2); scanf("%f", &B2);

    C2 = sqrt((B2 * B2) - (A2 * A2));
    keliling2 = A2 + B2 + C2;
    luas2 = 0.5 * C2 * A2;

    printf("Alas = %.f cm\n", C2);
    printf("Tinggi = %.f cm\n", A2);
    printf("Keliling = %.f cm \n", keliling2);
    printf("Luas = %.f cm^2\n", luas2);
    return 0;
}
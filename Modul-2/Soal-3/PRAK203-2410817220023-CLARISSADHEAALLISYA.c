#include <stdio.h>

int main () {
    //test case 1
    float a, b, i, j, x, y;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    printf("%.3f", (a - b) * (i / j) - (x + y));
    
    //test case 2
    float a2, b2, i2, j2, x2, y2;
    
    scanf("%f %f", &a2, &b2);
    scanf("%f %f", &i2, &j2);
    scanf("%f %f", &x2, &y2);
    printf("%.3f", (a2 - b2) * (i2 / j2) - (x2 + y2));
    return 0;
} 
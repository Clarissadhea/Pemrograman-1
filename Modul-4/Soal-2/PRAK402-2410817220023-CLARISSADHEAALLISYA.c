#include <stdio.h>

int main () {
    int batas, i;

    scanf("%d", &batas);

    for (i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    i = batas; 
    if (i % 2 != 0) { 
        i--;
    }
    for (; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    return 0;
}
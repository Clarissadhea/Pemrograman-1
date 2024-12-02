#include <stdio.h>

int main () {
    int n, kelipatan, i, j, hasil, total = 0;

    scanf("%d %d", &n, &kelipatan);

    for (i = 1; i <= n; i++) {
        hasil = 0;
        for (j = i; j >= 1; j--) {
            hasil += j * kelipatan;
            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil);
        total += hasil;
    }
    printf("%d\n", total);
    return 0;
}
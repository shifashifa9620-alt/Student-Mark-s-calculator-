
#include <stdio.h>

int main() {
    int a, b, c, d, e, total;
    float percentage;

    printf("Enter 5 subject marks:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    percentage = total / 5.0;

    printf("Total = %d/500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (a >= 35 && b >= 35 && c >= 35 &&
        d >= 35 && e >= 35) {
        printf("Result = PASS\n");
    } else {
        printf("Result = FAIL\n");
    }

    return 0;
}

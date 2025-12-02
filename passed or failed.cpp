#include <stdio.h>

int main() {
    int a, b, c, d, e;

    // Reading five subject marks
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Check if all marks are greater than 34
    if (a > 34 && b > 34 && c > 34 && d > 34 && e > 34)
        printf("PASSED");
    else
        printf("FAILED");

    return 0;
}


#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    for(int i = A; i <= B; i++) {
        printf("%d x %d = %d", N, i, N * i);
    }

    return 0;
}

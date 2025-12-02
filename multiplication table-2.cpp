#include <stdio.h>

int main() {
    int N, R;
    scanf("%d %d", &N, &R);

    for(int i = 1; i <= R; i++) {
        printf("%d x %d = %d", N, i, N * i);
    }

    return 0;
}



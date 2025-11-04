#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int min_votes = (M / 2) + 1;
    printf("%d",min_votes);
    return 0;
}

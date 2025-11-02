#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int total_amount = N * 2000;
    int notes_500 = total_amount / 500;
    printf("%d",notes_500);
    return 0;
}

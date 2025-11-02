#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int total = 4 * x;
    if(total <= 1000)
    printf("YES");
    else
    printf("NO");
    return 0;
}

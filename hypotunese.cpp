#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float h;
    scanf("%d%d",&x,&y);
    h=sqrt(x*x+y*y);
    printf("%.2f",h);
    return 0;
}


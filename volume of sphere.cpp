#include<stdio.h>
#define PI_APPROX 3.14
int main()
{
    int R;
    if(scanf("%d",&R)!=1)
    {
        return 1;
    }
    double volume = (4.0/3.0)*PI_APPROX*R*R*R;
    printf("%.2f",volume);
    return 0;
}]

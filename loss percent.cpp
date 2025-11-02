#include<stdio.h>
int main()
{
    float cp,sp,losspercent;
    scanf("%f%f",&cp,&sp);
    losspercent=((cp-sp)/cp)*100;
    printf("%.2f",losspercent);
    return 0;
}


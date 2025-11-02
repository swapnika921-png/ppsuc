#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,CI,A;
    scanf("%f %f %f",&P,&R,&T);
    A=P*pow((1+R/100),T);
    CI=A-P;
    printf("%.2f",CI);
    return 0;
}

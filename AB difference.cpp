#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B;
    scanf("%d %d", &A, &B);
    int correct = A + B;
    int wrong = A * B;
    int difference = abs(correct - wrong);
    printf("%d",difference);
  return 0;   
}

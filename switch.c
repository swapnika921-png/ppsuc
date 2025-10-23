#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter operator(+,*,-,/,%):");
	scanf("%c",&op);
	printf("enter two values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
    case '+':c=a+b;
         printf("Addition is :%d",c);
         break;
    case '-':c=a-b;
         printf("subtraction is :%d",c);
         break;
    case '*':c=a*b;
         printf("multiplication is :%d",c);
         break;
	case '/':c=a/b;
         printf("Division is :%d",c);
         break;
	case '%':c=a%b;
         printf("Remainder is :%d",c);
         break;	 
		 	        
    default:printf("Invalid Operator");
		 break;
	}    
    return 0; 
}

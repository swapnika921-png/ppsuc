#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,root1,root2,realpart,imagpart;
	printf("Enter coefficients a,b and c:");
	scanf("%1f %1f %1f",&a,&b,&c);
	d=b * b - 4 * a * c;
	if (d > 0)
	{
		root1 = (-b + sqrt(d)) / (2 * a);
		root2 = (-b - sqrt(d)) / (2 * a);
		printf("root = %.2lf and root2 = %.2lf",root1,root2);		
	}
	else if (d == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf",root1);
	}
	else
	{
		realpart = -b / (2 * a);
		imagpart = sqrt(-b) / (2 * a);
		printf("root1=%.2lf=%.2lfi and root2=%.2f-%.2fi",realpart,imagpart,realpart,
		imagpart);
	}
	
	return 0;
}

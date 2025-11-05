#include<stdio.h>
int main()
{
	int a[10],n,i,key,found=0;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("element found at index:%d",i);
			found = 1;
			break;
		}
	}
	if(found==0)
	{
		printf("element not found");
	}
}

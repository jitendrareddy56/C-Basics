#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Two Numbers : ");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is Bigger",a);
	}
	else if(a<b)
	{
		printf("%d is Bigger",b);
	}
	else
	{
		printf("%d and %d are equal",a,b);
	}
}

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter Four Numebrs : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is Largest",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("%d is Largest",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d is Largest",c);
	}
	else
	{
		printf("%d is Largest",d);
	}
}

#include<stdio.h>
void main()
{
	int a;
	printf("Give one Numbers:");
	scanf("%d",&a);
	if(((a%3)&&(a%7))==0)
	{
			printf("Divisible by both 3 and 7");
	}
	else
	{
			printf("Not Divisible by both 3 and 7");
	}
}

#include<stdio.h>
void main()
{
	int a;
	printf("Enter Marks : ");
	scanf("%d",&a);
	if(a>=80)
	{
		printf("Grade is A");
	}
	else if(70<=a && a<80)
	{
		printf("Grade is B");
	}
	else if(60<=a && a<70)
	{
		printf("Grade is C");
	}
	else if(50<=a && a<60)
	{
		printf("Grade is D");
	}
	else 	
	{	
		printf("Fail");
	}
}

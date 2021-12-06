#include<stdio.h>
void main()
{
	int A1,A2;
	printf("Give Two Numbers:");
	scanf("%d %d",&A1,&A2);
	if(A1>A2)
	{
			printf("Biggest of %d and %d is : %d",A1,A2,A1);
	}
	else
	{
			printf("Biggest of %d and %d is : %d",A1,A2,A2);
	}
	
}

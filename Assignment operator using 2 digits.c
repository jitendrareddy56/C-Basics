#include<stdio.h>
void main()
{
		int A,B;
		printf("Enter Two Numbers");
		scanf("%d %d",&A,&B);
		A += B; 
		A -= B;
		B *= A;
		B /= A;
		A %= B;
		printf("A = %d and B = %d",A,B);
		
}

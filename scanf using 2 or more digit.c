/* program using scanf in 2 or more digits*/
#include<stdio.h>
void main()
{
		int a,b,c;
		printf("Enter three numbers");
		scanf("%d%d%d",&a,&b,&c);
		printf("First Number is :%d\n",a);
		printf("Second Number is :%d\n",b);
		printf("Third Number is :%d\n",c);
		printf("Addition of the numbers is : %d\n",a+b+c);
		printf("Subtraction of the numbers is : %d\n",a-b-c);
		printf("Multiplication of the numbers is : %d\n",a*b*c);
}

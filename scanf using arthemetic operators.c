/* program using scanf using arthemetic operators*/
#include<stdio.h>
void main()
{
		int a,b,c,d;
		printf("Enter Four Numbers : ");
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("Product  of the numbers %d, %d, %d, %d is : %d\n",a,b,c,d,(a*b*c*d));
		printf("Addition  of the numbers %d, %d, %d, %d is : %d\n",a,b,c,d,(a+b+c+d));
		printf("Subtraction  of the numbers %d, %d, %d, %d is : %d\n",a,b,c,d,(a-b-c-d));
}

/* program to decode the three given characters into output*/
#include<stdio.h>
void main()
{
		char a,b,c;
		printf("Enter three characters : ");
		scanf("%c%c%c",&a,&b,&c);
		printf("Corresponding ASCII numbers for given numbers is : %d %d %d",a-95,b-95,c-95);
} 

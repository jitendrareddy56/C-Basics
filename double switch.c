#include<stdio.h>
void main()
{
	int main_choice,sub_choice;
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("Choose any one of the following\n1.Arthemetic Operator\n2.Relational Operations\n3.Bitwise Operations\n");
	scanf("%d",&main_choice);
	switch(main_choice)
	{
		case 1:
			printf("choose one of the following Arthemetic Operations\n 1.+\n 2.-\n3.*\n4./\n5.%%");
			scanf("%d", &sub_choice);
			switch(sub_choice)
			{
				case 1:
					printf("%d + %d = %d",a,b,a+b);
					break;
				case 2:
					printf("%d - %d = %d",a,b,a-b);
					break;
				case 3:
					printf("%d * %d = %d",a,b,a*b);
					break;
				case 4:
					printf("%d / %d = %d",a,b,a/b);
					break;
				case 5:
					printf("%d %% %d = %d",a,b,a%b);
					break;
			break;
			}
		
		case 2:
			printf("choose one of the following Relational Operations\n 1.>\n 2.>=\n3.<\n4.<=/n5.==\n6.!=");
			scanf("%d",&sub_choice);
			switch(sub_choice)
			{
				case 1:
					printf("%d > %d = %d",a,b,a>b);
					break;
				case 2:
					printf("%d >= %d = %d",a,b,a>=b);
					break;
				case 3:
					printf("%d < %d = %d",a,b,a<b);
					break;
				case 4:
					printf("%d <= %d = %d",a,b,a<=b);
					break;
				case 5:
					printf("%d == %d = %d",a,b,a==b);
					break;
				case 6:
					printf("%d != %d = %d",a,b,a!=b);
					break;
			}
	    }
}
			

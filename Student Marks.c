/* C program to write the marks of the students*/
#include<stdio.h>
void main()
{
		// Variable Declaration
		
		int physics;
		int chemistry;
		int maths;
		int english;
		int Total;
		
		// Initilization
		
		physics = 24;
		chemistry = 40;
		maths = 58;
		english = 60;
		Total = 24+40+58+60;
		// Output
		
		printf("Physics Marks: %d\n",physics);
		printf("Chemistry Marks: %d\n",chemistry);
		printf("Maths Marks: %d\n",maths);
		printf("English Marks: %d\n",english);
		printf("Total = %d+%d+%d+%d\n",physics,chemistry,maths,english);
		printf("Total Marks = %d",Total);
				
}


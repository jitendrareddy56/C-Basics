#include<stdio.h>
void main()
{
		int A = 10,B = 4,C = 3;
		A += B; // 14 4 3 
		B -= C; // 14 1 3 
		C *= A; // 14 1 42
		A /= B; // 14 1 42
		B *= C; // 14 42 42
		A += B; //  56 42 42
		printf("%d %d %d",A,B,C);
}

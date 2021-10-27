#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short Int : \nSigned : %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Un Signed : %d to %hu\n",0,USHRT_MAX);
	printf("Int : \nSigned : %d to %d\n",INT_MIN,INT_MAX);
	printf("Un Signed : %d to %u\n",0,UINT_MAX);
	printf("Long Int : \nSigned : %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Un Signed : %d to %lu\n",0,ULONG_MAX);
	printf("Long Long Int : \nSigned : %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("Un Signed : %d to %llu\n",0,ULONG_LONG_MAX);
}

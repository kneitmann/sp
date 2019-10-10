#include <stdio.h>

int main()
{
	double x;
	x = (float)7/4;
	printf("%e = (float)7/4\n", x);
	x = (double)(7/(float)4);
	printf("%e = (double)(7/(float)4)\n", x);
	x = (double)(7/4.0);
	printf("%e = (double)(7/4.0)\n", x);
	x = (double)(7/4);
	printf("%e = (double)(7/4)\n", x);
	x = (double)7/4;
	printf("%e = (double)7/4\n", x);
	x = (double)7.0f/4;
	printf("%e = (double)7.0f/4\n", x);
	return 0;
}
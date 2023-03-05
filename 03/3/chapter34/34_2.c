#include <stdio.h>

int fun2()
{
	int numArr[3][4] = { 0, };


	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d", numArr[2][3]);

	return 0;
}
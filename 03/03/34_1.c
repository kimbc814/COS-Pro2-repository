#include <stdio.h>

int fun1()
{
	int numArr1[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	printf("%d\n", numArr1[0][0]);
	printf("%d\n", numArr1[1][2]);
	printf("%d\n", numArr1[2][0]);
	printf("%d", numArr1[2][3]);

	return 0;
}